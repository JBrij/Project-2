#ifndef STUDENT_H
#define STUDENT_H

#include <Person.h>
#include <vector>

using namespace std;

class Student : public Person
{
    public:
        Student(const string& name, int taking);

        const string getCourses();

        void addCourse(const string& course);
        void removeCourse(const string& course);

    protected:

    private:

        int taking;
        vector<string> courses;
};

#endif // STUDENT_H
