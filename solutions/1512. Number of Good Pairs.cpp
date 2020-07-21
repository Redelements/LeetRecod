class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        int guy = 0;
        for(int i = 0;i<size-1;i++){
            guy = nums[i];
            for(int j = 1; j<size;j++){
                if(nums[i]==nums[j]&& i<j)
                    count++;
            }
        }
        return count;
        }
};