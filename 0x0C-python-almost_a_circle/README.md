





# 0x0C. Python - Almost a Circle

![Python](https://img.shields.io/badge/python-v3.4-blue)
![Holberton School](https://img.shields.io/badge/Holberton_School-Amazing-orange)
![GitHub last commit](https://img.shields.io/github/last-commit/yourusername/0x0C-python-almost_a_circle)

Welcome to the "0x0C-python-almost_a_circle" project! This project is part of Holberton School's Python curriculum and is designed to help you practice and understand object-oriented programming in Python.

In this project, we will create a set of classes and methods to model and manipulate basic geometric shapes, including rectangles and squares. We will also implement unit testing to ensure the correctness of our classes and methods.

## Project Structure

The project is organized into the following directories and files:

- `models/`: This directory contains the Python files for the base classes (`base.py`), the Rectangle class (`rectangle.py`), and the Square class (`square.py`).

- `tests/`: This directory contains the unit tests for the project. The tests are implemented using the `unittest` framework.

- `main_files/`: This directory contains some example Python files to demonstrate the usage of the classes.

## How to Use

To use the classes and methods provided in this project, follow these steps:

1. Clone this repository to your local machine.

   ```bash
   git clone https://github.com/yourusername/0x0C-python-almost_a_circle.git
   ```

2. Navigate to the project directory.

   ```bash
   cd 0x0C-python-almost_a_circle
   ```

3. You can import the classes from the `models/` directory into your Python scripts to create and manipulate rectangles and squares.

   ```python
   from models.rectangle import Rectangle
   from models.square import Square

   # Create instances of Rectangle and Square
   r = Rectangle(10, 5)
   s = Square(8)

   # Access attributes and call methods
   print(r.width)
   r.update(1, 20, 10)
   ```

4. To run the unit tests, navigate to the `tests/` directory and execute the test script for each class.

   ```bash
   cd tests
   python test_rectangle.py
   python test_square.py
   ```

## Documentation

You can find detailed documentation for each class and method in the docstrings within the Python files. Additionally, you can explore the unit tests in the `tests/` directory to see examples of how to use the classes.

Goodnews Rex

