class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // build freq map
      int freq[26] = {0};
        for(auto task : tasks){
            freq[task - 'A']++;
        }

        // max heap for the preority queue
        priority_queue<int> pq;
        for(int i=0; i<26; i++){
            if(freq[i] > 0)
            pq.push(freq[i]);
        }

        int time =0;
        // Process task untill the heap is empty
        while(!pq.empty()){
            int cycle = n+1;
            vector<int> store;
            int taskCount=0;
            // Execute task in the each cycle
            while(cycle-- && !pq.empty()){
                int top = pq.top(); 
                if(top > 1) store.push_back(top -1);
                pq.pop();
                taskCount++;
            }
            // REstore updated freq to the heap
            for(int &x : store)
                pq.push(x);
            time += (pq.empty() ? taskCount : n+1);
        }
        return time;
    }
};