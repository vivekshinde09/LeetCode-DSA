# Length of Last Word

## Problem

Given a string `s`, return the length of the last word. A word is a sequence of non-space characters.

### Example

```text
Input:  "Hello World"
Output: 5
```

## Approach

* Traverse the string from right to left.
* Skip trailing spaces.
* Count characters until a space is found.

## C++ Solution

```cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ')
                count++;
            else if (count > 0)
                break;
        }

        return count;
    }
};
```

## Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`
