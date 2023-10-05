# Simple C++ Calculator

## Table of Contents
1. [How to Use](#how-to-use)
2. [Supported Operations](#supported-operations)
3. [Troubleshooting](#troubleshooting)
4. [Complexity Analysis](#complexity-analysis)
5. [Description](#description)

---

### How to Use <a name="how-to-use"></a>

1. **Launch the Program**
   - Execute the program in a C++ environment.

2. **Enter Numbers**
   - When prompted, enter two integers or type 'R' for random numbers.

3. **Select an Operation**
   - Choose an operation (+, -, *, /, %) to perform.

4. **Get the Result**
   - The program will calculate and display the result based on your chosen operation.

5. **Supported Operations**
   - You can perform the following arithmetic operations:
     - Addition (+): Add two numbers.
     - Subtraction (-): Subtract the second number from the first.
     - Multiplication (*): Multiply two numbers.
     - Division (/): Divide the first number by the second (excluding division by zero).
     - Modulo (%): Calculate the remainder of the division (excluding modulo by zero).

---

### Supported Operations <a name="supported-operations"></a>

This calculator supports the following operations:

- **Addition (+):** Add two numbers.
- **Subtraction (-):** Subtract the second number from the first.
- **Multiplication (*):** Multiply two numbers.
- **Division (/):** Divide the first number by the second (excluding division by zero).
- **Modulo (%):** Calculate the remainder of the division (excluding modulo by zero).

---

### Troubleshooting <a name="troubleshooting"></a>

- **Division by Zero:**
  - The program provides an error message for division and modulo by zero.
  
- **Invalid Operation:**
  - If you enter an unsupported operation, the program will display an error message.

---

### Complexity Analysis <a name="complexity-analysis"></a>

**Space Complexity**
- The calculator program has constant space complexity (O(1)) as it uses a fixed amount of memory for variables and functions.

**Worst-Case Runtime Complexity**
- The worst-case runtime complexity for each operation is constant time (O(1)) due to the following explanations:
  - Addition (+): Performs addition in constant time.
  - Subtraction (-): Performs subtraction in constant time.
  - Multiplication (*): Performs multiplication in constant time.
  - Division (/): Performs division in constant time (excluding division by zero).
  - Modulo (%): Performs modulo in constant time (excluding modulo by zero).

**Error Handling**
- Division and modulo by zero are also constant time (O(1)) due to error handling. The program checks for these cases and provides appropriate error messages.

---

### Description <a name="description"></a>

This C++ calculator program is designed for performing basic arithmetic operations with ease and efficiency. It offers a user-friendly interface where you can input two integers or generate random numbers. Choose from a variety of supported operations, including addition, subtraction, multiplication, division, and modulo. 

The program is not only functional but also robust. It handles common issues such as division by zero and invalid operations gracefully, providing informative error messages.

Whether you're a beginner learning C++ or need a quick tool for simple calculations, this calculator is a valuable addition to your programming toolkit. Its minimalistic design and efficient code ensure a smooth experience while exploring arithmetic operations in C++. 

Feel free to use, modify, and contribute to this open-source project. Your feedback and contributions are highly appreciated!
