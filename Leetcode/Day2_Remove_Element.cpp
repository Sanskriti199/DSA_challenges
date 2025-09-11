class Solution {

public:

    int removeElement(vector<int>& nums, int value) {

        int ind=0;

        for(int i=0;i<nums.size();i++){

            if(nums[i]!= value){

                nums[ind]=nums[i];

                ind++;

            }

        }

        return ind;

    }

}
