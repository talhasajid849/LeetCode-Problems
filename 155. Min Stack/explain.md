# Min Stack 

## 📌 Goal
Design a stack supporting in **O(1)** time:
- push(x)
- pop()
- top()
- getMin()

---

## 📌 Core Idea
Use **two stacks**:
- **Main Stack:** stores all values
- **Min Stack:** stores current minimums

---

## 📌 Logic (No Code)

### ✔ push(x)
- Push x to main stack.
- Push x to min stack if min stack is empty or x ≤ current min.

### ✔ pop()
- Pop from main stack.
- If popped value equals min stack top → pop from min stack.

### ✔ top()
Return top of main stack.

### ✔ getMin()
Return top of min stack (current minimum).

---

## 📌 Example
Push: 5 → [5]
Push: 3 → [5,3]
Push: 7 → [5,3]
Push: 3 → [5,3,3]
Pop → remove 3 → min becomes 3


---

## ⏳ Time Complexity
All operations → **O(1)**

## 💾 Space Complexity
**O(N)** (both stacks may grow)

