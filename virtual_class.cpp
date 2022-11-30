#include <iostream>
using namespace std;
class base
{

public:
    int a;
    void setA()
    {
        cout << "enter the value of a: " << endl;
        cin >> a;
    }
    // int getA()
    // {
    //     cout << "the value of a : " << a;
    // }
};
class d1 : public virtual base
{

public:
    int b;
    void setB()
    {
        cout << "enter the value of b: " << endl;
        cin >> b;
    }
    // int getB()
    // {
    //     cout << "the value of b : " << b;
    // }
};
class d2 : public virtual base
{

public:
    int c;
    void setC()
    {
        cout << "enter the value of c: " << endl;
        cin >> c;
    }
    // int getC()
    // {
    //     cout << "the value of c : " << c;
    // }
};
class d3 : public d1, public d2
{

    int total;

public:
    int sum()
    {
        total = a + b + c;
        cout << total;
    }
};
int main()
{

    d3 ob;
    ob.setA();
    // ob.getA();
    ob.setB();
    // ob.getB();
    ob.setC();
    // ob.getC();
    ob.sum();
    return 0;
}