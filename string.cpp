// wap to print any name and check whether repeatition of letters are done or not

#include <iostream>
using namespace std;
int main()
{

    string str;
    int l;
    int i, flag = 0, j;
    cout << "enter your name: ";
    getline(cin, str);
    l = str.length();
    cout << l << endl;
    cout << "Your name is : " << str << endl;
    for (i = 0; i < l; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            if (str[i] == str[j])
            {
                // cout << str[i];
                flag++;
                break;
            }
        }
    }
    if (flag == 1)
    {
        cout << "repetition done";
    }
    else
    {
        cout << "no repetition of letters.";
    }
    return 0;
}