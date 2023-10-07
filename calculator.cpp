#include<iostream>
using namespace std;
int main()
{
    // *****************Calculator***************//
    int x;
    cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
    cin>>x;
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    switch(x)
    {
        case 1: cout<<"The ans is "<<(a+b);
        break;
        case 2: cout<<"The ans is "<<(a-b);
        break;
        case 3: cout<<"The ans is "<<(a*b);
        break;
        case 4: cout<<"The ans is "<<(a/b);
        break;
        default: cout<<"Invalid input";
        break;
    }
    return 0;
}