#include <iostream>
using namespace std;

class Fact 
{
private:
    int num;

public:
    Fact(int n) : num(n) {}

    double factoriel() 
    {
        double factoriel = 1;

        for (int i = 1; i <= num; ++i)
        {
            factoriel *= i;
        }

        return factoriel;
    }
};

int main() 
{
    int num;
    cin >> num;

    Fact fact(num);
    double factoriel = fact.factoriel();

    cout << "The factoriel is: " << factoriel << endl;
}