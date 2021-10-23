/*
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
Input: nums = [1,1,2]
Output: 2, nums = [1,2]
*/
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        if (n==0 || n==1)
        return n;
    int j = 0;
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
 
    return j;
    }
};
