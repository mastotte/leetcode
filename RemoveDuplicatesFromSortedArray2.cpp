class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev;
        vector<int>::iterator i;
        vector<int>::iterator next;
        for(i = nums.begin(); i != nums.end(); i++){
            next = std::next(i,1);
            if(next == nums.end()){
                break;
            }
            if(*i == prev && *next == prev){
                nums.erase(i);
                i--;
            }else{
                prev = *i;
            }
        }
        return nums.size();
    }
};