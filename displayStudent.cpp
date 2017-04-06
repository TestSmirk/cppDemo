#include <stdio.h>

//定义结构体 Student
struct Student
{
	const char *name;
	int age;
	float score;

};
//显示结构体都成员变量
void display(struct Student studnet){
	printf("%s的年龄是 %d, 成绩是 %f\n",studnet.name,studnet.age ,studnet.score );

}
int main()
{
	/* code */
	struct Student student;
	student.name = "小明";
	student.age = 15;
	student.score = 92.5;
	display(student);
		
	
	return 0;
}