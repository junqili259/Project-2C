//Jun Qi Li
//This cpp file implements the functions in polytest.hpp
//Purpose of these functions is to read from file and create ab object with each CourseMember and storing a pointer pointing to each into a List
//Project 2C

//All headers and files needed for project 2C
#include"CourseMember.hpp"
#include"Instructor.hpp"
#include"TeachingAssistant.hpp"
#include"Student.hpp"
#include"polytest.hpp"
#include"List.hpp"
#include<fstream>
#include<string>
#include<iostream>

//opens roster.csv assign to strings and call addMemberToList()
void populateCmList(List<CourseMember*>& cm_list, std::string input_file){
	std::ifstream in_stream;//declare ifstream object
	in_stream.open(input_file);//open roster.csv and store into in_stream
	std::string id_num, first_name, last_name, title;
	int id = 0;
	
	if (in_stream.fail())
	{
		//Error message in case roster.csv doesn't open
		std::cerr << "cannot read from roster.csv" << std::endl;
	}
	else
		while(!in_stream.eof()){
			//using ',' as delimiter to assign string to variables
			std::getline(in_stream, id_num,',');
			std::getline(in_stream, first_name, ',');
			std::getline(in_stream, last_name, ',');
			std::getline(in_stream, title, '\n');
			if (!in_stream.eof())
			{
				title.pop_back();//delete the /n at the end of each line
			}
			
			id = stoi(id_num);//converts the string stored in id_num into an int version
			addMemberToList(cm_list, id, first_name, last_name, title);
		}
		in_stream.close();//close roster.csv
}//end populateCmList


void addMemberToList(List<CourseMember*>& cm_list, int id, const std::string& first_name, const std::string& last_name, const std::string& title){
	if (title == "Student")
	{
		Student* s_ptr = new Student(id, first_name, last_name);//Initialize new Student object in heap
		
		s_ptr->setGpa(randGpa());//set random gpa
		s_ptr->setMajor(randMajor());//set random major
		
		CourseMember* c_ptr = s_ptr;//c_ptr now pointing to what s_ptr is pointing
		cm_list.insert(cm_list.getLength(), c_ptr);//add c_ptr to List of pointers
		s_ptr = nullptr;
	}
	else if (title == "Teaching Assistant")
	{
		TeachingAssistant* t_ptr = new TeachingAssistant(id, first_name, last_name);//Initialize new TeachingAssistant object in heap
		
		t_ptr->setRole(randRole());//set random role
		t_ptr->setHours(randHours());//set random hours
		t_ptr->setMajor(randMajor());//set random major
		t_ptr->setGpa(randGpa());//set random gpa
		
		CourseMember* c_ptr = t_ptr;//c_ptr now pointing to what s_ptr is pointing
		cm_list.insert(cm_list.getLength(), c_ptr);//add c_ptr to List of pointers
		t_ptr = nullptr;                                                         
	}
	else if (title == "Instructor")
	{
		Instructor* instr_ptr = new Instructor(id, first_name, last_name);//Initializw new Instructor object in heap
		
		instr_ptr->setOffice("1000C");//set given Office number 
		instr_ptr->setContact("235Instructors@hunter.cuny.edu");//set given email
		
		CourseMember* c_ptr = instr_ptr;//c_ptr now pointing to what s_ptr is pointing
		cm_list.insert(cm_list.getLength(), c_ptr);//add c_ptr to List of pointers
		instr_ptr = nullptr;
	}
}//end addMemberToList



//returns random gpa from gpa_list
double randGpa(){
	double gpa_list[] = {4.0, 3.75, 3.5, 3.25, 3.0, 2.75, 2.5, 2.25, 2.0};
	return gpa_list[rand() % 9];//return random position in array
}//end randGpa



std::string randMajor(){
	std::string major_list[] = {"Computer Science", "Literature", "Music", "Philosophy", "Physics", "Theatre", "Computational Biology", "Mathematics", "Geography",
"Linguistics"};
	return major_list[rand() % 10];//returns random position in the array
}//end randMajor


ta_role randRole(){
	ta_role pick = ta_role(rand()%3);
	return pick;//returns random value
}//end randRole


int randHours(){
	return rand() % 10;
}//end randHours