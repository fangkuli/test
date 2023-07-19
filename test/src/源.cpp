#include <iostream>
using namespace std;

class Score {
public:
	Score(int m = 0, int f = 0);    //带默认参数的构造函数
	void setScore(int m, int f);
	void showScore();
private:
	int mid_exam;
	int fin_exam;
};



Score::Score(int m, int f) : mid_exam(m), fin_exam(f)
{
	cout << "构造函数使用中..." << endl;
}

void Score::setScore(int m, int f)
{
	mid_exam = m;
	fin_exam = f;
}

void Score::showScore()
{
	cout << " " << mid_exam << endl;
	cout << " " << fin_exam << endl;
}

int main()
{
	Score op1(99, 100);
	Score op2(88);
	Score op3;
	op1.showScore();
	op2.showScore();
	op3.showScore();

	return 0;
}
