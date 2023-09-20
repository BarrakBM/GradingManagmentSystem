#include "saveFile.hpp"
#include <iostream>



void saveFile(){

	string readingFile;
	cout << "Enter the name of the file you want to read: ";
	cin >> readingFile;

	//open file for writing 
	ifstream file(readingFile);
	ofstream outfile;
	string outputFile;

	cout << "Enter the new file name to copy data of "<< readingFile << " file: ";
    cin >> outputFile;
	//open file for writing
	outfile.open (outputFile);

	//local variables 
	string header,date,description,type,max,grade;
	
	//read first line of file
	getline(file,header);
	
	//write first line 
	outfile << header;

	while (file.good()){
		//This to end newline if there is more data.
		outfile << endl;
		//store date to local variables
        getline(file, date, ',');
        getline(file, description, ',');
        getline(file, type, ',');
        getline(file, max, ',');
        getline(file, grade);
		//write to output file
        outfile << date << "," << description << "," << type << "," << max <<","<< grade;
	}
	// close both files 
	file.close();
	outfile.close();
		
}