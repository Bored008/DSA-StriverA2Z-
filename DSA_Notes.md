# DSA Learning Notes

> **Rule for AI Tutor**: Proactively update this file whenever the user learns a new concept or makes a recurring mistake.

## 0. Things I Keep Forgetting (Review Often)
- **Subtracting from `.size()` causes crashes!** `.size()` is unsigned. `1 - 2` becomes 4 billion, not -1. Always change `i < nums.size() - 2` to `i + 2 <= nums.size()`.
- **`cin >> nums[x]` inside `for(auto x : nums)` is WRONG!** `x` is the value (which starts at 0), not the index. You are overwriting index 0 over and over. Use `for(int i = 0; i < n; i++)` to read inputs.
- **Initialization for max values**: If an array can have negative numbers, initialize your tracking variables to `INT_MIN` or `nums[0]`, NEVER `0`.

## 1. Array Iteration & Loops
- **Traditional For Loop**: `for(int i = 0; i < nums.size(); i++)`
  - Use when you need the **index** (e.g., comparing `nums[i]` with `nums[i+1]`, reading inputs).
- **Range-based For Loop**: `for(auto x : nums)`
  - Gives you a **copy** of the value. Cannot modify the original array. 
  - Good for just reading/printing.
- **Reference Range Loop**: `for(auto& x : nums)`
  - Gives you a **reference** to the value. Modifying `x` modifies the original array.

## 2. Finding Largest / Second Largest in O(n)
- **Second Largest Logic**: Use a single pass with two variables.
  - *Case 1 (New Largest)*: `if (nums[i] > largest)` -> Demote old largest to secondLargest, update largest.
  - *Case 2 (New Second Largest)*: `else if (nums[i] > secondLargest && nums[i] != largest)` -> **Crucial**: The `!= largest` check prevents duplicates from accidentally becoming the second largest.

## 3. Two Pointers (In-Place Array Modification)
- **Concept**: When a problem asks you to modify an array "in-place" with O(1) extra space (like removing duplicates), use Two Pointers.
- **How it works**:
  - **`left` pointer**: Tracks the index of the last valid/unique element we saved.
  - **`right` pointer**: Scans ahead through the array (usually just the `i` in your for loop).
- **Execution**: When `right` finds a new valid element, write it to the *next* spot:
  ```cpp
  nums[left + 1] = nums[right];
  left++;
  ```
- **Returning count**: The total number of valid items is always `left + 1`.

## 4. Array Rotation (O(1) Space Magic Reversal)
- **Concept**: To rotate an array to the right by `k` steps in **O(n) time** and **O(1) space**, use the 3-step Reversal Algorithm.
- **Execution**:
  ```cpp
  k = k % nums.size(); // Prevent crashing if k > array size
  reverse(nums.begin(), nums.end()); // 1. Reverse entire array
  reverse(nums.begin(), nums.begin() + k); // 2. Reverse first k elements
  reverse(nums.begin() + k, nums.end()); // 3. Reverse remaining elements
  ```

## 5. Finding Top K Elements (Priority Queue / Heap)
*(Added: August 18, 2026)*
- **Concept**: When a problem asks for the "k-th largest", "k-th smallest", or "top K frequent" elements, do **not** sort the whole array. Sorting takes $O(N \log N)$. Use a **Priority Queue** (Heap) to track only the top K elements in $O(N \log K)$ time and $O(K)$ space.
- **The "VIP Club" Min-Heap Logic**:
  - To find the **K-th largest** number, use a **Min-Heap** of size `K`.
  - The *weakest* (smallest) element in the club is always pushed to the top (`pq.top()`), standing by the door.
  - If the club exceeds `K` members (`pq.size() > k`), you kick out the weakest one (`pq.pop()`).
  - By the end, the `K` absolute largest numbers have survived, and the weakest of those survivors (the **K-th largest**) is standing right at the door!
- **C++ Syntax for Min-Heap**:
  ```cpp
  priority_queue<int, vector<int>, greater<int>> pq; // The 'greater<int>' makes it a Min-Heap!
  ```

## 6. Datatype Limits & `INT_MIN` Traps
*(Added: August 18, 2026)*
- If the problem constraints say `-2^31 <= nums[i] <= 2^31 - 1`, an element in the array can actually *be* exactly `INT_MIN`.
- **Solution**: If you need a placeholder that is guaranteed to be smaller than any array element, upgrade your variables to 64-bit `long long` and initialize them to `LLONG_MIN`.
