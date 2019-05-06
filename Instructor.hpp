/*
//File's title - Instructor.hpp
//Author - Jun Qi Li
//Purpose - Create an hpp file for the Instructor class to inherit from CourseMember class
//Date of Creation - February 8, 2019
*/

#ifndef Instructor_hpp
#define Instructor_hpp
#include<string>
#include"CourseMember.hpp"//inheirit from CourseMember class

class Instructor: public CourseMember
{
public:
	//parameterized constructor
	Instructor(int id, std::string first, std::string last);

	//returns office_
	std::string getOffice() const;

	//returns contact_
	std::string getContact() const;

	//assigns user assigned value to office_
	void setOffice(const std::string office);

	//assigns user assigned value to contact_
	void setContact(const std::string contact);

	//override displayMember()
	virtual void displayMember() override;

private:
	std::string office_;
	std::string contact_;
	
};


#endif