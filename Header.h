#include<iostream>
using namespace std;

class DayType
{
private:
	char* day;
public:
	void daySetter(char*);
	char* returnDay(void);
	void printDay(void);
	char* returnNextDay(void);
	char* returnPreviousDay(void);
	char* nDaysFromNow(int);
	DayType(void);
	DayType(char*);
};