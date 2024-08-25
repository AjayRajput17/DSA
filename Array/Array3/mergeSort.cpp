#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& arr1, vector<int>& arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res;

    int i = 0; //arr1
    int j = 0; //arr2

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            res.push_back(arr1[i]);
            i++;
        }
        else
        {
            res.push_back(arr2[j]);
            j++;
        }
    }

    // Add remaining elements of arr1
    while (i < n)
    {
        res.push_back(arr1[i]);
        i++;
    }

    // Add remaining elements of arr2
    while (j < m)
    {
        res.push_back(arr2[j]);
        j++;
    }

    return res;
}

int main()
{
    vector<int> arr1 = {1, 4, 5, 8};
    vector<int> arr2 = {2, 3, 6, 7, 10, 12};

    vector<int> v = merge(arr1, arr2);

    for (int num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
