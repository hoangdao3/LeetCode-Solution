#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    int isValid(string s) {
        stack<char> st; 
        for (char c : s) { 
            if (c == '(' || c == '{' || c == '[') { 
                st.push(c); 
            } else { 
                if (st.empty() || 
                    (c == ')' && st.top() != '(') || 
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop(); 
            }
        }
        return st.empty(); 
    }
};
int main(){
    Solution solution;
    string s;
    cin >> s;
    cout << solution.isValid(s);
}