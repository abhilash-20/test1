#include<iostream>
using namespace std;
class test
{
    public:
        int x;
        test(int a=0)
        {
            x=a;
        }
};

class der1:public test{
    public:
    int m;
    der1(int a=0,int c=0):test(a)
    {
        m=c;
    }
    int add()
    {
        return m+(x*x);
    }
};

int main()
{
    der1 p(3);
    cout<<"add sum: "<<p.add()<<endl;
    return 0;
}