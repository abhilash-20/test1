#include <iostream>
using namespace std;
// INSERTION SORT

int main()
{
    int n;
    cout << "enter the size of the array " << endl;
    cin >> n;
    int a[n];
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    cout << "the sorted array is ";
    for (int p = 0; p < n; p++)
    {
        cout << a[p] << " ";
    }
    return 0;
}