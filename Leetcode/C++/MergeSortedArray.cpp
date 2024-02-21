class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = nums1.size() - 1; i > m - 1; i--) {
            nums1.erase(nums1.begin() + i);
        }

        for (int i = nums2.size() - 1; i > n - 1; i--) {
            nums2.erase(nums2.begin() + i);
        }

        for(int i = 0; i < n; i++){
            nums1.push_back(nums2[i]);
        }
        
        sort(nums1.begin(),nums1.end());
    }
};