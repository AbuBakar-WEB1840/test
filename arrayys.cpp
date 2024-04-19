#include <iostream>
using namespace std;

class employee
{
    string name;
    int id;
    public:
        void setdata(void)
        {
            cout<<"write down the id of employee";
            cin>>id;
            cout<<"Write the name of the employee";
            cin>>name;
        }
        void getdata(void)
        {
            cout<<"The name of the employee is" <<name<<" and the id is "<<id<<endl;
        }
};

int main()
{
    employee name[6];
    for (int i = 1; i<=6; i++)
    {
        name[i].setdata();
        name[i].getdata();
    }
}


