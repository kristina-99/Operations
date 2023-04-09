#include <iostream>
using namespace std;

int additionFunc(int a, int b)
{
    int result1 = a + b;
    cout << result1;

    return result1;
}

int substractionFunc(int a, int b)
{
    int result2 = a - b;
    cout << result2;

    return result2;
}

int multiplicationFunc(int a, int b)
{
    int result3 = a * b;
    cout << result3;

    return result3;
}

int divisionFunc(int a, int b)
{
    int result4 = a / b;
    cout << result4;

    return result4;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    char symbol;
    cin >> symbol;

    if (symbol == '+')
    {
        additionFunc(num1, num2);
    }
    else if (symbol == '-')
    {
        substractionFunc(num1, num2);
    }
    else if (symbol == '*')
    {
        multiplicationFunc(num1, num2);
    }
    else if (symbol == '/')
    {
        divisionFunc(num1, num2);
    }
}
