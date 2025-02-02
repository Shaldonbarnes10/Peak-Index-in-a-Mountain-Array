# Peak Index in a Mountain Array

## Problem Statement
You are given an integer mountain array `arr` of length `n`, where the values increase to a peak element and then decrease. Your task is to find and return the index of the peak element in **O(log(n))** time complexity.

## Example Inputs and Outputs

### Example 1:
**Input:**  
`arr = [0,1,0]`

**Output:**  
`1`

### Example 2:
**Input:**  
`arr = [0,2,1,0]`

**Output:**  
`1`

### Example 3:
**Input:**  
`arr = [0,10,5,2]`

**Output:**  
`1`

## Constraints
- `3 <= arr.length <= 10^5`
- `0 <= arr[i] <= 10^6`
- `arr` is guaranteed to be a **mountain array**.

## Solution Approach
Since we need to solve this in **O(log(n))** time complexity, we can use **Binary Search**:
1. Initialize `left = 0` and `right = len(arr) - 1`.
2. Perform a binary search:
   - If `arr[mid] < arr[mid + 1]`, move to the right half (`left = mid + 1`).
   - Else, move to the left half (`right = mid`).
3. The `left` pointer will point to the peak index at the end.

## Implementation (Python)
```python
from typing import List

def peakIndexInMountainArray(arr: List[int]) -> int:
    left, right = 0, len(arr) - 1
    while left < right:
        mid = (left + right) // 2
        if arr[mid] < arr[mid + 1]:
            left = mid + 1
        else:
            right = mid
    return left
```

## Complexity Analysis
- **Time Complexity:** `O(log n)`, as we are using binary search.
- **Space Complexity:** `O(1)`, since we are using constant extra space.

## Usage
You can run the function with any mountain array input as follows:
```python
arr = [0, 2, 1, 0]
print(peakIndexInMountainArray(arr))  # Output: 1
```

## Contributions
Feel free to fork this repository, improve the code, and submit pull requests!

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

Happy Coding! 🚀
