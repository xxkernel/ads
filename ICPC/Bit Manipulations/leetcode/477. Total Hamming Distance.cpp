class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;
        for(int i = 0;i<32;i++){
            int cnt = 0;
            for(auto x:nums){
                cnt+=((x>>i)&1);
            }
            ans+=cnt*(nums.size()-cnt);
        }
        return ans;
    }
};