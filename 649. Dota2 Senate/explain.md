# Dota2 Senate

## 🔍 Core Logic
- Maintain two queues:
  - `R` → indexes of Radiant senators  
  - `D` → indexes of Dire senators  
- Each senator’s index determines **turn order**.
- While both queues are non-empty:
  - Pop the front of each queue → next Radiant vs Dire.
  - The senator with the **smaller index** gets the turn first and **bans** the other.
  - The winner re-enters their queue with:
    ```
    index + n
    ```
    (acts again in the next round).

## 🏆 Ending Condition
- If `D` becomes empty → **Radiant wins**.  
- If `R` becomes empty → **Dire wins**.

## ⏱️ Time Complexity
- **O(n)**  
  Each senator is processed at most a few times and the queues operate in linear time.

## 💾 Space Complexity
- **O(n)**  
  Two queues storing senator indexes.

