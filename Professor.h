#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <Person.h>

using namespace std;

class Professor : public Person
{
    public:
        Professor(const string& name, const string& office);

        const string getOffice();

    protected:

    private:
        string office;
};

#endif // PROFESSOR_H
