Based on the provided code, I've created a `README.md` for your project.

---

# Grade Management System

This project is designed to manage student grades. With various functionalities, a user can read files with grade data, add new items, search for items, save grade items to a file, display items, and view a summary of grade items.

## Description

The primary class in this project is `GradeItem`. This class contains the necessary items about a student, especially their grades, and allows modification of this data. 

The project also contains various utility functions for file management, display, and data manipulation.

## Files & Class Descriptions

### GradeItem

- **Header**: `GradeItem.hpp`
- **Description**: This class contains every item we need about the student, including their grades, which can be accessed and modified.
- **Author**: Barrak Mandani
- **Version**: 3/11/2022

### Other Utility Functions

- **readFile**: To read grade items from a file.
- **saveFile**: To save grade items into a different file.
- **display**: To visually display the grade items on the screen.
- **addItem**: To add a new grade item.
- **searchItem**: To search for a specific grade item based on date or description.
- **gradeSummary**: To display a summary of grade items.

## Usage

Upon running the main function, the user will be presented with a menu. Depending on the user's choice, the respective utility function will be executed.

The menu provides options to:

1. Read the file.
2. Add a new item to the file.
3. Search for an Item in the file.
4. Save the grade item into a file.
5. Display a list of grade items on screen.
6. Display a summary of grade items.
7. Exit

After completing a task, the user can return to the main menu or exit the program.

## Build & Run

Currently, no specific build or run instructions are provided. You can compile the provided `.cpp` files and execute the binary to start the application.

---

This is a basic README file and might need more information, such as dependencies, system requirements, or more detailed usage examples. You should adapt this to better fit your project's needs.
