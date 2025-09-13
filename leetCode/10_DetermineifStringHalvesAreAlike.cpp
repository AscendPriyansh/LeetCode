#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int leftCount=0;
        int rightCount=0;
        int i=0,j=n/2;

        while(i<n/2 && j<n)  {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
                i++;
                leftCount++;
            }
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U') {
                j++;
                rightCount++;
            }
        }

        if(leftCount==rightCount) {
            return true;
        }
        return false;
    }
};