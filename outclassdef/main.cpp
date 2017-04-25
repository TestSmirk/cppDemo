#include <iostream>
#include "Teacher.h"

using namespace std;

int main() {
    cout<<"name"<<endl;
    Teacher t;
    t.setAge(12);
    t.setName("孔子");
    cout<<t.getName()<<" "<<t.getAge()<<endl;
    t.teach();
    return 0;
}