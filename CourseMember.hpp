/**
// Jun Qi Li
//  
// Purpose - define functions for CourseMember class
//  
//  
*/

#ifndef CourseMember_hpp
#define CourseMember_hpp

#include <string>

class CourseMember
{
public:
    /** Parameterized constructor
     @param id the student's unique identifier
     @param first the student's first name
     @param last the student's last name
     */
    CourseMember(int id, std::string first, std::string last);
    
    
    //********** Accessor Methods ****************
    
    /** @return returns id_; */
    int getID() const;
    
    /** @return returns first_name_ */
    std::string getFirstName() const;
    
    /** @return returns last_name_ */
    std::string getLastName() const;

    //pure virtual function of displayMember()
    //NO IMPLEMENTATION in CourseMember.cpp
    virtual void displayMember() = 0;


   


    
private:
    int id_; /** the CourseMember's ID */
    std::string first_name_; /** the CourseMember's first name */
    std::string last_name_; /** the CourseMember's last name */
    
    
}; //end CourseMember

#endif /* CourseMember_hpp */
