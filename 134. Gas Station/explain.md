# Gas Station Problem

## Problem Statement
Given `n` gas stations along a circular route:

- `gas[i]` = amount of gas available at station `i`
- `cost[i]` = gas required to travel from station `i` to `(i + 1) % n`

You start with **0 fuel** at any station.  
Return the **starting station index** that allows completing the full circle, or `-1` if impossible.

---

## Approach: Greedy (Single Pass)

1. Track `tank` = current fuel while moving clockwise.
2. At each station `i`:
   - `tank += gas[i] - cost[i]`
   - If `tank < 0` → starting from current `start` fails
     - Update `start = i + 1`
     - Reset `tank = 0`
3. After completing the loop:
   - If `totalGas < totalCost` → return `-1`
   - Else → return `start` (guaranteed to complete the cycle)

**Key Idea:** Skipping failed starts ensures only the valid start remains.

---

## Complexity

- **Time:** O(n) — single pass through all stations  
- **Space:** O(1) — only a few variables

---

## C++ Implementation

```cpp
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0, start = 0;
        int totalGas = 0, totalCost = 0;

        for(int i = 0; i < gas.size(); i++){
            totalGas += gas[i];
            totalCost += cost[i];

            tank += gas[i] - cost[i];

            if(tank < 0){
                start = i + 1;
                tank = 0;
            }
        }

        if(totalGas < totalCost) return -1;
        return start;
    }
};
