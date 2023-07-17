class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> >vec;
        for(int i=0;i<numRows;i++){
            vector<int> v;
            for(int j=0;j<=i;j++){
                if(i==j or j==0)
                    v.push_back(1);
                else
                    v.push_back(vec[i-1][j-1] + vec[i-1][j]);
            }
            vec.push_back(v);
        }
        return vec;
    }
};