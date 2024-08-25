#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());  // t.c = O(n logn)

      for(int i=0;i<5;i++){
        cout<<v[i];
    }

    reverse(v.begin(),v.end());
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<v[i];
    }
    
}