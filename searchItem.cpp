#include "searchItem.hpp"
#include <vector>
#include "GradeItem.hpp"
#include <iostream> 

using namespace std;

void searchItem(vector<GradeItem>& v){

	int input;
	string date;
	string description;
	vector<GradeItem> s;
	// ask user what he want to search through so we can loop through the vector to get the needed data.
	cout << "If you want to search by Date press 1"<< endl;
	cout << "If you want search by Description press 2"<< endl;
	cout << "Enter you choice 1 or 2: ";
	
	cin >> input;
	// search by date
	if (input == 1){
		cout << "Please enter the date you want to search for: ";
		cin >> date;
		for (int i = 0; i < v.size(); i++ ){
			if (v[i].getDate() == date ){
				s.push_back(v[i]);
			}
		}
		display(s);
	
	} // search by description
	else if( input == 2 ){
		cout << "Please enter the description you want to search for: ";
		cin.ignore();
		getline(cin, description);
		for (int i = 0; i < v.size(); i++ ){
			if (v[i].getDescription() == description ){
				s.push_back(v[i]);
			}
		}
		display(s);
	}
	else{
		cout << "Invalid input!, please try again" << endl;
	}
}