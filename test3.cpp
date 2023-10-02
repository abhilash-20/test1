#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    int s,ele;
    cout<<"enter the number of elements you want to enter"<<endl;
    cin>>s;
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"the vector is: (";
    for(int i=0;i<s;i++)
    {
        cout<<v.at(i);
        if(i!=(s-1))
        {
            cout<<",";
        }
    }
    cout<<")";
    return 0;
}