# Koko Eating Bananas

## 🔍 Problem Idea
Koko must eat all banana piles within `h` hours.  
She chooses a speed `k` (bananas per hour).  
We must find the **minimum integer speed** `k` such that she finishes in time.

---

## 🧠 Key Insight
- If Koko eats **faster**, she takes **less or equal hours**.
- If she eats **slower**, she takes **more hours**.
- This makes the function **monotonic**, so we use **Binary Search** on `k`.

---

## 🔢 Search Range
- **Lowest possible speed = 1**
- **Highest possible speed = max(piles)**  
  (worst case: she eats a full pile in one hour)

---

## 🧪 canEat() Function
For each pile:
- `hours = x / mid` (full hours)
- If not divisible → +1 extra hour  
Total hours must be `<= h`.

---

## 🧭 Binary Search Logic
- If `mid` works (can finish in time):  
  → try smaller speed → `r = mid`
- If `mid` is too slow:  
  → try bigger speed → `l = mid + 1`

When `l == r`, that's the minimum speed.

---

## ⏱ Time Complexity
### **O(n * log(maxPile))**
- `log(maxPile)` → from binary search  
- `n` → for checking each `mid`

---

## 💾 Space Complexity
### **O(1)**  
No extra space used except variables.

---
