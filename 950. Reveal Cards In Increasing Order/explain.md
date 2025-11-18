# Deck Revealed Increasing - Logic Summary

## Problem Overview
Given a deck of unique cards represented as integers, the goal is to reorder the deck so that when the following process is applied, the cards are revealed in **increasing order**:

1. Reveal the top card and remove it from the deck.
2. If cards remain, move the next top card to the bottom of the deck.
3. Repeat until all cards are revealed.

The task is to find the initial order of the deck to achieve this.

---

## Logic / Approach

1. **Sort the deck in increasing order**  
   - This ensures that we process cards from the smallest to the largest, matching the required reveal order.

2. **Use a queue to simulate positions**  
   - Instead of physically moving cards, maintain a queue of indices representing the available positions in the resulting deck.  
   - This allows simulating the "move top card to bottom" step safely.

3. **Place cards into positions**  
   - For each card in the sorted deck:
     1. Take the first available index from the queue and place the card there.
     2. Move the next available index to the back of the queue (simulating moving the top card to the bottom).  
   - Repeat until all cards are placed.

4. **Result**  
   - The filled deck represents the initial order that will reveal cards in increasing order when the original process is applied.

---

## Time Complexity
- Sorting the deck: **O(n log n)**
- Queue operations (placement simulation): **O(n)**
- **Overall:** **O(n log n)**

## Space Complexity
- Queue for positions: **O(n)**
- Result deck array: **O(n)**
- **Overall:** **O(n)**
