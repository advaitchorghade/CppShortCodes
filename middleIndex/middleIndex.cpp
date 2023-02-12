class Solution {
public:
    int middleIndex(vector<int>& nums) {
        int n = nums.size();
        int sums = 0;
        int i = 0;
        for (i;i<n;i++){
            sums += nums[i];
        }
        int j = 0;
        int count = 0;
        for (j;j<n;j++){
            if (count == sums - count - nums[j]){
                return j;
            }
            else{
                count += nums[j];
            }
        } return -1;
        
    }
};
