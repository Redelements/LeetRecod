class Solution {
public:
    int calculateTime(string keyboard, string word) {
        vector <int> vec(26);
        for(int i =0; i<26;i++){
            vec[keyboard[i]- 'a']=i;
        }
        int re = vec[word[0] -'a'];
        for(int j = 1; j <word.size();j++){
            re += abs(vec[word[j]-'a']-vec[word[j-1]-'a']);
            }
        return re;
    }
};