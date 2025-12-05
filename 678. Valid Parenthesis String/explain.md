# Valid Parenthesis String 

## ✅ Problem

Given a string with `'('`, `')'`, and `'*'`, check if it can be a **valid parenthesis string**.
`'*'` can act as `'('`, `')'`, or `""`.

---

## ✅ Greedy Idea (Range Method)

Track a **range of open brackets**:

* `low` = minimum possible `'('`
* `high` = maximum possible `'('`

### Updates:

* `'('` → `low++`, `high++`
* `')'` → `low--`, `high--`
* `'*'` → `low--`, `high++`

### Rules:

* If `high < 0` → ❌ invalid
* If `low < 0` → set `low = 0`
* At end: `low == 0` → ✅ valid

---

## ✅ Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`

---

## ✅ One-Line Interview Answer

We use greedy bounds to track the possible number of open parentheses since `'*'` has three roles.
