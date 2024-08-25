// inpout a string of length n and count all the vowel in the given string

#include<iostream>
using namespace std;
int main()
{
    // string str = "raghav";
    string str;
    getline(cin,str);
    int count =0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='o'|| str[i]=='i'||str[i]=='u')
        {
            count++;
            
        }
        i++;
    }
    cout<<count;
}