/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
    */
#ifndef MOVE_ZEROES
#define MOVE_ZEROES
void MoveZeroes()
{
        vector<int> nums = {0,13,4,12,0,5};
        int i=0,len=nums.size(),lastNonZeroFoundAt = 0;;
        for(i=0;i<len;i++)
        {
                if(nums[i] != 0)
                {
                        nums[lastNonZeroFoundAt++]=nums[i];
                }
        }

        for(i=lastNonZeroFoundAt;i<len;i++)
        {
                nums[i]=0;
        }
        for(i=0;i<len;i++)
        cout<<nums[i]<<endl;
}
#endif
