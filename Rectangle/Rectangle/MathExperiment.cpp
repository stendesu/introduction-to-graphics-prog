
#include "Header.h"

int main()
{
    int userChoice = 0;
    bool menu = true;
    bool calcuator = false;
    bool accounting = false;


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
            accounting = true;
            menu = false;
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

    MathsExperiment me;

    MathsExperiment* mePtr = new MathsExperiment();

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
    delete mePtr;
#pragma endregion

#pragma region Accounting Region



    AccountExperiment account;
    
    float userInput;

    while (accounting)
    {
        switch (userChoice)
        {
        case 1:
            cout << "enter amount to set balance: " << endl;
            cin >> userInput;

            account.setBalance(userInput);

            userChoice = 0;

            break;
        case 2:
            account.printBalance();

            userChoice = 0;

            break;
        case 3:
            cout << "enter amount to be added to balance: " << endl;
            cin >> userInput;

            account.addToBalance(userInput);

            userChoice = 0;

            break;
        case 4:
            cout << "set an interest rate (0 - 100): " << endl;
            cin >> userInput;

            account.setInterestRate(userInput);

            userChoice = 0;

            break;
        case 5:
            account.applyInterestRate();

            userChoice = 0;
            
            break;
        case 6:
            accounting = false;
            menu = false;

            break;
        default:
            cout << "1. Set balance 2. view balance 3. Add to balance 4. set interest rate 5. Apply interest rate to balance 6. exit" << endl;
            cin >> userChoice;
            break;
        }
    }
#pragma endregion
}