#ifndef GRADEITEM_HPP
#define GRADEITEM_HPP
#include <iostream> 
#include <string>
using namespace std;

/********************************************
 * Description of the class or code in the file:
 * This class will have every item we need about
 * the student where we have his grades and 
 * we can access it to modify it
 * Author: Barrak Mandani
 * Version: 3/11/2022
 *********************************************/

class GradeItem{

private:
	// variables
	int grade;
	int MaxGrade;
	string Date;
	string Type;
	string Description;
	int gradeS;
	int MaxgradeS;
	int HWS;
	int MaxHW;
	int Quiz;
	int MaxQuiz;
	int Exams;
	int MaxExams;
	int Total;
	int maxTotal;
public: 
	// constructor
	GradeItem(string date1, string desc ,string Type1, int Max, int grade1);
	//default constructer
	GradeItem();
	
	//setters
	void setGrade(int g);
	void setDate(string d);
	void setDescription(string desc);
	void setMaxGrade(int Max);
	void setType(string t);
	
	void setGrades(int grades);
	void setMaxGrades(int maxg);
	void setHWS(int h);
	void setMxHW(int maxH);
	void setQuiz(int q);
	void setMaxQuiz(int maxQ);
	void setExams(int e);
	void setMaxExams(int maxE);
	void setTotal(int t);
	void setmaxTotal(int mt);
	
	

	//getters
	int getGrade();
	int getMaxGrade();
	string getDate();
	string getDescription();
	string getType();
	int getGrades();
	int getMaxGradeS();
	int getHWS();
	int getMaxHw();
	int getQuiz();
	int getMaxQuiz();
	int getExams();
	int getMaxExams();
	int getTotal();
	int getmaxTotal();
	

};
#endif