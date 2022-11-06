class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        vector<int> map1(256, -1);
        vector<int> map2(256, -1);

        int length = s.size();

        for (int i = 0; i < length; i++)
        {
            if (map1[s[i]] != map2[t[i]])
            {
                return false;
            }
            // s[i] and t[i] should map to a same digits.
            map1[s[i]] = i;
            map2[t[i]] = i;
        }
        return true;
    }
};