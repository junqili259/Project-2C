#include"CourseMember.hpp"
#include"Instructor.hpp"
#include"TeachingAssistant.hpp"
#include"Student.hpp"
#include"polytest.hpp"
#include"List.hpp"
#include<fstream>
#include<string>
#include<iostream>

int main(){
	int i = 0;

	List<CourseMember*> cm_list;
	populateCmList(cm_list, "roster.csv");
	while(i < 181){
		cm_list.getItem(i++)->displayMember();
	}
	
	
	


	return 0;
}