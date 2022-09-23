#include<iostream>
using namespace std;
class Student{
    private:
        int rno;
        int marks;
    public:
        void set_data(int r,int m)
        {
            rno=r;
            marks=m;
        }

        void display(void){
            cout<<"\n-----------------------------------------\n";
            cout<<"Rno ->"<<rno<<endl;
            cout<<"Marks -> "<<marks<<endl;
        }

        Student operator++()
        {
            Student temp;
            temp.rno=++rno;
            temp.marks=++marks;
            return temp;
        }
        Student operator++(int n)
        {
            Student temp;
            temp.rno=rno++;
            temp.marks=marks++;
            return temp;
        }

};
int main()
{
        Student s1,s2;
        s1.set_data(17,100);
        s2.set_data(1,50);
        s1.display();
        s2.display();
        (s1++).display();
        (++s2).display();
        s1.display();
}
