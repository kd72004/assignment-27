#include<iostream>
using namespace std;
class Time{
    private:
        int hour;
        int minit;
        int second;
    public:
        void set(int h,int m,int s)
        {
            hour=h;
            minit=m;
            second=s;
        }
        friend void operator<<(ostream &o,Time t);
        friend void operator>>(istream &o,Time t);
};
void operator<<(ostream &o,Time t)
{
    cout<<t.hour<<":"<<t.minit<<":"<<t.second<<endl;
}
void operator>>(istream &o,Time t)
{
    cout<<"enter hour -> ";
    cin>>t.hour;
    cout<<"enter minit -> ";
    cin>>t.minit;
    cout<<"enter second -> ";
    cin>>t.second;
}
int main()
{
    Time t1,t2;
    cin>>t1;
    //t1.set(12,30,55);
    //t2.set(1,20,33);
    cout<<t1;
    cout<<t2;
}