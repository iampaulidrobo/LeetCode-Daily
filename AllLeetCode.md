
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




