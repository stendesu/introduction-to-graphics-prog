
#include "Header.h"

int main()
{
	int userInput = 0;
	int rows = 0;
	int columns = 0;

	cout << "enter a number: " << endl;
	cin >> userInput;

	rows = userInput;

	PrintNum(userInput);
}

void PrintNum(int userInput)
{
	for (int i = 1; i <= userInput; i++)
	{
		for (int t = 1; t <= i; t++)
		{
			cout << t << " ";
		}
		cout << endl;
	}
}