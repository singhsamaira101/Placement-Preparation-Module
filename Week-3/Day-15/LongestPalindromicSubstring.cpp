class Solution {
public:
    bool isPalindrome(string st)
    {
        string rev = st;
        reverse(st.begin(), st.end());
        if(st==rev)
            return true;
        return false;
    }
    string longestPalindrome(string s) {
        vector<string> substrings;

        for(int i=0; i<s.size(); i++)
        {
            for(int j=i; j<s.size(); j++)
            {
                for(int k=j; k<s.size(); k++)
                    substrings.push_back(s.substr(j, k-j+1));
            }
        }
        int len = INT_MIN;
        string ans = "";
        for(int i=0; i<substrings.size(); i++)
        {
            if(isPalindrome(substrings[i]))
            {
                if(substrings[i].size() > len){
                    len = substrings[i].size();
                    ans = substrings[i];
                }
            }
        }
        return ans;
    }
};