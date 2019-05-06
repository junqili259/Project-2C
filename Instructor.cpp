/*
//File's title - Instructor.cpp
//Author - Jun Qi Li
//Purpose - define functions from the Instructor.hpp and inherits CourseMember class public members
//			overide virtual void displayMember to print out List
*/

#include "CourseMember.hpp"
#include "Instructor.hpp"
#include<string>
#include<iostream>

//parameterized contructor, passes values to CourseMember constructor
Instructor::Instructor(int id, std::string first, std::string last): CourseMember(id, first, last){};

//returns office_
std::string Instructor::getOffice() const{
	return office_;
}

//returns contact_
std::string Instructor::getContact() const{
	return contact_;
}

//assigns value to office_ from user
void Instructor::setOffice(const std::string office){
	office_ = office;
}

//assigns value to contact_ from user
void Instructor::setContact(const std::string contact){
	contact_ = contact;
}

//prints out Instructor coursemember information
void Instructor::displayMember(){
	std::cout << CourseMember::getFirstName() << " " << CourseMember::getLastName() << " - office: " << office_ << ", email: " << contact_ << std::endl;
}