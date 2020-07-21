class Solution {
public:
    int balancedStringSplit(string s) {
        int i,cL=0,cR=0,c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='L')
                cL++;
            else 
                cR++;
            if(cL==cR)
                c++;
        }
    return c;
    }
};
