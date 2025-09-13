#include<bits/stdc++.h>
using namespace std;

int num(string s) {
    vector<int> lower(26,0);
    vector<int> upper(26,0);
    int ans=0;

    for(int i=0; i<s.length(); i++) {
        if(s[i]>='a' && s[i]<='z') {
            lower[s[i]-'a']++;
        }
        else {
            upper[s[i]-'A']++;
        }
    }

    int index=0;
    for(int i=0; i<26; i++) {
        if(lower[i]%2==0) {
            ans+=lower[i];
        }
        else {
            ans+=lower[i]-1;
            index=1;
        }
    }

    for(int i=0; i<26; i++) {
        if(upper[i]%2==0) {
            ans+=upper[i];
        }
        else {
            ans+=upper[i]-1;
            index=1;
        }
    }

    return ans+index;

}

int main() {
    string s = "abccccdd";

    int result = num(s);
    cout<<result;

    return 0;
}
