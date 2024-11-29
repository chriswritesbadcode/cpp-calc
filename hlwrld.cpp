#include <iostream>
using namespace std;

int mainMenu();
void calcStart();
int takeInput();
float calculate(float x, float y, int operation);

int main()
{
    int menuSelection = mainMenu();

    while (menuSelection != 1 && menuSelection != 2)
    {
        cout << "Incorrect option\n";
        menuSelection = mainMenu();
    }

    if (menuSelection == 2)
    {
        cout << "Exited the program\n";
        return 0;
    }

    calcStart();

    int operation = takeInput();

    while (operation < 1 || operation > 4)
    {
        cout << "Incorrect operator number\n";
        operation = takeInput();
    }

    cout << "Enter first value: ";
    int x{};
    cin >> x;

    cout << "Enter second value: ";
    int y{};
    cin >> y;

    cout << calculate(x, y, operation) << '\n';

    cout << "Press enter to stop program";

    getchar();
    getchar();

    return 0;
}

int mainMenu()
{
    cout << "////MENU////\n";
    cout << "Choose a menu option: " << '\n';
    cout << " 1. Start calculator\n";
    cout << " 2. Quit\n";

    int input{};
    cin >> input;
    return input;
}

void calcStart()
{
    cout << "Choose an operation: \n";
    cout << " 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Devision\n";
}

int takeInput()
{
    int input{};
    cin >> input;
    return input;
}

float calculate(float x, float y, int operation)
{
    switch (operation)
    {
    case 1:
        return x + y;
    case 2:
        return x - y;
    case 3:
        return x * y;
    case 4:
        return x / y;
    default:
        return 0;
    }
}