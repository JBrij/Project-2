#include "Professor.h"
#include <iostream>

using namespace std;

Professor::Professor(const string& name, const string& office) : Person(name), office(office)
{
    //ctor
}

const string Professor::getOffice()
{
    return office;
}
