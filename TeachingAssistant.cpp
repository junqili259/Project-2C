/*
//File's title - CourseMember.cpp
//Author - Jun Qi Li
//Purpose - define functions from the TeachingAssistant.hpp
//			overide virtual void displayMember to print out List
*/

#include"TeachingAssistant.hpp"
#include"Student.hpp"
#include<string> 
#include<iostream>


//parameterized contructor, passes values to Student contructor
TeachingAssistant::TeachingAssistant(int id, std::string first, std::string last): Student(id, first, last){};

//returns hours_per_week_
int TeachingAssistant::getHours() const{
	return hours_per_week_;
}

//returns role_
ta_role TeachingAssistant::getRole() const{
	return role_;
}

//assigns hours_per_week_ from user
void TeachingAssistant::setHours(const int hours){
	hours_per_week_ = hours;
}

//assigns role_ from user
void TeachingAssistant::setRole(const ta_role role){
	role_ = role;
}

//prints Teaching Assistant coursemember information from pointer List
void TeachingAssistant::displayMember(){
	std::string roles[] = {"LAB_ASSISTANT", "LECTURE_ASSISTANT", "FULL_ASSISTANT"};//array of roles
	std::cout << CourseMember::getFirstName() << " " << CourseMember::getLastName() << " majors in " << Student::getMajor() << " with gpa: " << Student::getGpa();
	if (hours_per_week_ < 8)
	{												//returns position in array corresponding to role
		std::cout <<  " working part-time as a " << roles[TeachingAssistant::getRole()] << std::endl;
	}
	else											//returns position in array corresponding to role
		std::cout <<  " working full-time as a " << roles[TeachingAssistant::getRole()] << std::endl;

}
