using namespace std;

#include <stack>
#include <iostream>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack; //char stack
        for(auto i : s) { //for each letter in string
            if(i == '('  || i == '[' || i == '{') //if i is a opening bracket push
                stack.push(i);
            else {
                if(stack.empty() || (stack.top() == '(' && i != ')') || (stack.top() == '{' && i != '}') || (stack.top() == '[' && i != ']'))
                    return false;
                stack.pop();  
            }
                  
        }
       
        return stack.empty();
        
    }
};
/*
    Time: O(n)
    Space: O(n)
*/