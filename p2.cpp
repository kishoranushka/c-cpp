//wap to find sum of all even numbers till 50

#include<iostream> 
 using namespace std;
 int main()
{
int s,i,sum=0;
cout<<" all even numbers till 50 are:";
for(i=1;i<=25;i++)
{
s=2*i;
sum=sum+s;
cout<<"\n"<< s;
}
cout<<"\n sum of all even numbers till 50 : "<<  sum;





}