//wap to create a class student having data members as roll no., name and percentage as instance data member and count as static data member. The count should represent the number of objects created. Create  a static function which will return the no. of objects created.

#include<iostream>
using namespace std;
class student
{
private:

    char name[50];
    int roll, percentage;
    static int count;

public:
void getdata()
{

    cout << "enter name: ";
    cin >> name;
    cout << "enter roll: ";
    cin >> roll;
    cout << "enter percentage: ";
    cin >> percentage;
}

void showdata()
{
    cout << "name: " << name;
    cout << "roll: " << roll;
    cout << "percentage: " << percentage;

}
static int counting()
{
    return count;
}
student()
{
    count = count + 1;
}
};
int student::count;

int main()
{
    student s1, s2, s3;
    s1.getdata();
    s1.showdata();
    s2.getdata();
    s2.showdata();
    s3.getdata();
    s3.showdata();
    cout << "the count is: " << student::counting();

    return 0;
}