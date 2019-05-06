/*
//File's title - CourseMember.cpp
//Author - Jun Qi Li
//Purpose - define functions from the Coursemember class from CourseMember.hpp
//Date of Creation - February 14, 2019
*/


//Neccessary header file containing CourseMember class and string library
#include"CourseMember.hpp"
#include<string>

//Parameterized contructor from CourseMember class defined
//Contructor initializes member variables within private assessors(id_, first_name_, last_name_)
CourseMember::CourseMember(int id, std::string first, std:: string last):id_(id), first_name_(first), last_name_(last){};


//defines function getID()
//returns id_ value
int CourseMember::getID() const{
	return id_;
}

//defines function getFirstName()
//returns first_name_ value 
std::string CourseMember::getFirstName() const{
	return first_name_;
}

//defines function getLastName
//returns last_name_ value
std::string CourseMember::getLastName() const{
	return last_name_;
}







