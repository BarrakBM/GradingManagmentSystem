#include <iostream>
#include <string>
#include "GradeItem.hpp"
#include "readFile.hpp"
#include "saveFile.hpp"
#include "display.hpp"
#include "addItem.hpp"
#include "searchItem.hpp"
#include "summary.hpp"

#include <vector>
using namespace std;

// menu function
void menu(){
	
	//display menu
    cout << "1. Read the file. " << endl;
	cout << "2. Add new item to the file." << endl;
	cout << "3. Search for an Item in the file."<< endl;
    cout << "4. Save the grade item into a file." << endl;
    cout << "5. Display list of grade items in screen. " << endl;
	cout << "6. Dsiplay summery of grade items." << endl;
    cout << "7. Exit" << endl; 
	cout << endl;
	
};

	vector<GradeItem> v;
	
	
int main() {
	//display menu

	menu();
  	int choice;
	string answer;
	
	
	do{  
		cout << "Enter youre choice: ";
		cin >> choice;
		// using switch to choose between cases as they represent the needed funtions
	    switch (choice)
	        {
	            case 1:
	                readFile(v);
	                break;
				case 2:
					addItem(v);
					break;
				case 3:
	                searchItem(v);
	                break;
	            case 4:
	                saveFile();
	                break;
	            case 5:
	                display(v);
	                break;
	            case 6:
					gradeSummary(v);
	                break;
				default:
					cout << "Invalid! please choose between 1-6."<< endl;
					break;
	        }
		cout << "\nPress 'y' to go back to menu or anykey to end the program: ";
		cin >> answer;
		// if y go back to menu
		if (answer == "y" ){
			menu();
		}else{
			break;
		}
		} while ( answer == "y" );
		
	
    return 0;

}; 