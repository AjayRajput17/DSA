// sort colors leetcode  qno-75

// M-1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int zero = 0;
        int one = 0;
        int two = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
                zero++;
            else 
               if(nums[i]==1)
                  one++;
                else
                    two++;  

        }

        for(int i=0;i<nums.size();i++)
        {
            if(i<zero)
                nums[i]=0;
            else
                if(i<zero+one)
                    nums[i]=1;
                else
                    nums[i]=2;        
        }
    }

    int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    sortColors(nums);

     for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
     return 0;
   }
};