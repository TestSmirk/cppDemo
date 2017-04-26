#include <iostream>
#include "Teacher.h"

int main()
{

    Teacher t1;
    Teacher t2("Merry",15);
    Teacher t3("JEEE");

    cout<<t1.getName()<<" "<<t1.getAge()<<endl;
    cout<<t2.getName()<<" "<<t2.getAge()<<endl;
    cout<<t3.getName()<<" "<<t3.getAge()<<endl;
    return 0;
}