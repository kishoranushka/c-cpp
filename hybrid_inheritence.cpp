#include <iostream>
using namespace std;
class A
{
public:
    void funA()
    {
        cout << "\nMy name is Anushka.";
    }
};
class B : public A
{

public:
    void funB()
    {
        cout << "\nYou are Abhinav.";
    }
};
class C
{
    public:
    void funC()
    {
        cout << "\nYou are Aastha.";
    }
};
class D : public B, public C
{
    public:
    void funD()
    {
        cout << "\nYou guys are my friend.";
    }
};
    int main()
{
    D obj;
    obj.funD();
    obj.funC();
    obj.funB();
    obj.funA();

    return 0;
}