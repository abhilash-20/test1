#include <iostream>
using namespace std;
template <class T>
class array
{
private:
    T *a;
    int n;

public:
    void get_data()
    {
        cout << "limit: " << endl;
        cin >> n;
        a = new T[n];
        cout << "enter elements: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void display()
    {
        cout << "elements are: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    array<int> n;
    n.get_data();
    n.display();

    array<char> x;
    x.get_data();
    x.display();

    array<float> y;
    y.get_data();
    y.display();
}