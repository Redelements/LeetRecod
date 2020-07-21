class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int sizej = J.size();
        int sizes = S.size();
        int count = 0;
        for(int i =0;i<sizes;i++){
            for(int j = 0;j<sizej;j++){
                if(J[j]==S[i])
                    count++;
            }
        }
        return count;
    }
};