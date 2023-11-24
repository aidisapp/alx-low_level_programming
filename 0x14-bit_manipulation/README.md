# 0x14. C - Bit Manipulation

## Introduction

This project focuses on mastering the concept of bit manipulation in C programming. The tasks involve various operations such as converting binary numbers, printing binary representations, setting, clearing, and retrieving specific bits within numbers, and counting bits required to flip between two numbers.

---

## Learning Objectives

By the end of this project, you will gain proficiency in the following:

- **Independent Information Search:** Ability to find relevant information without extensive external assistance.
- **Bitwise Operations:** Perform bit manipulation effectively using bitwise operators.

---

## Requirements

### General Guidelines

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS, gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line.
- Mandatory `README.md` file at the project's root.

Refer to the project guidelines for specific details.

---

## Tasks Overview

### Task 0: Binary to Unsigned Int

Write a function `binary_to_uint()` to convert a binary number to an unsigned int.

- **Prototype:** `unsigned int binary_to_uint(const char *b);`
- **Return:** Converted number or 0 for invalid input.

### Task 1: Print Binary Representation

Write `print_binary()` to print the binary representation of a number without using arrays or % or / operators.

- **Prototype:** `void print_binary(unsigned long int n);`

### Task 2: Retrieve Bit Value

Implement `get_bit()` to retrieve the value of a bit at a given index.

- **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`

### Task 3: Set a Bit to 1

Develop `set_bit()` to set a bit to 1 at a specific index.

- **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`

### Task 4: Set a Bit to 0

Create `clear_bit()` to set a bit to 0 at a given index.

- **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`

### Task 5: Count Bits to Flip

Write `flip_bits()` to determine the number of bits needed to flip to transform one number into another.

- **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

---

## Instructions for Each Task

Each task has specific requirements and limitations. Always check the task description and prototype provided in the project instructions. Ensure that:
- Your function adheres to the specified prototype.
- Functions return the correct values and handle edge cases appropriately.
- Follow restrictions like not using specific operators or functionalities when mentioned.

Feel free to create a separate directory for each task within your project structure. Test your functions thoroughly before submission.

---

## Additional Notes

- Avoid plagiarism. Ensure that the solutions are your own work.
- Follow coding style guidelines, including function naming conventions and code indentation.
- Submit all required files as per the project's instructions.

Best of luck with your project! Happy coding!

