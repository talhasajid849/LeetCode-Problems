class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(res));

        double median=0.0;
        int n = res.size();


        if(n%2 == 1){
            median = res[n/2];
        }else{
           median = (res[n/2-1] + res[n/2])/2.0;
        }

        return median;
    }
};