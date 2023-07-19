#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	char* name;
	char* stu_no;
	float score;

	Student(const char* name1,const char* stu_no1, float score1);
	~Student();
	void modify(float score1);
	void show();

	Student() = default;
};

Student::Student(const char* name1,const char* stu_no1, float score1)
{
	name = name1;
	stu_no = new char[strlen(stu_no1) + 1];
	strcpy(stu_no, stu_no1);
	score = score1;
}

Student::~Student()
{
	delete[]name;
	delete[]stu_no;
}

void Student::modify(float score1)
{
	score = score1;
}

void Student::show()
{
	cout << "ÐÕÃû: " << name << endl;
	cout << "Ñ§ºÅ: " << stu_no << endl;
	cout << "³É¼¨£º" << score << endl;
}

int main()
{
	Student stu;
	stu.name = "Curry";
	stu.stu_no = "2020199012";
	stu.score = 99;
	stu.modify(100);
	stu.show();

	return 0;
}
