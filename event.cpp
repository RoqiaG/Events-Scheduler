#include "Event.h"
#include <ctime>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

//with no done atttribute
Event::Event(string name, int start_date_day, int start_date_month, int start_date_year, int end_date_day, int end_date_month, int end_date_year, string place, int start_time, int end_time, int start_time_min, int end_time_min, string M) {
	Event::name = name;
	Event::start_date_day = start_date_day;
	Event::start_date_month = start_date_month;
	Event::start_date_year = start_date_year;
	Event::end_date_day = end_date_day;
	Event::end_date_month = end_date_month;
	Event::end_date_year = end_date_year;
	Event::place = place;
	Event::start_time = start_time;
	Event::end_time = end_time;
	Event::start_time_min = start_time_min;
	Event::end_time_min = end_time_min;
	Event::M = M;
	done = false;
}

//with done attribute
Event::Event(string name, int start_date_day, int start_date_month, int start_date_year, int end_date_day, int end_date_month, int end_date_year, string place, int start_time, int end_time, int start_time_min, int end_time_min, bool done, string M) {
	Event::name = name;
	Event::start_date_day = start_date_day;
	Event::start_date_month = start_date_month;
	Event::start_date_year = start_date_year;
	Event::end_date_day = end_date_day;
	Event::end_date_month = end_date_month;
	Event::end_date_year = end_date_year;
	Event::place = place;
	Event::start_time = start_time;
	Event::end_time = end_time;
	Event::start_time_min = start_time_min;
	Event::end_time_min = end_time_min;
	Event::M = M;
	Event::done = done;
}

//to get reminder day and month
void Event::reminder_date(int start_date_month, int start_date_day) {
	
}

//to get reminder hours and minutes
void Event::reminder_time(int start_time_hour, int start_time_min, string M) {

	
}
Event::~Event() {}

