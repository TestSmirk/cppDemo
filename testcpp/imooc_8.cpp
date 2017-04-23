//const
#include <iostream>
using namespace std;
void fun(int i =30,int j=20,int k =10);
void fun(double i,double j);
int main(void)
{
	fun(1.0,2.0);
	fun(1,2);
	
	return 0;
}
void fun(int i ,int j,int k ){
	cout<<i<<","<<j<<","<<k<<endl;;
}

void fun(double i,double j){
	cout<<i<<",--"<<j<<endl;
}