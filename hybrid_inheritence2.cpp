#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "\nMy name is Anushka.";
    }
};
class B : public A
{

public:
    void show()
    {
        cout << "\nYou are Abhinav.";
    }
};
class C
{
public:
    void show()
    {
        cout << "\nYou are Aastha.";
    }
};
class D : public B, public C
{
public:
    void show()
    {
        cout << "\nYou guys are my friend.";
        
            A::show();
            B::show();
            C::show();
        
    }
};


// int main()
// {
//   D obj;
//      obj.A ::show();
//     obj.B ::show();
//     obj.C ::show();
//     obj.D ::show();

//     return 0;
// }

int main()
{
    D obj;
    obj.show();
}