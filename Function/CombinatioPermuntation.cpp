#include <iostream>
using namespace std;

int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++)
    {
        f = f*i;
    }

    return f;
}

int combination(int n,int r)
{
    int nrc = fact(n)/(fact(r)*fact(n-r));
    return nrc ;
}

int permuntation(int n,int r)
{
    int npr  =  fact(n)/(fact(n-r));
    return npr;
}

int main()
{
   
    int n, r;
    cout << "enter value of n:";
    cin >> n;
    cout << "enter value of r:";
    cin >> r;

/* Without function
    int nfact = 1;
    for(int i=1;i<=n;i++)
    {
        nfact = nfact*i;
    }

    int rfact=1;
    for(int i=1;i<=r;i++)
    {
        rfact = rfact*i;
    }

    int nrfact=1;
    for(int i=1;i<=n-r;i++)
    {
        nrfact = nrfact*i;
    }

    int ncr = nfact/(rfact*nrfact);
    cout<<ncr; */

    int ncr = combination(7,2);
    int npr = permuntation(7,2);
    cout<<"permuntation:"<<ncr;
    cout<<"combination: "<<npr;

   

}

