# 🥪 Number of Students Unable to Eat Lunch

## 📌 Problem Summary

A school cafeteria has two types of sandwiches:

* **0 → Circular**
* **1 → Square**

Students are in a queue, each with a preference (0 or 1).
Sandwiches are in a stack (top is index 0).

### Rules

1. If the student at the front likes the top sandwich → they take it and leave.
2. Otherwise → student moves to the back of the queue.
3. The process stops when **nobody in the queue wants the top sandwich**.

**Task:** Return the number of students that cannot eat.

---

## 🧠 Queue Simulation Approach

* Push all students into a queue.
* Use an index `i` to track the current sandwich.
* Rotate students until:

  * A student takes the sandwich (match), or
  * You complete a full rotation without any student taking it → stuck.

If a full rotation happens:
**The number of students left in the queue = students who cannot eat.**

---

## ⏳ Complexity Analysis

* **Time Complexity:** O(n²)
  Worst case: every student rotates for every sandwich.

* **Space Complexity:** O(n)
  Queue stores all students.
