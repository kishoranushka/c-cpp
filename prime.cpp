//wap to find whether a number is prime or not using class

#include<iostream> 
using namespace std;
class prime
 {
    int n, i;
    public:
    void getdata()
    {
    cout<<"enter any number: ";
    cin<<n;
    void showdata()
    {
        for(i=2;i<n;i++)
        {
         if(n%i==0){
            cout<<"the number is not prime.";
            break;
            }
        if(n==i){

            cout<<"the number is prime.";
        }
    }

    }

 };
 int main()
{
prime p1;
p1.getdata();
p1.showdata();


return 0;
}