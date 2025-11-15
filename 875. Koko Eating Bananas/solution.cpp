class Solution {
public:
    bool canEat(vector<int>& piles, int h, int mid){
        int totalHours =0;

        for(int &x : piles){
            totalHours += x / mid;
            if(x%mid != 0){
                totalHours++;
            }
        }
        return totalHours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
      int l =1;
      int r = *max_element(piles.begin(), piles.end());

      while(l < r){
        int mid = l + (r - l)/2;

        if(canEat(piles, h, mid)){
            r = mid;
        }else{
            l = mid+1;
        }
      }
      return l;
    }
};