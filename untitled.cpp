#include <stdio.h>

class Student{
public:
	char *name;
	int age;
	float score;
	void say(){
		printf("%s的年龄是 %d ,成绩是 %f\n", name,age,score);
	}
};
int main(int argc, char const *argv[])
{
	
	class Student student;
	student.name = "xiaoming";
	student.age = 15;
	student.score = 92.5f;
	student.say();
	return 0;
}