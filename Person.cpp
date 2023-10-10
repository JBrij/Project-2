#include "Person.h"
#include <iostream>
#include <string>

using namespace std;


Person::Person(const string& name) : name(name)
{
    //ctor
}

const string Person::getName()
{
    return name;
}

