#include<iostream>
using namespace std;

bool check(int x)
{
    int n = x;
    int rev;

    while(n!=0)
    {
        int rem = n%10;
        rev = (rev*10)+rem;
        n = int(n/10);
    }
    if(rev==x)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    bool z = check(156);
    cout<<z;
}