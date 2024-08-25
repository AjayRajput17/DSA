#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m;
    cout << "enter rows of first matrix: ";
    cin >> m;

    int n;
    cout << "enter column of first matrix: ";
    cin >> n;

    int p;
    cout << "enter rows of second matrix: ";
    cin >> p;

    int q;
    cout << "enter column of second matrix: ";
    cin >> q;

    if (n == p)
    {
        int a[m][n];
        int b[p][q];

        // input for first matrix
        cout << "Enter elements of first matrix :";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        // input for second matrix
        cout << "Enter elements of second matrix :";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }

        // creating of resultant matrix
        // order - first matrix -> rows * second matrix columns
        int res[m][q];

        // filling res matrix or multiplication
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                /*  multiply
                 res[i][j] = a[i][0]*b[0][j]
                                   +
                             a[i][1]*b[1][j]
                                   +
                             a[i][2]*b[2][j]
                */

                res[i][j] = 0;

                for (int k = 0; k < n; k++) // k<p - > alse possible
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout<<endl;

        // print res matrix
         for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    { // n!=p
        cout << "Matrices can not be multiplied";
    }


   
}