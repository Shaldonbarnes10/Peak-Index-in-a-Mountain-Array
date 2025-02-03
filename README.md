# Peak Index in a Mountain Array

## Problem Statement
You are given an integer **mountain array** `arr` of length `n`, where the values increase to a **peak element** and then decrease. Your task is to find and return the index of the **peak element** in **O(log(n))** time complexity.

This problem is available on **LeetCode**: [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)

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

## Implementation (C++)
```cpp
#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int main() {
    vector<int> arr = {0, 2, 1, 0};
    cout << "Peak index: " << peakIndexInMountainArray(arr) << endl;
    return 0;
}
```

## Usage
You can run the function with any mountain array input as follows:

### C++:
```cpp
vector<int> arr = {0, 2, 1, 0};
cout << peakIndexInMountainArray(arr);  // Output: 1
```

## Contributions
Feel free to fork this repository, improve the code, and submit pull requests!

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

Happy Coding! 🚀

