class Solution {
public:
    bool isPalindrome(string s) {
    //Create a forloop that goes through 2 pointers
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { 
        //
        while (!isalnum(s[i]) && i < j) i++; 
        while (!isalnum(s[j])  && i < j) j--; 
        if (toupper(s[i]) != toupper(s[j])) return false; 
    }
    return true;
}
};

//O(n) time