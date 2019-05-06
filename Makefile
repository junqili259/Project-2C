#all: CourseMember.o Instructor.o TeachingAssistant.o Student.o polytest.o main link
project2c: CourseMember.o Instructor.o TeachingAssistant.o Student.o polytest.o main.o 
	g++ -o project2c CourseMember.o Instructor.o TeachingAssistant.o Student.o polytest.o main.o

CourseMember.o: CourseMember.cpp
	g++ -c CourseMember.cpp
Instructor.o: Instructor.cpp
	g++ -c Instructor.cpp
TeachingAssistant.o: TeachingAssistant.cpp
	g++ -c TeachingAssistant.cpp
Student.o: Student.cpp
	g++ -c Student.cpp
polytest.o: polytest.cpp
	g++ -c polyest.cpp
main.o: main.cpp
	g++ -c main.cpp
#link: CourseMember.o Instructor.o TeachingAssistant.o Student.o polytest.o main.o 
	#g++ -o project2c CourseMember.o Instructor.o TeachingAssistant.o Student.o polytest.o main.o
clean:
	rm -f *.o