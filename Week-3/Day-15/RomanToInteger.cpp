class Solution {
public:
    int romanToInt(string s) {
       int num=0;
        int a[s.length()];
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='I') a[i]=1;
            else if(s[i]=='V') a[i]=5;
            else if(s[i]=='X') a[i]=10;
            else if(s[i]=='L') a[i]=50;
            else if(s[i]=='C') a[i]=100;
            else if(s[i]=='D') a[i]=500;
            else if(s[i]=='M') a[i]=1000;
        }
        int max=0;
        for(int i=s.length()-1;i>=0;i--){
            if(a[i]>=max){
                num+=a[i];
            max=a[i];}
            else
                num-=a[i];
        }
        
            return num;
        }
    
};