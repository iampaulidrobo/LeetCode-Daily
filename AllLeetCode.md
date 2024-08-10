
1.Reverse Integer-pop from the original number and push to the temperory number.

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/reverse-integer/description/) 


2.Two Sum-one by one store the elements and at the same time search of complement(target-currentElement)(return {numMap[complement], i})

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/two-sum/description/) 

3.Merge Sorted Array-secure first n elements from nums1,put next m elements of nums2 in nums1.Sort all.

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/merge-sorted-array/description/) 

4.Contains Duplicate-first sort.iterate and compare consecutives

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/contains-duplicate/description/) 

5.Contains Duplicate II-store in unordered_map<int,int> mp[nums[i]] = i; and then mp.count(nums[j]) to check

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/contains-duplicate-ii/description/) 

6.Binary Search-put start and end position.Select a mid position and compare with key.Choose the first part if less then else choose the second part.Keep iterating

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/binary-search/description/) 

7.Relative Ranks-use  priority_queue<pair<int, int>> heap; to store score and index.Iterate and asssign wordings for each.

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/relative-ranks/description/) 

8.Valid Triangle Number-sort the array and then use binary/linear search for C.A+B>=C

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/valid-triangle-number/description/) 

9.Russian Doll Envelopes-Both height and length should be greater.Hence customise sorting  

    static bool comp(vector<int> &envelop, vector<int> &successive_envelop){
        if(envelop[0]==successive_envelop[0]){
            return envelop[1]>successive_envelop[1];
        }
        return envelop[0]<successive_envelop[0];
    }

The first step is to sort the envelopes based on their widths in ascending order. This is done using a custom comparator function in the sort function.
    In case of a tie in widths, the envelopes are sorted in descending order of heights. This ensures that when comparing widths, if two envelopes have the same width, the one with greater height comes first.

![Static Badge](https://img.shields.io/badge/Code_critical-blue?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/russian-doll-envelopes/description/) 

10.Car Fleet-We constant the time.vector up how much timeeach car will take to reach target.Now settle them up based upon their position(Low to high).
if car at high position have time equal or more than car at low position then and only then low positioned car can chase it and can form fleet.

A two step sorting.We sorted first all cars with high position and less time.low position and less time or high position high time seems same scenario(chase case).low position and high time are last.

![Static Badge](https://img.shields.io/badge/Code_critical-blue?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/car-fleet/description/) 


11.Number of Atoms-read character,find its one letter or more than one letter;find its digits;store all this in stack and if character ends with parenthesis than traverse in stack to update the digits for each formula element


[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/number-of-atoms/description/) 

12.Palindrome Number-Find the palindrom( long long reversed{0};,reversed=reversed*10 + single_digit;). || convert to string to remove unnecessary computation.
       


[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/palindrome-number/description/) 

13.Reverse String-iterate till s.size()/2.swap(s[i],s[s.size()-i-1]);

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/reverse-string/description/) 

14.Reverse Integer


[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/reverse-integer/description/) 

15.First Unique Character in a String-
vector<int> all_alphabet(26);
//store frequency of each character of s
for (auto i : s) all_alphabet[i - 'a']++;


[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/first-unique-character-in-a-string/description/) 

16.Reverse Integer

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/reverse-integer/description/) 

17.Majority Element-Sort and return the element at position n/2.

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/majority-element/description/) 

18.Ransom Note-store (auto i : s) magazine_alphabet[i - 'a']++; and check if ramson can be utilised.

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/ransom-note/description/) 

19.Element Appearing More Than 25% In Sorted Array-Compare element at position i(0) and i+n/4(3) till n-n/4(12-3=9);

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/) 

20.Roman to Integer-unordered_map<char, int> m;

        if(m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans += m[s[i]];
            }

![Static Badge](https://img.shields.io/badge/Code_critical-blue?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/roman-to-integer/description/) 

21.Count Primes-Sieve of Eratosthenes

    int countPrimes(int n) {
            bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p < n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {

            for (int i = p * p; i < n; i += p)
                prime[i] = false;
        }
    }
    int result{0};
     for (int p = 2; p < n; p++)
        if (prime[p])
            result++;
    
    return result;
    }
![Static Badge](https://img.shields.io/badge/Code_critical-blue?style=plastic&logoSize=auto)
![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/count-primes/description/) 

22.Ugly Number-Number should totally divide 2,3 and 5.if dividing than get new eg if (n % 5 == 0) n /= 5;

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/ugly-number/description/) 

23.Add Digits-If the number divides 9,its digit sum is 9 else its digit sum is remainder.

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/add-digits/description/) 

24.Reverse Linked List-use current and previous.cut current->next and save it temp.put current->next to previous.update previous to current,update current to temp.

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/reverse-linked-list/description/) 

25.Divide Two Integers-consider
// a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;

    // The result is 00001010
    cout << "a<<1 = " << (a << 1) << endl;

    // The result is 00010010
    cout << "b<<1 = " << (b << 1) << endl;
We first see if divisor==divident,than we check for sign ,than we make both of them positive,than we perform divison using shift operator.
    while (n >= d) {
            int count = 0;
            while (n > (d << (count + 1)))
                count++;
            n -= d << count;
            ans += 1 << count;
        }

        // Handle overflow case
        if (ans == (1 << 31) && sign == 1) return INT_MAX;
![Static Badge](https://img.shields.io/badge/Code_critical-blue?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/divide-two-integers/description/) 

26.Single Number-XOR of same numbers is 1.

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/single-number/description/) 

27.Rotate String-Check whether string A+A contains string B.

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/rotate-string/description/) 

28.Valid Parentheses-push the parenthesis if the stack is empty or any open parenthesis,if s[i] is closed parenthesis drop the stack top element if its same type open parenthesis.

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
![Static Badge](https://img.shields.io/badge/Code_critical-blue?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/valid-parentheses/description/) 

29.Power of Two-if n%2==0 than recursive call for n/2 till n becomes less than 2.

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/power-of-two/description/) 

30.Power of Three-if n%3==0 than recursive call for n/3 till n becomes less than 3.

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/power-of-three/description/) 

31.Power of Four-if n%4==0 than recursive call for n/4 till n becomes less than 4.

![Static Badge](https://img.shields.io/badge/Thought_critical-yellow?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/power-of-four/description/) 

32.Excel Sheet Column Number-Consider ABCD->
res=res*26 +1;

res=1*26 +2;

res=28*26+3;

res=(28*26+3)*26 +4;

![Static Badge](https://img.shields.io/badge/Code_critical-blue?style=plastic&logoSize=auto)
[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/excel-sheet-column-number/description/) 

33.Sqrt(x)-using binary search to check where the sqroot of numbers lies.

[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/sqrtx/description/) 

34.Determine if String Halves Are Alike-store count of vowels in two variables and compare after the traversal.



[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/determine-if-string-halves-are-alike/description/) 

35.Pow(x, n)

    double pow(double a, int b) {

    //base case
    if( b == 0 )
        return 1;

    if(b == 1)
        return a;

    //RECURSIVE CALL
    int ans = pow(a, b/2);

    //if b is even
    if(b%2 == 0) {
        return ans * ans;
    }
    else {
        //if b is odd
        return a * ans * ans;
    }
    }


[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/powx-n/description/) 

36.Remove Digit From Number to Maximize Result-Search the digit in number.Store temp for number.temp.erase(temp.begin() + i); and store max of result.
**If string is large,the number is large.**



[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/description/) 

37.Smallest Even Multiple-if number doesn't divides 2 than answer is twice of number,else the number.


[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/smallest-even-multiple/description/) 

38.Remove All Adjacent Duplicates In String



[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/) 

39.Number of Common Factors



[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/number-of-common-factors/description/) 

40.


[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/sqrtx/description/) 

41.


[![Leetcode](https://camo.githubusercontent.com/5165fca7fe088ad43f15e5de8531a550a0bfa862e500a329c8141e8eaa656cc1/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f4c656574636f64652d3030303030303f7374796c653d666f722d7468652d6261646765266c6f676f3d4c656574436f6465266c6f676f436f6c6f723d23643136633036)](https://leetcode.com/problems/sqrtx/description/) 
