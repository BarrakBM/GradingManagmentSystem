#include "readFile.hpp"


string FileName;

void readFile(vector<GradeItem>& v){
	//local variables to store file content
	string date,description,type ,grade, maxGrade, header;
	// ask the user the file name to read
    cout << "Enter a file name: ";
    cin >> FileName;
	
	//open the file
    ifstream file;
    file.open(FileName);
	
	if (file){
		// to know if file is open
		cout << "(" << FileName << ")" <<" File is opend!"<< endl;
		//Iterate as long as there is data in the file
		//move the file data to local variables
		getline(file,header);
	    while (file.good()){
			
			getline(file,date,',');
			getline(file,description,',');
			getline(file,type,',');
		    getline(file,maxGrade,',');
		    getline(file,grade);
			// store everthing to the vector
			v.push_back(GradeItem(date,description,type,stoi(maxGrade),stoi(grade)));
		}
	//close the file
	file.close();
		}
	else { // if the file doesn't exsitst this will be printed
		cout << "Error! The file doesn't exist!"<< endl;
	}
	
};