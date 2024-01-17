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
