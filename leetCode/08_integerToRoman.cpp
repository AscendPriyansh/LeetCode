#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<int> number = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> roman = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string answer;

        //1994
        for(int i=0; i<13; i++) {
            if(num==0) {
                break;
            }

            int times=num/number[i];

            while(times--) {
                answer+=roman[i];
            }
            num%=number[i];    
        }    
        return answer;
    }
};