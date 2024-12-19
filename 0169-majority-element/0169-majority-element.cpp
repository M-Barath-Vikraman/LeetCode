class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size()-1;
        unordered_map<int,int> umap;
        for(auto i:nums){
            umap[i]++;
            if(umap[i]>n/2){
                return i;
            }
        }
        return 0;
    }
};