/* Write a function to find out the first and last digit of a number without returning anything*/

#include<iostream>
using namespace std;

void check(int n,int *ptr1, int *ptr2)
{
    *ptr2 = n%10;
  while(n>9)
  {
    n = n/10;
  }
  *ptr1 = n;
  

}

int main()
{
    int n;
    cin>>n;
    int firstDigit,lastDigit;
    int *ptr1 = &firstDigit, *ptr2 = &lastDigit; 
    check(n,ptr1,ptr2);
    cout<<"first Digit:"<<*ptr1<<" Last Digit:"<<*ptr2;
    
    
}


