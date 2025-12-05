# Merge Triplets to Form Target Triplet

## ✅ Problem Summary

Given multiple triplets, you can merge any two using `max()` on each index.
Check if you can form the **exact target triplet `[x, y, z]`**.

---

## ✅ Greedy Idea

* Since `max()` only **increases values**, we must **ignore any triplet** that exceeds the target.
* From valid triplets, we independently try to collect:

  * `x` from index `0`
  * `y` from index `1`
  * `z` from index `2`

If all three are found → ✅ **Return true**

---

## ✅ Conditions

Ignore a triplet if:

```
t[0] > x OR t[1] > y OR t[2] > z
```

---

## ✅ Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`

---

## ✅ One-Line Interview Explanation

We independently collect `x`, `y`, and `z` from valid triplets since `max()` never decreases values.
