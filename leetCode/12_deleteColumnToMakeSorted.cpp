#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int row = strs.size();
        int column = strs[0].length();

        int count=0;
        for(int i=0; i<row; i++) {
            for(int j=1; j<column; j++) {
                if(strs[j][i]<strs[j-1][i]) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};