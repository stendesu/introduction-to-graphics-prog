
#include <iostream>

using namespace std;

void InputRectangle(int& width, int& height);
void OutputRectangleAreaAndPerimeter(const int width, const int height);

void SetArrayElement(int userInput, int list[], int highest);

void DisplayMenu(int userChoice);

void PrintNum(int userInput);

class MathsExperiment
{
public:
	float add(const float& a, const float& b)
	{
		return a + b;
	}

	float subtract(const float& a, const float& b)
	{
		return a - b;
	}

	float multiply(const float& a, const float& b)
	{
		return a * b;
	}

	float divide(const float& a, const float& b)
	{
		if (b == 0)
		{
			cout << "cannot divide by 0" << endl;
		}
		return a / b;
	}
};

class AccountExperiment
{
private:
	float totalBalance;
	float interestRate;

public:
	void printBalance()
	{
		cout << "Balance: $" << totalBalance << endl;
	}

	void setBalance(float balance)
	{
		totalBalance = balance;
	}

	void addToBalance(float amount)
	{
		totalBalance += amount;
	}

	void setInterestRate(float rate)
	{
		if (rate >= 0 && rate <= 100)
		{
			interestRate = rate;
		}
		else
		{
			cout << "value must be between 0 and 100" << endl;
		}
	}

	void applyInterestRate()
	{
		totalBalance = (totalBalance / 100) + 1;
	}
};