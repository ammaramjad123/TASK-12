#include"Header.h"
void input(char[]);
int main() {
	int temp = -1;
	char day[4] = { '\0' };
	input(day);
	DayType d1(day);
	cout << "Current Day: ";
	d1.printDay();
	cout << "Next Day: " << d1.returnNextDay() << endl;
	cout << "Previous Day: " << d1.returnPreviousDay() << endl;
	cout << "_____________________________________" << endl;
	cout << "Want to calculate  n-th day form now: ";
	cout << "Enter 1 for yes and 0 for no.";
	while (true)
	{
		cin >> temp;
		if (temp == 0 || temp == 1)
		{
			break;
		}
		cout << "Invalid input!!!" << endl;
		cout << "Try Again: ";
	}
	if (temp == 1)
	{
		cout << "n is the number of days you want to add to get the n-th day form now." << endl;
		cout << "Enter n:";
		cin >> temp;
		cout << "n-th day form now: " << d1.nDaysFromNow(temp);
		temp = -1;
	}
	system("pause");
	return 0;
}
void input(char day[]) {
	cout << "Enter day name (Only first 3 Letters.): ";
	while (true)
	{
		cin.get(day, 4);
		if (day[0] == 'M' || day[0] == 'm')
		{
			if (day[1] == 'O' || day[1] == 'o')
			{
				if (day[2] == 'N' || day[2] == 'n')
				{
					break;
				}
			}
		}
		else if (day[0] == 'T' || day[0] == 't')
		{
			if (day[1] == 'U' || day[1] == 'u')
			{
				if (day[2] == 'E' || day[2] == 'e')
				{
					break;
				}
			}
		}
		else if (day[0] == 'W' || day[0] == 'w')
		{
			if (day[1] == 'E' || day[1] == 'e')
			{
				if (day[2] == 'D' || day[2] == 'd')
				{
					break;
				}
			}
		}
		else if (day[0] == 'T' || day[0] == 't')
		{
			if (day[1] == 'H' || day[1] == 'h')
			{
				if (day[2] == 'U' || day[2] == 'u')
				{
					break;
				}
			}
		}
		else if (day[0] == 'F' || day[0] == 'f')
		{
			if (day[1] == 'R' || day[1] == 'r')
			{
				if (day[2] == 'I' || day[2] == 'i')
				{
					break;
				}
			}
		}
		else if (day[0] == 'S' || day[0] == 's')
		{
			if (day[1] == 'A' || day[1] == 'a')
			{
				if (day[2] == 'T' || day[2] == 't')
				{
					break;
				}
			}
		}
		else if (day[0] == 'S' || day[0] == 's')
		{
			if (day[1] == 'U' || day[1] == 'u')
			{
				if (day[2] == 'N' || day[2] == 'n')
				{
					break;
				}
			}
		}
		cout << "Invalid input!!!" << endl;
		cout << "Enter again: ";
	}
	
}