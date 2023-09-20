#include "display.hpp"


void display(vector<GradeItem>& v){
	// creating string for the header 
	string Date = "Date";
	string Description = "Description";
	string type = "Type";
	string Max = "MaxGrade";
	string grade = "Grade";
	
	// printing the header
	printf("%-12s%-20s%-12s%-10s%-5s",
		Date.c_str(),
		Description.c_str(),
		type.c_str(),
		Max.c_str(),
		grade.c_str());
	// looping through the vector and print
	for (int i = 0; i < v.size(); i++){
		printf("\n%-12s%-20s%-12s%-10d%-5d", 
			v.at(i).getDate().c_str(),
			v.at(i).getDescription().c_str(),
			v.at(i).getType().c_str(),
            v.at(i).getMaxGrade(),
			v.at(i).getGrade());
	}
	cout << endl;
}

