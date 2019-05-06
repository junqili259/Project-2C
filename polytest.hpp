//Jun Qi Li
//Purpose - Declare functions and implement them in polytest.cpp
//
//

#ifndef POLY_TEST_HPP
#define POLY_TEST_HPP

//all headers needed for project
#include"CourseMember.hpp"
#include"Instructor.hpp"
#include"TeachingAssistant.hpp"
#include"Student.hpp"
#include"List.hpp"
#include<fstream>
#include<string>


//reads from input_file
void populateCmList(List<CourseMember*>& cm_list, std::string input_file);

//Creates new object for each line in input_file and add the pointer pointing to said object to a List
void addMemberToList(List<CourseMember*>& cm_list, int id, const std::string& first_name, const std::string& last_name, const std::string& title);

//returns random gpa
double randGpa();

//returns random major
std::string randMajor();

//returns random role
ta_role randRole();

//returns random hours
int randHours();

#endif