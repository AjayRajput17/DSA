#include<iostream>
using namespace std;

void display(int *ptr,int size) // int ptr[]
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
  cout<<endl;
}

void change(int *p)
{
    p[0] = 100;
}

int main()
{
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // display(arr,size);
    // change(arr);
    // display(arr,size);

    // int *ptr = arr;
    // *ptr = 8;
    // ptr++;
    // *ptr=9;
    // display(arr,size);

    int *ptr = arr;

    for(int i=0;i<size;i++)
    {
        cout<<*ptr<<" ";
        ptr++;

    }


}