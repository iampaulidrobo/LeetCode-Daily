class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int a_count = 0;

        // First pass: count the number of 'a's
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') a_count++;
        }

        int b_count = 0;
        int min_deletions = n;

        // Second pass: iterate through the string to compute minimum deletions
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') a_count--;
            min_deletions = min(min_deletions, a_count + b_count);
            if (s[i] == 'b') b_count++;
        }

        return min_deletions;
    }
};

// class Solution {
// public:
//     int minimumDeletions(string s) {
//         int n = s.length();
//         stack<char> charStack;
//         int deleteCount = 0;

//         // Iterate through each character in the string
//         for (int i = 0; i < n; i++) {
//             // If stack is not empty, top of stack is 'b',
//             // and current char is 'a'
//             if (!charStack.empty() && charStack.top() == 'b' && s[i] == 'a') {
//                 charStack.pop();  // Remove 'b' from stack
//                 deleteCount++;    // Increment deletion count
//             } else {
//                 charStack.push(s[i]);  // Push current character onto stack
//             }
//         }

//         return deleteCount;
//     }
// };