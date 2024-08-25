// move all zero at the end of the array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "enter a size of the array ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int j =0;
    for(int i=0;i<n;i++)
    {
        if(a[i] !=0)
        {
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
            j++;
        }
    }
    
   


    for (int p = 0; p < n; p++)
    {
        cout << a[p];
    }
}