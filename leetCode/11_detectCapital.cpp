#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool allCapital(string word) {
        for(int i=0; i<word.size(); i++) {
            if(word[i]<'A' || word[i]>'Z') {
                return false;
            }
        }
        return true;        
    }

    bool allSmall(string word) {
        for(int i=0; i<word.size(); i++) {
            if(word[i]<'a' || word[i]>'z') {
                return false;
            }
        }
        return true;        
    }

    bool detectCapitalUse(string word) {
        if(allCapital(word)==true || allSmall(word)==true || allSmall(word.substr(1))==true) {
            return true;
        }
        return false;
    }
};