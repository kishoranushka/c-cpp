// wap to create a class name complex, take a complex no. by using parameterized constructor, set value and display the addition of these complex numbers in a proper format


#include<iostream>
using namespace std;
class complex
{
    private:
        int a, b;
    public: 
    complex(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "the complex number is" << a << " + "
             << "i" << b;
    }
};
int main()
{
    int real, img;
    cout << "enter the real value: ";
    cin >> real;
    cout << "enter the imaginary value: ";
    cin >> img;

    complex c1(real, img);
    c1.display();
    return 0;
}