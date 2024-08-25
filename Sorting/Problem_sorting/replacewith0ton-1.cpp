#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {19, 12, 23, 8, 16};
    vector<int> v(5, 0); // 0 means not visited
    int n = 5;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        int min = INT8_MAX;
        int min_idx=-1;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 1)
                continue;
            else
            {
                if(min > arr[j])
                {
                    min = arr[j];
                    min_idx = j;
                }
            }
        }
        arr[min_idx] = i;
        v[min_idx]=1;
    }

    for(int i=0;i<n;i++)
    {
        cout<<"  "<<arr[i];
    }
}