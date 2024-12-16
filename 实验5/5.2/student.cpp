#include <iostream>
#include "student.h"  
void Student::display()
{
    std::cout << "num£º" << num << std::endl;
    std::cout << "name£º" << name << std::endl;
    std::cout << "sex£º" << sex << std::endl;
}
void Student::set_value(int n,const char* nm, char s)
{
    num = n;
    strcpy_s(name, nm);
    sex = s;
}