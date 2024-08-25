#include<iostream>
#include<vector>
using namespace std;

// MOve all negative number to begainning and positive to end with contant extra space

void sort_M1(vector<int>&v)
{
   int i=0;
   int n = v.size();
   int j = n-1;

   while(i<j)
   {
    if(v[j]>0)
        j--;
    
    if(v[i]<0)
        i++;

    if(i>j)
        break; 

    if(v[i]>0 && v[j]<0)
    {
        int temp = v[i];
         v[i] = v[j];
         v[j] = temp;
        i++;
        j--;
        
    }       
   }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(0);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort_M1(v);

     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}