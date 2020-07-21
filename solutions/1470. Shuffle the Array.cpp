class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n){
        vector<int> split_lo(nums.begin(), nums.begin() + n);
        vector<int> split_hi(nums.begin() + n, nums.end());
        vector <int> vect(n*2,0);
        int count_lo = 0;
        int count_hi = 0;
        for(int i = 0; i < n*2; i ++)
        {
            if(i%2==0){
                vect[i]= split_lo[count_lo];
                count_lo++;
            }
            else{
                vect[i] = split_hi[count_hi];
                count_hi++;
            }
        }
    return vect;
    }
};