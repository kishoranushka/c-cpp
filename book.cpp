// wap to create a class book with private data members as title,book id, price. Accept input from the user and display book details through arrays of object

#include<iostream>
using namespace std;
class book
{
    private:
        int book_id, price;
        char book_title[200];
    public:
    void getdata()    
    {
        cout << "enter the book name: ";
        cin >> book_title;
        cout << "enter book id: ";
        cin >> book_id;
        cout << "enter the price of the book: ";
        cin >> price;
    }
         
    void showdata()
    {
        cout << "\nbook title: " << book_title;
        cout << "\nbook id : " << book_id;
        cout << "\nbook price : " << price;
        cout << "\n\n";
    }
    
};
int main()
{
    int n;
    cout << "enter the no. of books you want to enter the details: ";
    cin >> n;
    book b1[n];
    for (int i = 1; i <= n;i++)
    {
        b1[i].getdata();
        b1[i].showdata();
    }

        return 0;
}