// wap to find whether a given numbers is pronic or not
// pronic number-- multiplication of two consecutive numbers i.e., 30=5*6, 12=3*4

#include <iostream>
using namespace std;
int main()
{
    int i, n, temp = 0, flag = 0;
    cout << "enter any number: ";
    cin >> n;
    for (i = 1; i <= (n / 2); i++)
    {
        temp = n / i;
        if (temp == i + 1)
        {
            flag++;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "pronic" << endl;
        cout << "And the numbers are: " << i << " " << temp;
    }
    else
    {
        cout << "not pronic";
    }
    return 0;
}