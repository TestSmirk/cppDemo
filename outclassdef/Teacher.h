//
// Created by TestSmirk on 2017/4/25.
//
#include "string"

#ifndef OUTCLASSDEF_TEACHER_H
#define OUTCLASSDEF_TEACHER_H
using namespace std;

class Teacher {
public:
    string getName();
    void setName(string _name);
    int getAge();
    void setAge(int _age);

    void teach();

private:
    int m_iAge;
    string m_strName;


};


#endif //OUTCLASSDEF_TEACHER_H
