# Reverse Polish Notation (RPN) Evaluation

## Problem

Evaluate an arithmetic expression given in Reverse Polish Notation (RPN).

### Input

* An array of strings `tokens` representing numbers or operators (`+`, `-`, `*`, `/`).

### Output

* An integer representing the evaluated result of the expression.

## Approach

1. **Use a stack** to keep track of numbers.
2. Iterate through each token in `tokens`:

   * If the token is a number, push it onto the stack.
   * If the token is an operator (`+`, `-`, `*`, `/`):

     1. Pop the top two numbers from the stack (`b` then `a`).
     2. Compute `a <operator> b`.
     3. Push the result back onto the stack.
3. After processing all tokens, the stack will have **one element**, which is the result.

### Important

* Division `/` truncates toward zero.
* Input is always valid; no division by zero occurs.

## Complexity

* **Time Complexity:** O(n), where n is the number of tokens (each token is processed once).
* **Space Complexity:** O(n), for the stack storing operands.
