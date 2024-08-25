#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int m;
    cout << "enter no of rows ";
    cin >> m;
    int n;
    cout << "Enter no of columns :";
    cin >> n;

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // find largest
    int max = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(max < arr[i][j])
            {
                max3 = max2;
                max2 = max;
                max = arr[i][j];    
            }
            else{
                if(max2 < arr[i][j])
                {
                    max3 = max2;
                    max2 = arr[i][j];
                }
                else
                    if(max3 < arr[i][j]){
                        max3 = arr[i][j];
                    }
                
            }
        }
    }

    cout<<"maximum is :"<<max<<endl;
    cout<<"second maximum is :"<<max2<<endl;
    cout<<"Third maximum is :"<<max3;
}