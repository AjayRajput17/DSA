#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = INT8_MIN;
    int row_no;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }

        if (max < sum)
        {
            max = sum;
            row_no = i;
        }
    }

    cout<<" maximum row is : "<<row_no;
}