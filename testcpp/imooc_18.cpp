#include <iostream>
#include <string>
#include <Teacher>
using namespace std;

/**
类外定义
**/



int main()
{

Teacher t;
t.setName("孔子");
t.setGender("男");
t.setAge(30);

cout<<t.getName()<<" "<< t.getAge()<<" "<<t.getGender()<<endl;
t.teach();
  
	return 0;
}