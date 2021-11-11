/*
 *Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
 */ 
#ifndef SUB_ARRAY_SUM
#define SUB_ARRAY_SUM
void SubArraySum()
{
        vector<int> nums  = {-2,-3,-1};
        int i=0,j=0,sum=0,maxsum=0,elem=nums.size();
        //least in max sum
        maxsum = nums[0];

        for(i=0;i<elem;i++)
        {
                if(maxsum<nums[i])
                        maxsum = nums[i];

                sum=nums[i];
                for(j=i+1;j<elem;j++)
                {
                        cout<<j<<endl;
                        sum += nums[j];
                        if(sum>maxsum)
                        {
                                maxsum=sum;
                                cout<<maxsum<<endl;
                        }
                }
        }
        cout<<"Final max sum is "<<maxsum <<endl;
}

#endif
