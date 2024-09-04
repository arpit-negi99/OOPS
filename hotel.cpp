#include<iostream>
using namespace std;
class hotel{
    private:
    int rno,NOD,tariff;
    string name;
    int calc()
    {
        int x;
        x=NOD*tariff;
        if(x>10000)
        {
            return(x*1.05);
        }
        return x;
    }
    public:
    void checkin(int rno,int NOD,int tariff,string name)
    {
        this->rno=rno;
        this->NOD=NOD;
        this->tariff=tariff;
        this->name=name;
    }
    void checkout()
    {
        cout<<rno<<" "<<NOD<<" "<<tariff<<" "<<name<<" "<<calc()<<endl;
    }
};
int main()
{
    hotel d1;
    d1.checkin(4001,500,500,"Chandramukhi");
    d1.checkout();
}