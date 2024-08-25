#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of student:";
    cin>>n;
    int marks[n];
    //input
    for(int i=0;i<=n-1;i++)
    {
        cout<<"enter a marks: ";
        cin>>marks[i];
    }

    for(int i=0;i<=n-1;i++)
    {
        if(marks[i]<35)
        {
            cout<<i<<" ";
        }
    }

}