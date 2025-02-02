class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int end=nums.size(),k=0;
        for(int i=0;i<end;i++){
            if(nums[i]==val){
                int a=nums[end-1];
                nums[i]=a;
                k++;
                end--;
                i--;
            }
        }
        return nums.size()-k;
    }
};