class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int no=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                nums[no]=nums[i];
                no++;
            }
        }
        for(int i=no;i<nums.size();i++){
            nums[i]=0;
        }

    }
};