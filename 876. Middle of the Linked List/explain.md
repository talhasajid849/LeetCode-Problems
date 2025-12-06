# Middle of the Linked List 

## ✅ Problem

Given the head of a singly linked list, return the **middle node**.
If there are **two middle nodes**, return the **second one**.

---

## ✅ Key Idea (Slow–Fast Pointer)

* `slow` moves **1 step**
* `fast` moves **2 steps**
* When `fast` reaches the end → `slow` is at the **middle**
* This method **returns the second middle automatically** for even-length lists.

---

## ✅ Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`

---

## ✅ One-Line Interview Answer

Fast runs twice as fast as slow, so when fast reaches the end, slow is at the middle node.
