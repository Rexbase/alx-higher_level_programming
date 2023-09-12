# 0x0A. Python - Inheritance

## Description
This project explores the concept of inheritance in Python. Inheritance is a fundamental object-oriented programming concept that allows you to create a new class based on an existing class. You will learn how to create and use derived classes, inherit attributes and methods from base classes, and override inherited methods.

## Learning Objectives
By the end of this project, you should be able to:

- Understand the concept of inheritance in object-oriented programming.
- Create derived classes that inherit from base classes.
- Access attributes and methods of base classes from derived classes.
- Override methods in derived classes.
- Use super() to call methods from a base class.

## Files
- **0-lookup.py**: A Python function `def lookup(obj)`. This function returns a list of available attributes and methods of an object.

- **1-my_list.py**: A Python class `MyList` that inherits from the built-in `list` class. It adds a method `def print_sorted(self)` that prints the list in ascending order.

- **2-is_same_class.py**: A Python function `def is_same_class(obj, a_class)` that checks if an object is an instance of a specified class.

- **3-is_kind_of_class.py**: A Python function `def is_kind_of_class(obj, a_class)` that checks if an object is an instance of a class or a class that inherited from the specified class.

- **4-inherits_from.py**: A Python function `def inherits_from(obj, a_class)` that checks if an object is an instance of a class that inherited (directly or indirectly) from the specified class.

- **5-base_geometry.py**: An empty Python class `BaseGeometry`.

- **6-base_geometry.py**: A Python class `BaseGeometry` with a method `def area(self)` that raises an Exception with the message "area() is not implemented" and a method `def integer_validator(self, name, value)` that validates the value.

- **7-base_geometry.py**: A Python class `BaseGeometry` with additional validation for `value` in `integer_validator`.

- **8-rectangle.py**: A Python class `Rectangle` that inherits from `BaseGeometry`. It has attributes `width` and `height`, and it overrides the `area` method to calculate the area of the rectangle.

- **9-rectangle.py**: A Python class `Rectangle` with additional validation for `width` and `height`.

- **10-square.py**: A Python class `Square` that inherits from `Rectangle`. It has an attribute `size` and overrides the `area` method.

## Usage
You can import and use the classes and functions in the Python scripts for various tasks.

For example:

```python
# Import the Rectangle class
from 8-rectangle import Rectangle

# Create a Rectangle object
rect = Rectangle(5, 3)

# Calculate and print the area
print("Area:", rect.area())
```

## Testing
You can create test cases to ensure that the classes and functions work as expected. The provided scripts can also be tested with various inputs.

## Author
Goodness Rex

## Acknowledgments
This project is part of the Holberton School curriculum.
