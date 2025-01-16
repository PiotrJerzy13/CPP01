# C++ Module 01: Memory Allocation, Pointers, and References

This repository contains the solutions for **C++ Module 01**, focusing on memory allocation, pointers to members, references, and practical applications like creating classes and automating behavior.

## Table of Contents

- [Exercises Overview](#exercises-overview)
- [Getting Started](#getting-started)
- [Exercise 00: BraiiiiiiinnnzzzZ](#exercise-00-braiiiiiiinnnzzzz)
- [Exercise 01: Moar brainz!](#exercise-01-moar-brainz)
- [Exercise 02: HI THIS IS BRAIN](#exercise-02-hi-this-is-brain)
- [Exercise 03: Unnecessary Violence](#exercise-03-unnecessary-violence)
- [Exercise 04: Sed is for Losers](#exercise-04-sed-is-for-losers)
- [Exercise 05: Harl 2.0](#exercise-05-harl-20)
- [Building and Running](#building-and-running)
- [Acknowledgments](#acknowledgments)

---

## Exercises Overview

This module guides you through implementing various small projects, building your understanding of C++ basics and Object-Oriented Programming (OOP) concepts:

1. **Working with classes and methods.**
2. **Using dynamic and stack memory allocations.**
3. **Exploring pointers, references, and member function pointers.**
4. **Using smart pointers for shared ownership.**
5. **Leveraging `std::optional` and optimal headers for efficient file operations.**

---

## Getting Started

1. Clone this repository:
   ```bash
   git clone https://github.com/PiotrJerzy13/CPP01
   cd CPP01
   ```

2. Each exercise is in its respective folder (`ex00`, `ex01`, etc.). Use the `Makefile` to compile each exercise by selecting the corresponding number:
   ```bash
   make 0    # Compile Exercise 00
   make 1    # Compile Exercise 01
   make 2    # Compile Exercise 02
   make 3    # Compile Exercise 03
   make 4    # Compile Exercise 04
   make 5    # Compile Exercise 05
   ```

3. Run the resulting executable to test the functionality:
   ```bash
   ./program_name
   ```
---

## Exercise 00: BraiiiiiiinnnzzzZ

### Description:
Implement a `Zombie` class with the following features:
- A private `name` attribute.
- A `void announce()` method that outputs: `<name>: BraiiiiiiinnnzzzZ...`.

Additionally, create the following helper functions:
- `Zombie* newZombie(std::string name)`: Dynamically allocates a new zombie.
- `void randomChump(std::string name)`: Creates a zombie on the stack and calls `announce()`.

### Key Learning:
- Understand stack vs. heap memory allocation and when to use each.

---

## Exercise 01: Moar brainz!

### Description:
Create a `zombieHorde(int N, std::string name)` function that:
- Allocates a **horde** of `N` zombies dynamically.
- Initializes each zombie with the same name.
- Ensures all zombies call `announce()` and are properly destroyed.

### Key Learning:
- Handling dynamic memory allocation for arrays.
- Preventing memory leaks with proper cleanup.

---

## Exercise 02: HI THIS IS BRAIN

### Description:
Write a program that demonstrates:
- A string variable.
- A pointer (`stringPTR`) pointing to the string.
- A reference (`stringREF`) to the string.

Print:
1. The memory addresses of the string, pointer, and reference.
2. The values of the string, pointer, and reference.

### Key Learning:
- Differences between pointers and references.
- Address manipulation and their usage.

---

## Exercise 03: Unnecessary Violence

### Description:
Implement the following:
1. A `Weapon` class with `type`, `getType()`, and `setType()`.
2. `HumanA` and `HumanB` classes:
   - `HumanA` always has a weapon (passed in the constructor).
   - `HumanB` can optionally have a weapon (`setWeapon()`).

### Key Learning:
- Understand references vs. pointers in constructors.
- **Use of `std::shared_ptr`**:
  - In this exercise, `std::shared_ptr` is used to allow shared ownership of a `Weapon` object between multiple instances of `HumanB`, ensuring proper memory management.

---

## Exercise 04: Sed is for Losers

### Description:
Create a program that:
- Reads a file and replaces all occurrences of a string `s1` with another string `s2`.
- Outputs the modified content to a new file `<filename>.replace`.

Features:
- Implements file I/O using **optimal headers** like `<fstream>` and `<optional>`.
- Uses `std::optional` to handle errors gracefully during file operations.

### Key Learning:
- File I/O operations using streams.
- Efficient handling of errors with `std::optional`.
- String manipulation without direct replacement functions.

---

## Exercise 05: Harl 2.0

### Description:
Implement a `Harl` class with:
- Private methods: `debug()`, `info()`, `warning()`, and `error()`.
- A public method `void complain(std::string level)` to call the appropriate method based on the level.

Features:
- Use of **pointers to member functions** for dynamic dispatch, replacing traditional `if/else` or `switch` statements.

### Key Learning:
- Dynamic dispatch with pointers to member functions.
- Encapsulation of behavior in classes.

---
