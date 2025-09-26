class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        int presum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            m[presum]+=1;
            presum+=nums[i];
            cnt += m[presum-k];
        }
        return cnt;
    }
};