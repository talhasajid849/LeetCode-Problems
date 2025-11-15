class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int s : students)
                q.push(s);

        int i=0;
        int rotation = 0;

        while(!q.empty()){
            if(q.front() == sandwiches[i]){
                q.pop();
                i++;
                rotation = 0;
            }else{
                q.push(q.front());
                q.pop();
                rotation++;
            }

            if(rotation == q.size()){
                return q.size();
            }
        }
        return 0;
    }
};