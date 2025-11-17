class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> R;
        queue<int> D;
        int n=senate.size();
        for(int i=0; i<n; i++){
            if(senate[i] == 'R') 
               R.push(i);
            else D.push(i);
        } 

        while(!R.empty() && !D.empty()){
            int indexR = R.front(); R.pop();
            int indexD = D.front(); D.pop();
            
            if(indexR < indexD){
                R.push(indexR+n);
            }else
                D.push(indexD+n);
            
        }


        return D.empty() ? "Radiant" : "Dire";
    }
};