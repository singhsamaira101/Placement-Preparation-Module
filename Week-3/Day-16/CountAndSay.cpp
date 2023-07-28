class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";

        string ans = "11";

        for(int i=3; i<=n ;i++)
        {
            string temp = "";
            ans = ans + "$";
            int count = 1;

            for(int j=1; j<ans.length(); j++)
            {
                if(ans[j] == ans[j-1])
                    count++;
                else {
                    temp = temp + to_string(count);
                    temp = temp + ans[j-1];
                    count = 1;
                }
            }
            ans = temp;
        }
        return ans;
    }
};