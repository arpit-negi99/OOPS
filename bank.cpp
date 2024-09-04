#include<iostream>
using namespace std;
class bank{
    private:
    int acno,balance;
    string name,actype;
    public:
    void initial(int acno,int balance,string name,string actype)
    {
        this->acno=acno;
        this->balance=balance;
        this->name=name;
        this->actype=actype;
    }
    void deposite(int amount)
    {
        this->balance+=amount;
    }
    void withdraw(int amount)
    {
        if(this->balance<amount)
        cout<<"Not enough balance"<<endl;
        else
        this->balance-=amount;
    }
    void display()
    {
        cout<<name<<" "<<balance<<endl;
    }
};
int main()
{
    int n,acno,amt,dep,rem;
    string name,type;
    cout<<"Enter the total amout of users:";
    cin>>n;
    bank d[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter account no:";
        cin>>acno;
        cout<<"Enter balance amount:";
        cin>>amt;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter account type:";
        cin>>type;
        cout<<"Enter amount to deposite:";
        cin>>dep;
        cout<<"Enter amount to remove:";
        cin>>rem;
        d[i].initial(acno,amt,name,type); 
        d[i].deposite(dep);
        d[i].withdraw(rem);
        d[i].display();
    }
}