// WAP to print all the prime numbers between two given numbers

#include <iostream>
using namespace std;
int main()
{
    int a, b, i, num;
    cout << "enter the two numbers between which we have to find the prime numbers: ";
    cin >> a >> b;

    for (num = a; num <= b; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)

                break;
        }
        if (num == i)
        {
            cout << i << endl;
        }
    }

   return 0;
}