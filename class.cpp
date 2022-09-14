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
    // void Anushka()
    // {
    //     cout<<"\n Name:Anushka";
    //     cout<<"\n Designation:Professor";
    //     cout<<"\n emp code: 033";
    //     cout<<"\n salary: 9600000";
    // }


};

int main()
{
employee e1;
e1.emp_getdata();
e1.emp_showdata();
}





