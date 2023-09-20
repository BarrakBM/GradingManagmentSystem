#include "summary.hpp"



int MaxgradeS, gradeS, hwMaxGrade , hwGrade, QuizGrade, MaxQuiz, ExamGrade, MaxExamGrade,Total, maxTotal;
int classWorkGrade, maxClasswork;
int percenteg;
string homeWork = "HW";
string classWork = "ClassWork";
string Quiz = "Quiz";
string Exam = "Exam";
char letterGrade;

void gradeSummary(vector<GradeItem>& v){

// to display result 
	for(int i = 0; i < v.size(); i++){
		// get homwroks grades
		if(v[i].getType() == homeWork){
			
			hwGrade += v.at(i).getGrade();
			hwMaxGrade += v.at(i).getMaxGrade();
		}
		//get classwork grades
		if(v[i].getType() == classWork){
			
			classWorkGrade += v.at(i).getGrade();
			maxClasswork += v.at(i).getMaxGrade();
		
		}
		// get exams grades 
		if(v[i].getType() == Exam){
			ExamGrade += v.at(i).getGrade();
			MaxExamGrade += v.at(i).getMaxGrade();
		}
		// get quizzes grades
		if(v[i].getType() == Quiz){
			QuizGrade += v.at(i).getGrade();
			MaxQuiz += v.at(i).getMaxGrade();
		}
	}
	
	// calculations
	Total = ExamGrade + classWorkGrade + hwGrade;
	maxTotal = MaxExamGrade + maxClasswork + hwMaxGrade;
	

	if(percenteg > 90){
		letterGrade = 'A';
	} else if((percenteg > 80) &&(percenteg < 90)){
		letterGrade = 'B';
	} else if((percenteg > 70) &&(percenteg < 80)){
		letterGrade = 'C';
	} else if((percenteg > 60) &&(percenteg < 70)){
		letterGrade = 'D';
	} else {
		letterGrade = 'F';
	}
	
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
	cout << "-----------------------------------------------------------------------------------------" << endl;
	// printf("	Average wait time: %18d minutes and %d seconds  ",  average_wait_time, decimal);cout << endl;
	//printf("	Total car wash use time: %13d minutes", total_use_time);cout << endl;
	cout << "Summary" << endl;
	printf("HW %50d %5d ",hwMaxGrade,hwGrade ); cout << endl;
	printf("Class Work %39d %5d ",maxClasswork, classWorkGrade ); cout << endl;
	printf("Quiz %50d %5d ", MaxQuiz, QuizGrade ); cout << endl;
	printf("Exam %50d %5d ", MaxExamGrade,ExamGrade ); cout << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl;

	printf("Grand Total %10d %5d",maxTotal, Total ); cout << endl;
	printf("Grand Percentege %36d",percent ); cout << endl;
	printf("Letter Grade %45c ", letterGrade ); cout << endl;
	
	cout << endl;
}
	
