//
// Created by TestSmirk on 2017/4/7.
//
#include <iostream>
int main() {
    int sum =0,val =1;
    while (val<=10){
        sum+=val;
        ++val;
    }
    std::cout << "sum of 1 to 10 inclusive is "<<sum<<std::endl;
    return 0;
}