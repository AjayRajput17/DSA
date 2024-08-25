#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

//  m-1: two pass
void sort_M1(vector<int>&v)
{
    int n = v.size();
    int noz=0;
    int noo =0;
    for(int i=0;i<n;i++){
        if(v[i]==0)
            noz++;
        else
            noo++;    
    }

    for(int i=0;i<n;i++)
    {
        if(i<noz)
            v[i]=0;
        else
            v[i]=1;    
    }
}

// m2-2 : two pointer 
void sort_M2(vector<int> &v)

{
    int n=v.size();
    int zero = 0;
    int one = 7;
    vector<int> v1 = v;
    for(int i=0;i<n;i++)
    {
        if(v1[i]==0)
        {
            
            v[zero]=0;
            zero++;
        }
         
         else if(v1[i]==1){
            
            v[one]=1;
            one--;
        }
    }
}

void sort_M3(vector<int>&v)
{
  int n = v.size();
  int i=0;
  int j = n-1;

  while(i<j)
  {
    if(v[j]==1)
        j--;

    if(v[i]==0)
        i++;

    if(i>j) break;
    if(v[i]==1 && v[j]==0)
    {
        v[i]=0;
        v[j]=1;
        i++;
        j--;
    }    
  }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++)
    {
       // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //sort(v.begin(),v.end());
    // user defined function
    // sort_M1(v);
    // sort_M2(v);
    sort_M3(v);
    
    for(int i=0;i<v.size();i++)
    {
       // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}