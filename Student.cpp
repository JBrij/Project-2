#include "Student.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

Student::Student(const string& name, int taking) : Person(name), taking(taking)
{
    //ctor
}


const string Student::getCourses()
{
    string listCourses;
    for (const string& course : courses)
    {
        listCourses += course + "\n";
    }
        return listCourses;
}

void Student::addCourse(const string& course)
{
    if (courses.size() < taking)
    {
        courses.push_back(course);
        cout << course << " has been added." << endl;
    }
    else
    {
        cout << "Course limit reached." << endl;
    }
}
void Student::removeCourse(const string& course)
{
    if (!courses.empty())
    {
        cout << courses.back() << " has been removed." << endl;
        courses.pop_back();
    } else {
        cout << "No courses to remove." << endl;
    }
}

