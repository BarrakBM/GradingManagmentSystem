#include "addItem.hpp"
using namespace std;

void addItem(vector<GradeItem>& v){
	//local variables to store file content
	string date,description,type ,grade, maxGrade;
	string FileName;
	// ask the user the file name to read
    cout << "Enter a file name: ";
    cin >> FileName;

	// open the file for writing
	ifstream infile(FileName);
	ofstream outfile; 
	// append to the file
	infile.open(FileName);
	outfile.open(FileName, ios_base::app);

	while(infile.is_open()){
		outfile << endl;
		// ask user to fill out the information 
		cout << "Please fill out the neccesory information" << endl;
		cout << "Date: " ;
		cin >> date;
		cout << "Description: ";
		cin >> description;
		cout << "Type: ";
		cin >> type;
		cout << "Grade: ";
		cin >> grade;
		cout << "Max Grade: ";
		cin >> maxGrade;
		// saving data to the vector
		v.push_back(GradeItem(date,description,type,stod(maxGrade),stod(grade)));

		//wrting date the file
		outfile << date << "," << description << "," << type << "," << maxGrade <<","<< grade;

		cout << "new data have been added to the file." << endl;
		outfile.close();
		infile.close();
	}
	
	
}

