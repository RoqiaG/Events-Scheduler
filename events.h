#include <iostream>
#include<string>
#include<vector>
using namespace std;
class events
{
public:
	string Name;
	string Place;
	string PM_or_AM;
	bool done;
	int StartDateDay;
	int StartDateMonth;
	int StartDateYear;
	int EndDateDay;
	int EndDateMonth;
	int EndDateYear;
	int StartTime_hour;
	int EndTime_hour;
	int StartTimeMin;
	int EndTimeMin;
	void ReminderDate(int StartDateYear,int StartDateMonth, int StartDateDay);
	void ReminderTime(int Hours, int Min);
	events(string name, int start_date_day, int start_date_month, int start_date_year, int end_date_day, int end_date_month, int end_date_year, string place, int start_time_hour, int end_time_hour, int start_time_min, int end_time_min, bool done);

};

