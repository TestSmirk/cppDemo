#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct 

{
int x;
int y;
	
}Coord;
int main(int argc, char const *argv[])
{
	
	Coord c;
	Coord &c1 = c;
	c1.x = 10;
	c1.y = 20;

	cout<<c.x<<","<<c.y<<endl;
	system("pause");
	return 0;
}