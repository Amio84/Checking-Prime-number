#include <iostream>
using namespace std;

class PrimeNumber
{
    int num, isPrime;
public:
    PrimeNumber(int N);
    ~PrimeNumber();
    void CheckPrime();
    void Display();
};

PrimeNumber::PrimeNumber(int N)
{
    num = N;
}

PrimeNumber::~PrimeNumber()
{
}

void PrimeNumber::CheckPrime()
{
    isPrime = 1;
    if (num <= 1)
    {
        isPrime = 0;
    }

    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
        else
        {
            isPrime = 1;
        }
    }
}

void PrimeNumber::Display()
{
    if (isPrime == 1)
    {
        cout << num << " is a Prime Number." << endl;
    }
    else
    {
        cout << num << " isn't a Prime Number." << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a positive integer number: ";
    cin >> n;

    PrimeNumber Number(n);
    Number.CheckPrime();
    Number.Display();

    return 0;
}
