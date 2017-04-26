//
// Created by TestSmirk on 2017/4/26.
//

#ifndef TEACHER_TEACHER_H
#define TEACHER_TEACHER_H
using namespace std;

#include "string"


class Teacher {
public:
  Teacher();
  Teacher(string name,int _age=20);

void setName(string _name);
string getName();
void setGender(string _gender);
string getGender();
void setAge(int _age);
int getAge();
void teach();

private:
string m_strName;
string m_strGender;
int m_iAge;
};


#endif //TEACHER_TEACHER_H
