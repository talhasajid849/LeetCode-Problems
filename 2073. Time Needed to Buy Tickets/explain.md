# Time Needed to Buy Tickets (LeetCode 2073)

## Problem Logic

* There are `n` people in a queue, each person `i` wants `tickets[i]` tickets.
* Each second, the person at the front buys **1 ticket**.
* If the person still needs more tickets, they go to the **back of the queue**; otherwise, they leave.
* The goal is to find the **total time** it takes for the person at position `k` to finish buying all their tickets.

### Key Observations

1. **Simulation Approach:**

   * Keep track of each person in the queue using a data structure like a queue.
   * Each second, allow the front person to buy 1 ticket.
   * If they still have tickets, move them to the back; otherwise, remove them.
   * Count seconds until person `k` finishes.

2. **Optimized Counting Approach:**

   * Person `i` contributes to the total time based on their position relative to `k`:

     * If `i <= k`: they can buy at most `min(tickets[i], tickets[k])` tickets.
     * If `i > k`: they can buy at most `min(tickets[i], tickets[k] - 1)` tickets.
   * Sum these contributions to get the total time for person `k`.

## Time and Space Complexity

* **Time Complexity:** O(n × max(tickets)) for the queue simulation approach.
* **Space Complexity:** O(n) for storing the indices of people in the queue.
