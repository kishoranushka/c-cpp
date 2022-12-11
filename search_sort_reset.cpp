#include <iostream>
#include <stdlib.h>
using namespace std;
class aryCls
{
private:
    int A[5], i;

public:
    aryCls()
    {
        for (i = 0; i < 5; i++)
        {
            cout << "enter the value at " << i + 1 << " position:";
            cin >> A[i];
        }
    }
    void search()
    {
        int temp, flag = 0;
        cout << "***You have called for the search function***\n\n";
        cout << "enter the value to search: ";
        cin >> temp;
        for (i = 0; i < 5; i++)
        {
            if (A[i] == temp)
            {
                cout << "the position is: " << i + 1 << "\n\n\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {

            cout << "result not found.\n\n";
        }
    }
    void sort()
    {
        int i, j, temp;
        for (i = 0; i < 5; i++)
        {
            for (j = i; j < 5; j++)
            {
                if (A[i] > A[j])
                {
                    temp = A[j];
                    A[j] = A[i];
                    A[i] = temp;
                }
            }
        }
        cout << "the array after sorting is: ";
        for (i = 0; i < 5; i++)
        {
            cout << A[i] << " ";
        }
    }
    void change()
    {
        cout << "old array";
        for (i = 0; i < 5; i++)
        {
            cout << A[i] << " ";
        }
        int pos, val, temp;
        cout << "\nenter the position you want to change: ";
        cin >> pos;
        if (pos >= 1 && pos < 5)
        {
            i = pos - 1;
            cout << "enter the value you want to change with the previous value\n";
            cin >> val;
            // temp = A[i];
            A[i] = val;

            cout << "New array: ";
            for (i = 0; i < 5; i++)
            {
                cout << A[i] << " ";
            }
        }
        else
        {
            cout << "invalid input...enter the position from 1 to 5";
        }
    }
};

int main()
{
    system("cls");
reset:
    int num;
    aryCls a1;
menu:
    system("cls");

    cout
        << "\n1.search\n2.sort\n3.change the value\n4.reset the array\n5.exit\n";

    cin >> num;
    switch (num)
    {
    case 1:
        a1.search();
        system("pause");
        goto menu;
    case 2:
        a1.sort();
        system("pause");
        goto menu;
    case 3:
        a1.change();
        system("pause");
        goto menu;
    case 4:

        goto reset;
    case 5:
        break;

    default:
        cout << "invalid input.";
        system("pause");

        goto menu;
    }
}