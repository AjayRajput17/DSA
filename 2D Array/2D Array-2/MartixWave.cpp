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

    int a[m][n];

    // input for first matrix
    cout << "Enter elements of first matrix :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    //  foreward wave print
    cout<<endl<<"foreward wave print"<<endl;
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
        }
        
    }
    cout<<endl<<"backward wave print"<<endl;
    int flag =0;
    for(int i=m-1;i>=0;i--)
    {
        
        if(flag ==1)
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
                flag=0;
            }
        }
        else{
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
                flag=1;
            }
        }
        
    }

    cout<<endl<<"column wise printing"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}