# Calculator-N-Operands (C)

## Overview
This project implements a dynamic calculator using C that can perform four major arithmetic operations—addition, subtraction, multiplication, and division—on a user-specified number of operands. The program efficiently processes the input through loops and switch cases to perform the chosen operation.

## Features
- **Multiple operand support**: Users can specify the number of operands to be processed.
- **Basic arithmetic operations**: Includes addition (+), subtraction (-), multiplication (*), and division (/).
- **Efficient code structure**: Uses switch cases and loops to handle different operations and operands.

## How It Works
1. The user inputs the number of operands (`n`).
2. The operands are stored in a dynamically created array.
3. Depending on the operation chosen by the user, the calculator performs the operation across all operands.

## Time and Space Complexity
- **Time Complexity**:  
  - Input Reading: O(n)  
  - Initialization: O(n)  
  - Operation Execution: O(n-1)  
  - Overall: O(n)

- **Space Complexity**:  
  - Operand storage: O(n)  
  - Additional variables: O(1)  
  - Overall: O(n)

## Prerequisites
- Basic knowledge of C programming.
- C compiler (e.g., GCC or any IDE with C support).

## Contributing
You are welcome to contribute by:
- Adding more complex operations such as modulus (%) or exponentiation.
- Improving performance for larger datasets.

## License
This project is free for use and distribution. Feel free to modify and share.

## Example Usage
```c
Enter an operator (+, -, *, /): *
Enter Number of Operands: 3
Enter 3 operands below:
2 4 5
2 x 4 x 5 = 40
