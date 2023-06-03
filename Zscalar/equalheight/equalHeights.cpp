/*
https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/

*/
class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        int n = nums.size();
        // approach no 1
        /*
        1. Sort the array
        2. Take the middle element
        3. Now subtract or add to the eleement to make it equal to this element
        4. Return this amt in the ans of min moves
        */
        sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        int i = 0, j = n - 1;
        int cost = 0;
        while (i <= j)
        {
            cost += abs(nums[j] - nums[i]);
            i++;
            j--;
        }
        return cost;
    }
};