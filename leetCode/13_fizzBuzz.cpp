#include<bits/stdc++.h>

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizzB(n);
        for(int i=0; i<n; i++) {
            if((i+1)%3==0) {
                fizzB[i]="Fizz";
                if((i+1)%5==0) {
                    fizzB[i]="FizzBuzz";
                }
            }
            else if((i+1)%5==0) {
                fizzB[i]="Buzz";
                continue;
            }
            else {
                fizzB[i]=to_string(i+1);
            }
        }
        return fizzB;
    }
};