//An electricity board charges the following rate on usage of electricity
//1)for first 100 units-60p/unit
//for 200 units-80p/unit
//beyond 200 units-92p/unit
//write a program to read name of the user, energy/unit consumed and print out charge with name


#include<iostream>
using namespace std;
class electricity
{
    private:
        string name;
        int unit;
    public:
    void getdata()
    {

        cout << "enter your name: ";
        cin >> name;
        cout << "enter the unit of electricity consumed: ";
        cin >> unit;
    }
    void showdata()
    {
        cout << "name: "<<name;
        cout << "\n";
        if(unit<=100)
            cout << "Your price is: " << 0.60 * unit;
        else if(unit>100 && unit<=200)
            cout << "Your price is: " << 0.80 * unit;
        else
            cout << "Your price is: " << 0.92 * unit;
        cout << "\n";
    }
};
int main()
{
    int n;
    cout << "enter the number of person: ";
    cin >> n;
    electricity p[n];
    for (int i = 0; i < n;i++)
    {
        p[i].getdata();
        p[i].showdata();
    }

        return 0;
}