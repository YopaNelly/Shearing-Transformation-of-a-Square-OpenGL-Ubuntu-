# Shearing-Transformation-of-a-Square-OpenGL-Ubuntu-




# 📌 Step-by-Step Shearing Transformation of a Square (OpenGL – Ubuntu)

## 📖 Definition of Shearing Transformation

A **shearing transformation** in computer graphics is a linear mapping that **displaces each point in a fixed direction** proportional to its distance from a reference line. It effectively **slants the shape** along the X-axis or Y-axis without changing the area.

* **X-direction shear relative to Yref:** moves vertices horizontally
* **Y-direction shear relative to Xref:** moves vertices vertically

<img width="482" height="524" alt="image" src="https://github.com/user-attachments/assets/ca480639-4752-4fd8-8605-34074009aef7" />




## 🎯 Purpose of This Program

This program visually demonstrates the **shearing transformation applied step by step** on a square using **OpenGL in C**.

* Original square: **A(0,0), B(1,0), C(1,1), D(0,1)**
* X-shear and Y-shear are applied **gradually**, with each vertex moving **step by step**, making it easier to **see the effect of the transformation**.



## 🧠 Features

* Draws the **original square** (white)
* Applies **X-direction shear** relative to `Yref = -1` (red) step by step
* Applies **Y-direction shear** relative to `Xref = -1` (green) step by step
* Uses **pauses (`sleep()`)** to visualize each transformation clearly



## 📐 Shearing Details

| Shear Type  | Reference Line | Shear Factor | Vertex Transformation   |
| ----------- | -------------- | ------------ | ----------------------- |
| X-direction | Yref = -1      | 0.5          | x' = x + 0.5*(y - (-1)) |
| Y-direction | Xref = -1      | 0.5          | y' = y + 0.5*(x - (-1)) |

* **Original square vertices:** A(0,0), B(1,0), C(1,1), D(0,1)



## 🎨 Color Legend

| Color | Meaning                |
| ----- | ---------------------- |
| White | Original square        |
| Red   | X-shear transformation |
| Green | Y-shear transformation |



## 🛠️ Requirements

* Ubuntu Linux
* OpenGL
* FreeGLUT



## 📥 Install Required Libraries

```bash
sudo apt update
sudo apt install freeglut3 freeglut3-dev
```



## 📄 Files

* `shear_step.c` → Main C program for step-by-step shearing transformation



## ▶️ Steps to Compile & Run

1. Open terminal and navigate to the folder containing `shear_step.c`:

```bash
cd path/to/your/file
```

2. Compile the program:

```bash
gcc shear_step.c -o shear_step -lGL -lGLU -lglut
```

3. Run the program:

```bash
./shear_step
```



## 🧪 Program Execution

1. The **white square** is drawn first (original shape).
2. The **X-shear** is applied gradually in **red**, relative to `Yref = -1`.
3. The **Y-shear** is applied gradually in **green**, relative to `Xref = -1`.
4. **Each vertex moves step by step**, showing the deformation clearly.
5. `sleep(1)` pauses are used to make the **visualization readable**.



## 🏁 Conclusion

This program visually demonstrates **how shearing transformations affect a square**.
The **step-by-step movement of vertices** helps in understanding the effect of **X-shear and Y-shear relative to reference lines**.

* Ideal for **learning, teaching, and demonstration** in computer graphics courses.
