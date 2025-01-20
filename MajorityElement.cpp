#include <iostream>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max_num = 0;
        int num_occurences = 1;
        int max_num_occurences = 0;
        vector<int>::iterator i;
        int prev;
        
        for(i = nums.begin(); i != nums.end(); i++){
            if(*i == prev){
                num_occurences++;
            }else{
                num_occurences = 1;
            }
            if(num_occurences > max_num_occurences){
                max_num_occurences = num_occurences;
                max_num = *i;
            }
            prev = *i;
        }

        return max_num;
    }
};