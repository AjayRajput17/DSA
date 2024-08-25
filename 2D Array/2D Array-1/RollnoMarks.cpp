#include<iostream>
using namespace std;
int main()
{
    // roll no , marks
   //4 students

    int arr[2][4];
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=3;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // int stud[4][2];

    // // column-1 = roll number
    // // column-2 = marks

    // for(int i=0;i<=3;i++)
    // {
    //     for(int j=0;j<=1;j++)
    //     {
    //         cin>>stud[i][j];
    //     }
    // }

    // for(int i=0;i<=3;i++)
    // {
    //     for(int j=0;j<=1;j++)
    //     {
    //         cout<<stud[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}    