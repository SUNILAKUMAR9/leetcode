class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int s=0, e=str.size()-1;
        while(s <= e){
            if(str[s] != str[e])
                return false;
            s++;
            e--;
        }
        return true;
       
    }
};