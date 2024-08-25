#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reversepart(int i,int j,vector<int> &v)
{
    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void reverse(vector<int> &v)
{
    for(int i=0,j=v.size()-1;i<=j;i++,j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

int main()
{
    cout<<"enter a size of array:";
    int n;
    cin>>n;

    vector<int> v;
    cout<<"Enter a elements: ";
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);

    }
    cout<<"Enter a rotate step :";
    int k;
    cin>>k;
   display(v);
   // if k is greater than size then
    if(k>n)
        k = k%n;
   int s = v.size();
    reversepart(0,s-1-k,v);
    reversepart(s-k,s-1,v);
    reverse(v);
    display(v);


}