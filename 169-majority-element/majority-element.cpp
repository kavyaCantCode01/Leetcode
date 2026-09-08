    class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int count = 0,i=0,cand;
            while(i<nums.size()){
                if(count == 0)
                    cand = nums[i];
                if(nums[i] == cand)
                    count++;
                else
                    count--;
                i++;
            }
            return cand;
        }
    };