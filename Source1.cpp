#include "Header.h"

void DayType::daySetter(char* temp)
{
	if (day != nullptr)
	{
		delete[]day;
		day = nullptr;
	}
	int length = 0;
	while (temp[length] != '\0')
	{
		length++;
	}
	length++;
	day = new char[length];
	for (int i = 0; i < length; i++)
	{
		day[i] = temp[i];
	}
}

char* DayType::returnDay(void)
{
	int length = 0;
	while (day[length] != '\0')
	{
		length++;
	}
	length++;
	char* temp = new char[length];
	for (int i = 0; i < length; i++)
	{
		temp[i] = day[i];
	}
	return temp;
}

void DayType::printDay(void)
{
	cout << returnDay() << endl;
}

char* DayType::returnNextDay(void)
{
	char* temp = nullptr;
	if (day[0] == 'M' || day[0] == 'm')
	{
		if (temp != nullptr)
		{
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[8] {'\0'};
		temp[0] = 'T';
		temp[1] = 'u';
		temp[2] = 'e';
		temp[3] = 's';
		temp[4] = 'd';
		temp[5] = 'a';
		temp[6] = 'y';
		temp[7] = '\0';

	}
	else if (day[0] == 'T' || day[0] == 't')
	{
		if (day[1] == 'U' || day[1] == 'u')
		{
			if (temp != nullptr)
			{
				delete[] temp;
				temp = nullptr;
			}
			temp = new char[10] {'\0'};
			temp[0] = 'W';
			temp[1] = 'e';
			temp[2] = 'd';
			temp[3] = 'n';
			temp[4] = 'e';
			temp[5] = 's';
			temp[6] = 'd';
			temp[7] = 'a';
			temp[8] = 'y';
			temp[9] = '\0';

		}
	}
	else if (day[0] == 'W' || day[0] == 'w')
	{
		if (temp != nullptr)
		{
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[9] {'\0'};
		temp[0] = 'T';
		temp[1] = 'h';
		temp[2] = 'u';
		temp[3] = 'r';
		temp[4] = 's';
		temp[5] = 'd';
		temp[6] = 'a';
		temp[7] = 'y';
		temp[8] = '\0';
	}
	else if (day[0] == 'T' || day[0] == 't')
	{
		if (day[1] == 'H' || day[1] == 'h')
		{
			if (temp != nullptr)
			{
				delete[] temp;
				temp = nullptr;
			}
			temp = new char[7] {'\0'};
			temp[0] = 'F';
			temp[1] = 'r';
			temp[2] = 'i';
			temp[3] = 'd';
			temp[4] = 'a';
			temp[5] = 'y';
			temp[6] = '\0';
		}
	}
	else if (day[0] == 'F' || day[0] == 'f')
	{
		if (temp != nullptr)
		{
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[9] {'\0'};
		temp[0] = 'S';
		temp[1] = 'a';
		temp[2] = 't';
		temp[3] = 'u';
		temp[4] = 'r';
		temp[5] = 'd';
		temp[6] = 'a';
		temp[7] = 'y';
		temp[8] = '\0';
	}
	else if (day[0] == 'S' || day[0] == 's')
	{
		if (day[1] == 'A' || day[1] == 'a')
		{
			if (temp != nullptr)
			{
				delete[] temp;
				temp = nullptr;
			}
			temp = new char[7] {'\0'};
			temp[0] = 'S';
			temp[1] = 'u';
			temp[2] = 'n';
			temp[3] = 'd';
			temp[4] = 'a';
			temp[5] = 'y';
			temp[6] = '\0';
		}
	}
	else if (day[0] == 'S' || day[0] == 's')
	{
		if (day[1] == 'U' || day[1] == 'u')
		{
			if (temp != nullptr)
			{
				delete[] temp;
				temp = nullptr;
			}
			temp = new char[7] {'\0'};
			temp[0] = 'M';
			temp[1] = 'o';
			temp[2] = 'n';
			temp[3] = 'd';
			temp[4] = 'a';
			temp[5] = 'y';
			temp[6] = '\0';
		}
	}
	return temp;
}

char* DayType::returnPreviousDay(void)
{
	char* temp = nullptr;
	if (day[0] == 'M' || day[0] == 'm')
	{
		if (temp != nullptr)
		{
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[7] {'\0'};
		temp[0] = 'S';
		temp[1] = 'u';
		temp[2] = 'n';
		temp[3] = 'd';
		temp[4] = 'a';
		temp[5] = 'y';
		temp[6] = '\0';
	}
	else if (day[0] == 'T' || day[0] == 't')
	{
		if (day[1] == 'U' || day[1] == 'u')
		{
			if (temp != nullptr)
			{
				delete[] temp;
				temp = nullptr;
			}
			temp = new char[7] {'\0'};
			temp[0] = 'M';
			temp[1] = 'o';
			temp[2] = 'n';
			temp[3] = 'd';
			temp[4] = 'a';
			temp[5] = 'y';
			temp[6] = '\0';
		}
	}
	else if (day[0] == 'W' || day[0] == 'w')
	{
		if (temp != nullptr)
		{
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[8] {'\0'};
		temp[0] = 'T';
		temp[1] = 'u';
		temp[2] = 'e';
		temp[3] = 's';
		temp[4] = 'd';
		temp[5] = 'a';
		temp[6] = 'y';
		temp[7] = '\0';
	}
	else if (day[0] == 'T' || day[0] == 't')
	{
		if (day[1] == 'H' || day[1] == 'h')
		{
			if (temp != nullptr)
			{
				delete[] temp;
				temp = nullptr;
			}
			temp = new char[10] {'\0'};
			temp[0] = 'W';
			temp[1] = 'e';
			temp[2] = 'd';
			temp[3] = 'n';
			temp[4] = 'e';
			temp[5] = 's';
			temp[6] = 'd';
			temp[7] = 'a';
			temp[8] = 'y';
			temp[9] = '\0';
		}
	}
	else if (day[0] == 'F' || day[0] == 'f')
	{
		if (temp != nullptr)
		{
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[9] {'\0'};
		temp[0] = 'T';
		temp[1] = 'h';
		temp[2] = 'u';
		temp[3] = 'r';
		temp[4] = 's';
		temp[5] = 'd';
		temp[6] = 'a';
		temp[7] = 'y';
		temp[8] = '\0';
	}
	else if (day[0] == 'S' || day[0] == 's')
	{
		if (day[1] == 'A' || day[1] == 'a')
		{
			if (temp != nullptr)
			{
				delete[] temp;
				temp = nullptr;
			}
			temp = new char[7] {'\0'};
			temp[0] = 'F';
			temp[1] = 'r';
			temp[2] = 'i';
			temp[3] = 'd';
			temp[4] = 'a';
			temp[5] = 'y';
			temp[6] = '\0';
		}
	}
	else if (day[0] == 'S' || day[0] == 's')
	{
		if (day[1] == 'U' || day[1] == 'u')
		{
			if (temp != nullptr)
			{
				delete[] temp;
				temp = nullptr;
			}
			temp = new char[9] {'\0'};
			temp[0] = 'S';
			temp[1] = 'a';
			temp[2] = 't';
			temp[3] = 'u';
			temp[4] = 'r';
			temp[5] = 'd';
			temp[6] = 'a';
			temp[7] = 'y';
			temp[8] = '\0';
		}
	}
	return temp;
}

char* DayType::nDaysFromNow(int daysFromNow)
{
	int currentDay = 0;
	if (day[0] == 'M' || day[0] == 'm')
	{
		currentDay = 1;
	}
	else if (day[0] == 'T' || day[0] == 't')
	{
		if (day[1] == 'U' || day[1] == 'u')
		{
			currentDay = 2;
		}
	}
	else if (day[0] == 'W' || day[0] == 'w')
	{
		currentDay = 3;
	}
	else if (day[0] == 'T' || day[0] == 't')
	{
		if (day[1] == 'H' || day[1] == 'h')
		{
			currentDay = 4;
		}
	}
	else if (day[0] == 'F' || day[0] == 'f')
	{
		currentDay = 5;
	}
	else if (day[0] == 'S' || day[0] == 's')
	{
		if (day[1] == 'A' || day[1] == 'a')
		{
			currentDay = 6;
		}
	}
	else if (day[0] == 'S' || day[0] == 's')
	{
		if (day[1] == 'U' || day[1] == 'u')
		{
			currentDay = 7;
		}
	}
	for (int i = 0; i < daysFromNow; i++)
	{
		currentDay++;
		if (currentDay == 8)
		{
			currentDay = 1;
		}
	}
	char* temp = nullptr;
	if (currentDay == 1)
	{
		if (temp != nullptr) {
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[7] {'\0'};
		temp[0] = 'M';
		temp[1] = 'o';
		temp[2] = 'n';
		temp[3] = 'd';
		temp[4] = 'a';
		temp[5] = 'y';
		temp[6] = '\0';
	}
	else if (currentDay == 2)
	{
		if (temp != nullptr) {
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[8] {'\0'};
		temp[0] = 'T';
		temp[1] = 'u';
		temp[2] = 'e';
		temp[3] = 's';
		temp[4] = 'd';
		temp[5] = 'a';
		temp[6] = 'y';
		temp[7] = '\0';
	}
	else if (currentDay == 3)
	{
		if (temp != nullptr) {
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[10] {'\0'};
		temp[0] = 'W';
		temp[1] = 'e';
		temp[2] = 'd';
		temp[3] = 'n';
		temp[4] = 'e';
		temp[5] = 's';
		temp[6] = 'd';
		temp[7] = 'a';
		temp[8] = 'y';
		temp[9] = '\0';
	}
	else if (currentDay == 4)
	{
		if (temp != nullptr) {
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[9] {'\0'};
		temp[0] = 'T';
		temp[1] = 'h';
		temp[2] = 'u';
		temp[3] = 'r';
		temp[4] = 's';
		temp[5] = 'd';
		temp[6] = 'a';
		temp[7] = 'y';
		temp[8] = '\0';
	}
	else if (currentDay == 5)
	{
		if (temp != nullptr) {
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[7] {'\0'};
		temp[0] = 'F';
		temp[1] = 'r';
		temp[2] = 'i';
		temp[3] = 'd';
		temp[4] = 'a';
		temp[5] = 'y';
		temp[6] = '\0';
	}
	else if (currentDay == 6)
	{
		if (temp != nullptr) {
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[9] {'\0'};
		temp[0] = 'S';
		temp[1] = 'a';
		temp[2] = 't';
		temp[3] = 'u';
		temp[4] = 'r';
		temp[5] = 'd';
		temp[6] = 'a';
		temp[7] = 'y';
		temp[8] = '\0';
	}
	else if (currentDay == 7)
	{
		if (temp != nullptr) {
			delete[] temp;
			temp = nullptr;
		}
		temp = new char[7] {'\0'};
		temp[0] = 'S';
		temp[1] = 'u';
		temp[2] = 'n';
		temp[3] = 'd';
		temp[4] = 'a';
		temp[5] = 'y';
		temp[6] = '\0';
	}
	return temp;
}

DayType::DayType(void)
{
	if (day != nullptr)
	{
		delete[] day;
	}
	day = nullptr;
}

DayType::DayType(char* temp)
{
	daySetter(temp);
}