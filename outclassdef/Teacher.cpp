//
// Created by TestSmirk on 2017/4/25.
//

#include <iostream>
#include "Teacher.h"

string Teacher::getName() {
    return m_strName;
}

void Teacher::setName(string _name) {
    m_strName = _name;
}

void Teacher::setAge(int _age) {
    m_iAge = _age;
}

int Teacher::getAge() {
    return 0;
}

void Teacher::teach() {
    cout<<"教书"<<endl;
}
