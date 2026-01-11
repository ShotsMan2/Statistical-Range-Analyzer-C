# Statistical Range Analyzer

This project is a data analysis algorithm written in C that calculates the **Statistical Range** of a given dataset. It efficiently determines the spread of data points by identifying the boundaries (minimum and maximum values) in a single pass ($O(n)$ complexity).

## 📊 Mathematical Concept

In statistics, the **Range** is the difference between the largest and smallest values in a set of data. It serves as a basic measure of dispersion.

$$R = x_{max} - x_{min}$$

Where:
* $R$ is the Range (Difference).
* $x_{max}$ is the maximum value in the dataset.
* $x_{min}$ is the minimum value in the dataset.

## ⚙️ Algorithm Logic

1.  **Initialization:** The algorithm treats the first input as both the initial minimum and maximum.
2.  **Iteration:** It loops through the remaining inputs ($n-1$ times).
3.  **Dynamic Update:**
    * **IF** current input > $x_{max}$ **THEN** update $x_{max}$.
    * **IF** current input < $x_{min}$ **THEN** update $x_{min}$.
4.  **Calculation:** Computes the delta between the final boundaries.

## 🚀 Usage

1.  Compile the program:
    ```bash
    gcc main.c -o range_analyzer
    ```
2.  Run the executable:
    ```bash
    ./range_analyzer
    ```
3.  Input 10 integers when prompted to view the calculated range.

---
*This repository demonstrates comparison algorithms and state management in C.*
