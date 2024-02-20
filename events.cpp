#include "events.h"
#include <iostream>
#include <string>
#include <ctime>
#pragma warning(disable : 4996)
using namespace std;

events::events(string name, int start_date_day, int start_date_month, int start_date_year, int end_date_day, int end_date_month, int end_date_year, string place, int start_time_hour, int end_time_hour, int start_time_min, int end_time_min, bool done)
{
    events::Name = name;
    events::StartDateDay = start_date_day;
    events::StartDateMonth = start_date_month;
    events::StartDateYear = start_date_year;
    events::EndDateDay = end_date_day;
    events::EndDateMonth = end_date_month;
    events::EndDateYear = end_date_year;
    events::Place = place;
    events::StartTime_hour = start_time_hour;
    events::EndTime_hour = end_time_hour;
    events::StartTimeMin = start_time_min;
    events::EndTimeMin = end_time_min;
    events::done = done;
}

void events::ReminderDate(int StartDateYear,int StartDateMonth, int StartDateDay)
{
    // following block of code to find the current date
    time_t t = std::time(0); 
    tm* now = std::localtime(&t);
    int CuurentYear = (now->tm_year + 1900);
    int CurrentMonth = (now->tm_mon + 1);
    int CurrentDay = (now->tm_mday);
    //cout << CuurentYear << '-' << CurrentMonth << '-' << CurrentDay << "\n";
    //end of the block
}

void events::ReminderTime(int Hours, int Min)
{
    // following block of code to find the current time 
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int currenthour = ltm->tm_hour;
    int currentminute = ltm->tm_min;
    //cout << currenthour << ":" << currentminute;
    //end of the block

}


