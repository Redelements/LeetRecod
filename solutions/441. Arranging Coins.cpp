class Solution {
public:
    int arrangeCoins(int n) {
        int rowcomp = 0;
        int prog = 2;
        long int i = 1;
        while(i<=n){
                rowcomp++;
                i+=prog;
                prog++;
        }
        return rowcomp;
    }
};
