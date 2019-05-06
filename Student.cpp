/*
//File's title - Student.cpp
//Author - Jun Qi Li
//Purpose - define functions from the Student class from Student.hpp
//
*/
//include student class and CourseMember class to inherit from
#include"Student.hpp"
#include"CourseMember.hpp"
#include<iostream>
#include<string>
using std::cout;
using std::endl;

//Parameterized constructor that passes values to the CourseMember contructor to initialize 
Student::Student(int id, std::string first, std::string last): CourseMember(id, first, last){};

//returns major_
std::string Student::getMajor() const{
	return major_;
}

//returns gpa_
double Student::getGpa() const{
	return gpa_;
}

//assigns major_ with the value of major from user
void Student::setMajor(const std::string major){
	major_ = major;
}

//assigns a value to gpa_ from user
void Student::setGpa(const double gpa){
	gpa_ = gpa;
}

//prints Student coursemember information from pointer List
void Student::displayMember(){
	cout << CourseMember::getFirstName() << " " << CourseMember::getLastName() << " majors in " << major_ << " with gpa: " << gpa_ << endl;
}