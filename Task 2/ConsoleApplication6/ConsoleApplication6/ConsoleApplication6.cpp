#include <iostream>
using namespace std;

class Gcd 
{
private:
    unsigned int num1;
    unsigned int num2;

public:

    Gcd(unsigned int number1, unsigned int number2) : num1(number1), num2(number2) {}

    int findGcd() 
    {
        if (num2 == 0)
        {
            return num1;
        }
        else
        {
            return findGcd(num2, num1 % num2);
        }
            
    }

private:
    int findGcd(int number1, int number2)
    {
        if (number2 == 0)
        {
             return number1;
        }
        else
        {
            return findGcd(number2, number1 % number2);
        }
            
    }
};

int main() 
{
    unsigned int num1, num2;
    cin >> num1 >> num2;

    Gcd gcd(num1, num2);

    int result = gcd.findGcd();

    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
}
