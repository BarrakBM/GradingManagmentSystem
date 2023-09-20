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

   - Edit these files with a text editor or an IDE of your choice. Save the changes.

## Build the Program
   - Open a terminal or command prompt.
   - Navigate to the directory where your source files and the `makefile` are located.
   - Simply type `make` and press `Enter`. This command will invoke the makefile to compile and link the code files.
   - The makefile will produce an executable named `cp` (as specified by the `TARGET` variable).

### Run the Program
   - In the same terminal or command prompt, type `./cp` and press `Enter` to run the program.
     
### Clean the Build**:
   - If you want to clean up the intermediate files (`*.o`) and the executable, type `make clean` in the terminal or command prompt. This will remove all the object files and the executable, ensuring a fresh build the next time you run `make`.


