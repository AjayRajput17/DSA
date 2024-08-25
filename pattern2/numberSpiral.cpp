#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows:";
    cin>>n;

    /*needed final output:  4444444
                            4333334
                            4322234
                            4321234
                            4444444
                            4333334
                            4322234 */ 

    /*first phase:
1111111
1222222
1233333
1234444
1233333
1222222
1111111
    */ 

//    for(int i=1;i<=2*n-1;i++)
//    {
   
//     for(int j=1;j<=2*n-1;j++)
//     {
//         int a=i;
//         int b=j;
//         if(a>n) a= 2*n-i;
//         if(a>n) b= 2*n-j;
//         cout<<min(a,b);

//     }
//     cout<<endl;
//  }

   for(int i=1;i<=2*n-1;i++)
   {
   
    for(int j=1;j<=2*n-1;j++)
    {
        int a=i;
        int b=j;
        if(a>n) a= 2*n-i;
        if(a>n) b= 2*n-j;
        int x = min(a,b);
        cout<<n-x+1;



    }
    cout<<endl;
 }
                          


}   