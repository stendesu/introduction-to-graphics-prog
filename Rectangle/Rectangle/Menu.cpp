
#include "Header.h"

int main()
{
	int userChoice = 0;

	DisplayMenu(userChoice);
}

void DisplayMenu(int userChoice)
{
	bool t = true;
	while (t)
	{	
		switch (userChoice)
		{
		case 1:
			cout << "sun" << endl;
			userChoice = 0;
			break;
		case 2:
			cout << "clouds" << endl;
			userChoice = 0;
			break;
		case 3:
			cout << "water" << endl;
			userChoice = 0;
			break;
		case 4:
			t = false;
			break;
		default:
			cout << "1. Sunny 2. Cloudy 3. Raining 4. Exit" << endl;
			cin >> userChoice;

		}
	}

}