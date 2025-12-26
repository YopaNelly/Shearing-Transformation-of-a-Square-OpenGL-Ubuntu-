#include <GL/glut.h>
#include <unistd.h>

float square[4][2] = {
    {0,0},
    {1,0},
    {1,1},
    {0,1}
};

float xshear = 0.5;
float yshear = 0.5;
float yref = -1;
float xref = -1;

void drawSquare(float s[4][2], float r, float g, float b) {
    glColor3f(r,g,b);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<4;i++) {
        glVertex2f(s[i][0], s[i][1]);
    }
    glEnd();
    glFlush();
}

void xShearStep(float s[4][2], float sh, float yref) {
    for(int i=0;i<4;i++) {
        s[i][0] += sh * (s[i][1]-yref);
        drawSquare(s,1,0,0); // Red for X-shear
        sleep(1);
    }
}

void yShearStep(float s[4][2], float sh, float xref) {
    for(int i=0;i<4;i++) {
        s[i][1] += sh * (s[i][0]-xref);
        drawSquare(s,0,1,0); // Green for Y-shear
        sleep(1);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw original square
    drawSquare(square,1,1,1); // White
    sleep(2);

    // Copy original square for transformation
    float temp[4][2];
    for(int i=0;i<4;i++){
        temp[i][0] = square[i][0];
        temp[i][1] = square[i][1];
    }

    // Step by step X-shear
    xShearStep(temp, xshear, yref);
    sleep(1);

    // Step by step Y-shear
    yShearStep(temp, yshear, xref);
    sleep(2);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Step-by-Step Shearing Transformation");
    glClearColor(0,0,0,1);
    gluOrtho2D(-1,3,-1,3);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

