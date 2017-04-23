//const
#include <iostream>
using namespace std;
void fun(int i,int j=5,int k=10);
int main(void)
{
 	fun(1,6);
	return 0;
}
void fun(int i,int j, int k){
	cout<<i<<j<<k;
}