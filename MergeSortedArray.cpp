class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n_cursor = 0;
        int m_cursor = 0;

        while(n_cursor < n && m_cursor < n+m){
            if(nums2[0] <= nums1[m_cursor]){
                nums1.pop_back();
                nums1.insert(nums1.begin() + m_cursor, nums2[0]);
                nums2.erase(nums2.begin());
                for(int num:nums1){
                    cout<<num<<endl;
                }
                n_cursor++;
                m_cursor++;
            }else{
                m_cursor++;
            }
        }
        for(int num:nums2){
            nums1.pop_back();
        }
        for(int num:nums2){
            nums1.push_back(num);
        }
    }
};