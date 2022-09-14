#include<iostream> 
 using namespace std;

class employee
{
    private:
    char employee_name[100],designation[20];
    int empcode, empsalary;

    public:
   void emp_getdata()
    {
        cout<<"enter emp name: ";
        cin>>employee_name;
        cout<<"enter emp designation: ";
        cin>>designation;
        cout<<"enter emp code: ";
        cin>>empcode;
        cout<<"enter emp salary: ";
        cin>>empsalary;

    }
    void emp_showdata()
    {
        cout<<"\n employee name is: "<<employee_name;
        cout<<"\n employee designation is: "<<designation;
        cout<<"\n employee code is: "<<empcode;
        cout<<"\n employee salary is: "<<empsalary;

    }
    


};

int main()
{
    int check;
cout<<"press 1 to enter details of the employee.\n press 2 to get details of the employee.\npress 3 to exit program ";
cin>>check;

if(check==1)
{
employee E1;
E1.emp_getdata();
E1.emp_showdata();
}



}
