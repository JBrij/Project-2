//Description: this code keeps track of the names of all of the courses a student is currently taking and lists all of them.
//             It also keeps track of the professor's office location and displays the location.
//
//Author: Justin Brijmohan
//Date: 10/10/23


#include <iostream>
#include <Person.h>
#include <Student.h>
#include <Professor.h>

using namespace std;

int main()
{
    Student student("Justin Brijmohan", 10);
    student.addCourse("CS 250");
    student.addCourse("Math 308");
    student.addCourse("Art 201");
    student.addCourse("Astr 101");
    student.addCourse("CS 320");

    cout << endl << "Student: " << student.getName() << ", is taking the course(s): " << endl
         << student.getCourses();

    Professor professor("Dr. Vermilyer", "SG 4D");

    cout << endl << "Professor " << professor.getName() << "'s office is located at " << professor.getOffice() << "." << endl << endl;

    student.removeCourse("CS 320");
    student.removeCourse("Math 308");
    student.removeCourse("Astr 101");

    cout << endl << "Student: " << student.getName() << ", is taking the course(s): " << endl
         << student.getCourses();

    return 0;
}
