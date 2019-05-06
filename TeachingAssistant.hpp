/*
//File's title - CourseMember.cpp
//Author - Jun Qi Li
//Purpose - create TeachingAssistant class and inherits from Student class
//Date of Creation - February 8, 2019
*/

#ifndef Teaching_Assistant_hpp
#define Teaching_Assistant_hpp
#include"Student.hpp"
#include<string>

//roles of the Teaching Assistant
enum ta_role {LAB_ASSISTANT, LECTURE_ASSISTANT, FULL_ASSISTANT};


class TeachingAssistant: public Student//inheriting from Student class
{
public:
	//parameterized contructor
	TeachingAssistant(int id, std::string first, std::string last);

	//returns hours_per_week_
	int getHours() const;

	//returns role_
	ta_role getRole() const;

	//assigns hours_per_week_ a value from user
	void setHours(const int hours);

	//assigns role_ from user
	void setRole(const ta_role role);

	//overrides displayMember in CourseMember
	virtual void displayMember() override;
	

private:
	int hours_per_week_;//hours as some role per week
	ta_role role_;//role of Teaching Assistant
};







#endif