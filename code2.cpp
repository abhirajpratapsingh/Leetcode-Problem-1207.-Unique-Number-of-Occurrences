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
