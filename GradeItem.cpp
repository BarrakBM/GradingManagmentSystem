#include "GradeItem.hpp" 
#include <iostream>
using namespace std;

GradeItem::GradeItem(string date1, string desc ,string Type1, int Max, int grade1){
	grade = grade1;
	MaxGrade = Max;
	Date = date1;
	Type = Type1;
	Description = desc;
	
};
//setters
void GradeItem::setGrade(int g){
	grade = g;
}

void GradeItem::setDate(string d){
	Date = d;
}
void GradeItem::setDescription(string desc){
	Description = desc;
}
void GradeItem::setMaxGrade(int Max){
	MaxGrade = Max;
}
void GradeItem::setType(string t){
	Type = t;
}
void GradeItem::setGrades(int grades1){
	gradeS = grades1;
}
void GradeItem::setMaxGrades(int maxg){
	MaxgradeS = maxg;
}
void GradeItem::setHWS(int H){
	HWS = H;
}
void GradeItem::setMxHW(int MAXH){
	MaxHW = MAXH;
}
void GradeItem::setQuiz(int Q){
	Quiz = Q;
}
void GradeItem::setMaxQuiz(int mq){
	MaxQuiz = mq;
}
void GradeItem::setExams(int e){
	Exams = e;
}
void GradeItem::setMaxExams(int me){
	MaxExams = me;
}
void GradeItem::setTotal(int t){
	Total = t;
}
void GradeItem::setmaxTotal(int mt){
	maxTotal = mt;
}
//getters
string GradeItem::getDate(){
	return Date;
}
string GradeItem::getDescription(){
	return Description;
}
string GradeItem::getType(){
	return Type;
}
int GradeItem::getGrade(){
	return grade;
}
int GradeItem::getMaxGrade(){
	return MaxGrade;
}
int GradeItem::getGrades(){
	return gradeS;
}
int GradeItem::getHWS(){
	return HWS;
}
int GradeItem::getMaxHw(){
	return MaxHW;
}
int GradeItem::getQuiz(){
	return Quiz;
}
int GradeItem::getMaxQuiz(){
	return MaxQuiz;
}
int GradeItem::getExams(){
	return Exams;
}
int GradeItem::getMaxExams(){
	return MaxExams;
}
int GradeItem::getTotal(){
	return Total;
}
int GradeItem::getmaxTotal(){
	return maxTotal;
}