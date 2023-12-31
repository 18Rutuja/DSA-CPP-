#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
         
        for(int i = 0; i< s.size(); i++){
            char ch = s[i];
            if(ch== '(' || ch== '{' || ch == '['){
                st.push(ch);
                
        }else if(ch == ')' && !st.empty() && st.top() == '('){
                st.pop();
                
            }else if(ch == '}' && !st.empty() && st.top() == '{'){
                st.pop();
                
            }else if(ch == ']' && !st.empty() && st.top() == '['){
                st.pop();
         }else{
                return false;
        }
      }
        return st.empty();
    }
    
};
int main() {
    Solution solution;
    string inputString;

    cout << "Enter a string with parentheses, curly braces, and square brackets: ";
    cin >> inputString;
    
    if (solution.isValid(inputString)) {
        cout << "valid parenthsis\n";
    } else {
        cout << "not valid parenthsis\n";
    }
    
    return 0;
}