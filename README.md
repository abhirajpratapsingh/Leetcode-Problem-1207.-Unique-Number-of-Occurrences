# Abhiraj Pratap Singh

---

# UPVOTE IT....

---
# Two Approach -

# Approach 1 ( Brute Force Approach )
<!-- Describe your approach to solving the problem. -->
- 
    1. Sort the input vector arr to group similar elements together.
    2. Traverse the sorted array and count occurrences of each unique element, storing the counts in a separate vector v.
    3. Sort the counts vector v.
    4. Check for duplicate occurrences in v.
    5. Return true if there are no duplicates; otherwise, return false.

---

# Code 1 ( Brute Force Approach )
```
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        int count=1;
        vector<int>v;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i=i+count)
        {
            count=1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                    count++;
            }
            v.push_back(count);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
                return false;
        }
        return true;
    }
};
```
---

# Complexity

- **Time complexity:** O(n log n) + O(n) + O(m log m), where n is the size of the input vector, and m is the number of unique elements in the input vector.

---


- **Space complexity: O(m),** where m is the number of unique elements in the input vector. This is due to the additional space required for the counts vector v.

---

![Screenshot (47).png](https://assets.leetcode.com/users/images/9173f54b-9c3f-46ef-a18f-9862ed85d8eb_1705494349.8258631.png)

---

# Approach 2 ( Using HashMap )

- 1. Use a map<int, int> (mp) to count the occurrences of each element in the input vector arr.
    2. Clear the original vector arr and populate it with the counts of occurrences.
    3. Clear the map and use it again to count the occurrences of counts in the new vector.
    4. Check if there are any duplicate occurrences in the counts of occurrences. Return false if duplicates are found; otherwise, return true.

---

# Code 2 ( Using HashMap )
```
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        arr.clear();
        for( auto it : mp )
            arr.push_back(it.second);
        mp.clear();
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        for( auto it : mp)
        {
            if(it.second>1)
                return false;
        }
        return true;
    }
};
```
----

# Complexity

- **Time complexity: O(n),** where n is the size of the input vector. The loop through the input vector and map operations contribute to this complexity.

---
- **Space complexity: O(n),** where n is the size of the input vector. This is due to the space used by the map mp and the modified vector arr.

----

# if you like the solution please UPVOTE it....

---

![discord-discordgifemoji.gif](https://assets.leetcode.com/users/images/d50daf2a-5c88-453b-95c4-7b3cd2c1f82c_1705494248.4241521.gif)
![fucking-die-redditor-stupid-cuck-funny-cat.gif](https://assets.leetcode.com/users/images/02467bbf-a4d9-46e5-90c5-31e448a94d1e_1705494256.3622043.gif)

---
