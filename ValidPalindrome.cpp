class Solution {
public:
    bool isPalindrome(string s) {
        int st[200000];
        int count = 0;
        for(char i: s){
            int vt = (int) i;
            if( vt >= 65 && vt <=90) {
                
                st[count] = vt;
                count++;
            }
            else if (vt >= 97 && vt <= 122){
                st[count] = vt - 32;
                count++;
            }
            else if(vt >= 48 && vt <= 57){
                st[count] = vt - 48;
                count++;
            }
        }
        int check = 0; // 0: true, 1 false;
        for(int i = 0; i < count; i++){
            if(st[i] != st[count - i - 1]){
                return false;
            }
        }
        return true;
    }
};