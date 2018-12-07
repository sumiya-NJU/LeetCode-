/*

  典型的two point问题，数组可以覆盖，比较简单

*/



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size()==1) return 1;
        int i=0;
        
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                    nums[++i]=nums[j];
            }
        }
        for(vector<int>::iterator it=nums.begin()+i+1;it!=nums.end();)
        {
            it=nums.erase(it);
        }
        return i+1;
    }
};