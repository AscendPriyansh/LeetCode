#include<bits/stdc++.h>
using namespace std;

string defangIPaddr(string address) {
    string ans;
    for(int i=0; i<address.size(); i++) {
        if(address[i]=='.') {
            ans+="[.]";
        }
        else {
            ans+=address[i];
        }
    }
    return ans;
}

int main() {
    string address = "1.1.1.1";

    string result = defangIPaddr(address);
    cout<<result;

    return 0;
}
