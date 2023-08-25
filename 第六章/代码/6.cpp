#include <iostream>

using namespace std;

const char *qualify[5] = 
{
	"Perfect",
	"Great",
	"Good",
	"Just so so",
	"failed"
};

int main(void)
{
	int score, index;

	cout << "Enter your score:";
	cin >> score;

	if(score >= 90 && score <= 100)
		index = 0;
	else if(score >= 80 && score < 90)
		index = 1;
	else if(score >= 70 && score < 80)
		index = 2;
	else if(score >= 60 && score < 70)
		index = 3;
	else
		index = 4;

	cout << "You qualify: " << qualify[index] << endl;

	return 0;
}
