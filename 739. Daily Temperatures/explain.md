# Daily Temperatures 
## 📌 Logic (Short & Clear)

-   Use a **monotonic decreasing stack** that stores **indices** of
    days.
-   For each day `i`:
    -   While the stack is not empty **and** today's temperature is
        **warmer** than the temperature of the day on top of the stack:
        -   That means we found the next warmer day for that previous
            index.
        -   Compute the wait time:\
            `result[prev] = i - prev`
        -   Pop the stack.
    -   Push the current index `i` onto the stack.
-   Any index left in the stack has **no warmer future day**, so their
    result remains `0`.

---
## ⏱️ Time Complexity

-   Each index is **pushed once** and **popped once**.
-   Total operations: **O(n)**\
-   Very efficient for n up to 100,000.

---

## 🧠 Space Complexity

-   Stack can store up to **n** indices in worst case.
-   So: **O(n)** space complexity.
