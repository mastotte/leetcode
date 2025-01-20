class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator i;
        bool found = false;
        int prev;
        for(i = nums.begin(); i != nums.end(); i++){
            if(*i == prev){
                nums.erase(i);
                i--;
            }else{
                prev = *i;
            }
        }
        return nums.size();
    }
};