#include <iostream>
using namespace std;
int main()
{
    int arr[5][6] = {
        {0, 0, 0, 0, 1, 1},
        {0, 0, 1, 1, 1, 1},
        {0, 0, 0, 1, 1, 1},
        {0, 0, 0, 0, 1, 1},
        {0, 1, 1, 1, 1, 1},
    };
    int m = 5;
    int n = 6;
    int row =0;
    int maxOnes =0;

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        int x = 1;
        int low = 0;
        int high = n - 1;
        int res = -1;

        while (low <= high)
        {

            int mid = low + (high - low) / 2;
            if (arr[i][mid] == x)
            {
                if (arr[i][mid - 1] == x)
                {
                    high = mid - 1;
                }
                else
                {
                    res = mid;
                    break;
                }
            }
            else if (arr[i][mid] < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (res == -1)
        {
            count = 0;
        }
        else
        {
            count = n - res;
        }

        if(maxOnes < count){
            maxOnes =count;
            row = i;
        }

    }
     cout<<row;
}