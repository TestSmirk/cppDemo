#include <iostream>
using namespace std;
int main(void)
{
int a = 10;
int * p = &a;//p是指针变量 指向a
int *&q = p;
*q = 20;
}