/*
An electricity board charges the following rates to domestic 
users to discourage large consumption of energy.
For the first 100 units: - 60 P per unit 
For the next 200 units: -80 P per unit
Beyond 300 units: -90 P per unit 
All users are charged a minimum of Rs 50 if the total amount
is more than Rs 300 then an additional surcharge of 15% is added.  
Implement a C++ program to read the names of users and number of units
consumed and display the charges with names
*/
#include<iostream>
using namespace std;
class charge{
    int unit,bill;
    string name;
    public:
    void setdetails(int unit,string name)
    {
        this->unit=unit;
        this->name=name;
    }
    void setbill()
    {
        if(unit<100)
        {
            bill=unit*60;
        }
        else if(unit>=100&&unit<300)
        {
            unit-=100;
            bill=(unit*80)+6000;
        }
        else
        {
            unit-=300;
            bill=(unit*90)+22000;
        }
        bill+=5000;
        if(bill>30000)  
        bill+=0.15*bill;
    }
    void display()
    {
        cout<<name<<" "<<bill/100<<endl;
    }
};
int main()
{
    int n,unit;
    string name;
    cout<<"Enter total users:";
    cin>>n;
    charge d1[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter unit:";
        cin>>unit;
        d1[i].setdetails(unit,name);
        d1[i].setbill();
        d1[i].display();
    }

}