#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        string result = "";
        for(int i=0; i<s.size()-1; i++) {
            if(result.back()==s[i]+32 || result.back()==s[i]-32) {
                result.pop_back();
            }
            else {
                result+=s[i];
            }
        }
        return result;
    }
};