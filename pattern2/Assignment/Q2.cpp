#include<iostream>
using namespace std;
int main()
{
    int n;
   cout<<"enter no of rows:";
   cin>>n;
   int nsp=n-1;
   int nst=1;

   for(int i=1;i<=n;i++)
   {
   
       for(int j=1;j<=nsp;j++)
      {
        cout<<" ";
      }
      nsp--; 

      for(int k=1;k<=nst;k++)
      {
        cout<<char(64+k);
      }
      nst+=2;
      cout<<endl;
    }
   }
   