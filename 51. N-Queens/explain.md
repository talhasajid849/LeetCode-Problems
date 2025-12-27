# N-Queens (Backtracking)

## Idea
We place **one queen in each row** of the chessboard.
For every row, we try all columns and place a queen **only if it is safe**.
If a placement causes a conflict, we undo it and try another position.

---

## How Backtracking Works
1. Start from **row 0**
2. Try placing a queen in every column of the current row
3. If the position is safe:
   - Place the queen (`'Q'`)
   - Move to the next row
4. If no column works, **backtrack** (remove the last queen)
5. When `row == n`, we found a valid solution → save the board

---

## isSafe(row, col)
Before placing a queen, we check:
- **Same column above**
- **Upper-left diagonal**
- **Upper-right diagonal**

We only check **upwards** because queens are placed row by row from top to bottom.

---

## Why No Row Check?
Each row gets **exactly one queen**, so row conflicts never happen.

---

## Time & Space
- **Time:** `O(n!)`
- **Space:** `O(n²)` (board + recursion)

---

## One-Line Summary
> Try all possible queen placements row by row and backtrack when a conflict appears.
