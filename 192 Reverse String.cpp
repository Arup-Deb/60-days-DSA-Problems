class Solution {
public:
    void reverseString(vector<char>& s) {
        //reverse(s.begin(),s.end());
        int i=0,n=s.size()-1;
        while(i<=n)
        {
            swap(s[i],s[n]);
            i++;
            n--;
        }
    }
};