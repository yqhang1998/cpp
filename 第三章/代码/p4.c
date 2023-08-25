#include <iostream>

const int DAY_HOUR = 24;
const int HOUR_TO_MINUTE = 60;
const int MINUTE_TO_SECOND = 60;

int main(void)
{
	using namespace std;

	long long seconds;
	int days, hours, minutes;

	cout << "Please enter the number of seconds:";
	cin >> seconds;

	days = seconds / (DAY_HOUR*HOUR_TO_MINUTE*MINUTE_TO_SECOND);
	seconds = seconds % (DAY_HOUR*HOUR_TO_MINUTE*MINUTE_TO_SECOND);

	hours = seconds / (HOUR_TO_MINUTE*MINUTE_TO_SECOND);
	seconds = seconds % (HOUR_TO_MINUTE*MINUTE_TO_SECOND);

	minutes = seconds / MINUTE_TO_SECOND;
	seconds = seconds % MINUTE_TO_SECOND;

	cout << days << " days," << hours << " hours," << minutes << " minutes," << seconds << " seconds." << endl;

	return 0;
}

