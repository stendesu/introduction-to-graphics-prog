
#include "Header.h"

int main()
{
    int userChoice = 0;
    bool menu = true;
    bool calcuator = false;
    bool accounting = false;

	MathsExperiment me;

	MathsExperiment* mePtr = new MathsExperiment();

    while (menu)
    {
        switch (userChoice)
        {
        case 1:
            calcuator = true;
            menu = false;
            userChoice = 0;
            break;
        case 2:
            // do acounting
            userChoice = 0;
            break;
        case 3:
            calcuator = false;
            menu = false;
        default:
            if (userChoice != 3)
            {
                cout << "1. Calculator 2. Account 3. exit" << endl;
                cin >> userChoice;
            }
        }
    }

#pragma region      Calculator Region

    int userInputA = 0;
    int userInputB = 0;

    float result = 0;

    while (calcuator)
    {
        switch (userChoice)
        {
        case 1:
            cout << "enter a value: " << endl;
            cin >> userInputA;

            cout << "enter a value: " << endl;
            cin >> userInputB;

            result = me.add(userInputA, userInputB);
            cout << result << endl;

            userChoice = 0;

            break; 
        case 2:
            cout << "enter a value: " << endl;
            cin >> userInputA;

            cout << "enter a value: " << endl;
            cin >> userInputB;

            result = me.subtract(userInputA, userInputB);
            cout << result << endl;

            userChoice = 0;

            break;
        case 3:
            cout << "enter a value: " << endl;
            cin >> userInputA;

            cout << "enter a value: " << endl;
            cin >> userInputB;

            result = me.multiply(userInputA, userInputB);
            cout << result << endl;

            userChoice = 0;

            break;
        case 4:
            cout << "enter a value: " << endl;
            cin >> userInputA;

            cout << "enter a value: " << endl;
            cin >> userInputB;

            result = me.divide(userInputA, userInputB);
            cout << result << endl;

            userChoice = 0;

            break;
        case 5:
            calcuator = false;
            menu = false;
            break;
        default:
            cout << "1. Addition 2. Subtraction 3. Multiply 4. Division 5. exit" << endl;
            cin >> userChoice;
        }
    }
#pragma endregion
    delete mePtr;





    AccountExperiment account;

    account.setBalance(1000.0f);
    account.printBalance();

    account.addToBalance(500.0f);
    account.printBalance();

    account.setInterestRate(0.05f);
    account.applyInterestRate();
    account.printBalance();

    return 0;
}