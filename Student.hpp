/*
//File's title - Student.cpp
//Author - Jun Qi Li
//Purpose - create a Student hpp file for the class and also to inherit CourseMember class
//Date of Creation - February 4, 2019
*/

#ifndef Student_hpp
#define Student_hpp
#include<string>
#include"CourseMember.hpp"

class Student: public CourseMember
{
public:
	//parameterized constructor 
	Student(int id, std::string first, std::string last);

	//return major_
	std::string getMajor() const;

	//return gpa_
	double getGpa() const;
	
	//assigns major of user to major_
	void setMajor(const std::string major);
	
	//assigns gpa of user to gpa_
	void setGpa(const double gpa);

	//override displayMember in CourseMember
	virtual void displayMember() override;
	
protected:
	std::string major_;//Major of Student
	double gpa_;//GPA of student
	
};


#endif