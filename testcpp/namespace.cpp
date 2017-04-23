#include <stdlib.h>
#include <iostream>
using namespace std;
namespace CompA{
int getMaxOrMin(int *arr ,int count,bool isMax){
	int temp = arr[0];
	for (int i = 1; i < count; ++i)
	{
		/* code */
		if (/* condition */isMax)
		{
			/* code */
			if (temp<arr[i])
		{
			/* code */
			temp=arr[i];
		}
		}else{
			if (temp>arr[i])
		{
			/* code */
			temp=arr[i];
		}

		}
		
		
	}
	return temp;
}

}

int main(int argc, char const *argv[])
{
	bool isMax = false;
	cin>>isMax;
	int arr1[4] = {3,5,1,7};
	cout<<CompA::getMaxOrMin(arr1,4,isMax)<<endl;;

	system("pause");
	return 0;
}