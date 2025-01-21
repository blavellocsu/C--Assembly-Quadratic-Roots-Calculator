# C++ and Assembly Quadratic Roots Calculator

This project is a simple C++ program that incorporates inline x86 Assembly to calculate the roots of a quadratic equation of the form *ax² + bx + c = 0*. :contentReference[oaicite:0]{index=0}

## Features

- **Inline Assembly Integration**: Demonstrates the use of inline assembly within a C++ program to perform mathematical computations.
- **Quadratic Equation Solver**: Calculates the real roots of a quadratic equation using the quadratic formula.

## Files

- `quadratic.cpp`: Contains the implementation of the quadratic roots calculator with inline assembly.
- `README.md`: Provides an overview and instructions for the project.
- `LICENSE`: Specifies the licensing information for the project.

## Compilation and Execution

### Prerequisites

- **C++ Compiler**: Ensure that a C++ compiler supporting inline assembly (e.g., g++) is installed on your system.

### Compilation

To compile the program, use the following command:

```bash
g++ -o quadratic_solver quadratic.cpp
```

## Execution

After compilation, run the executable to calculate the roots of the quadratic equation:
```
./quadratic_solver
```
The program will prompt you to enter the coefficients a, b, and c of the quadratic equation. It will then compute and display the roots.

## License

This project is licensed under the MIT License.

## Acknowledgments

This project was developed by Brandon Lavello as an exercise in integrating C++ and assembly language for mathematical computations. 
