//wap in c++ program to calculate vol of box and area of triangle

#include<iostream> 
 using namespace std;
 

    class volandarea
    {
    private:
    float length,breadth,height,vol,area;

    public:
    void volume()
    {
        cout<<"\n\nTo find the vol of the box...";
    cout<<"\nenter length of the box : ";
    cin>>length;
    cout<<"enter breadth of the box : ";
    cin>>breadth;
    cout<<"enter height of the box : ";
    cin>>height;
    vol=length*breadth*height; 
        cout<<"volume of the box is : "<<vol;
    }

    void Area()
    {
        cout<<"\n\nTo find the area of the triangle...";
        cout<<"\n enter the base length : ";
        cin>>length;
        cout<<"enter height of the triangle : ";
        cin>>height;
        area= 0.5*length*breadth;
        cout<<"area of triangle is : "<<area;
    }
    };



    

int main()
{

volandarea v1,a1;
v1.volume();
a1.Area();



return 0;
}