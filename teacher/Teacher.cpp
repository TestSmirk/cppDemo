//
// Created by TestSmirk on 2017/4/26.
//

#include "Teacher.h"
#include "iostream"
#include "string"
using namespace std;


Teacher::Teacher(){
    m_strName = "Jim";
    m_iAge = 5;
    cout<<" Teacher() "<<endl;
}
Teacher::Teacher(string name,int age){
    m_strName = name;
    m_iAge = age;
    cout<<"Teacher(string name ,int age)"<<endl;
}
void Teacher::setName(string _name){
    m_strName = _name;
}
string Teacher::getName(){
    return m_strName;
}

void Teacher::setGender(string _gender){
    m_strGender = _gender;
}

string Teacher::getGender(){
    return m_strGender;
}
void Teacher::setAge(int _age){

    m_iAge = _age;
}
int Teacher::getAge(){
    return m_iAge;
}
void Teacher::teach(){
    cout<<"上课"<<endl;
}