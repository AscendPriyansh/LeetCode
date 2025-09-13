#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //aaaabbb
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        
        int i=0;
        while(i<n) {
            char currChar=chars[i];
            int count=0;
            while(i<n && chars[i]==currChar) {
                count++;
                i++;
            }
            chars[index]=currChar;
            index++;
            if(count>1) {
                string countStr = to_string(count);
                for(char st : countStr) {
                    chars[index]=st;
                    index++;
                }
            }

            return index;
        }
    }
};