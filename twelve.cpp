#include<iostream>
using namespace std;
class time{
    private:
    int hour,min,sec;
    public:
    time()
    {
        hour=0;
        min=0;
        sec=0;
    }
    time(int hour,int min,int sec)
    {
        this->hour=hour;
        this->min=min;
        this->sec=sec;
    }
    time add(time t1,time t2)
    {
        int totsec=t1.sec+t2.sec;
        int totmin=t1.min+t2.min;
        int tothour=t1.hour+t2.hour;
        while(totsec>=60)
        {
            totmin+=1;
            totsec=totsec-60;
        }
        while(totmin>=60)
        {
            tothour+=1;
            totmin=totmin-60;
        }
        t1.hour=tothour;
        t1.min=totmin;
        t1.sec=totsec;
        return(t1);
    }
    void display()
    {
        cout<<hour<<":"<<min<<":"<<sec<<endl;
    }
};
int main()
{
    time t1(2,36,55);
    time t2(1,40,33);
    time t3;
    time t4=t3.add(t1,t2);
    t4.display();
}