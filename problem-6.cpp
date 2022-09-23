#include<iostream>
#include<string.h>
using namespace std;
class String {
    private:
        char Str[30];
    public:
        void set(char s2[30])
        {
            strcpy(Str,s2);
        }
        void display()
        {
            cout<<Str<<endl;
        }
        String operator+(String s)
        {
            String temp;
            // strcat(Str,s.Str);
            // strcpy(temp.Str,Str);
            strcpy(temp.Str,Str);
            strcat(temp.Str,s.Str);
            return temp;
        }
        void operator==(String s)
        {
            if(strcmp(Str,s.Str)==0)
            cout<<"same"<<endl;
            else 
            cout<<"not same "<<endl;
        }

};
int main()
{
    String s0,s1,s2;
    s0.set("kalyani ");
    s1.set("dave");
    s2=s0+s1;
    s0.display();
    s1.display();
    s2.display();
    (s0==s1);
}