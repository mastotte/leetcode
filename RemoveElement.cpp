#include <vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cur = 0;
        vector<int>::iterator i;
        for(i = nums.begin(); i != nums.end(); ++i){
            if(*i == val){
                nums.erase(i);
                i--;
            }
        } 
        return nums.size();
    }
};