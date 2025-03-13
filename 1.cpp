#include<bits/stdc++.h>
using namespace std;
//program converting integer -> Binary
string func1(int x){
    string s;
    while(x!=0){
        if(x&1) s+="1";
        else s+="0";
        x=x>>1;
    }
    reverse(s.begin(),s.end());
    return s;
}

string func2(int x){
    string s;
    while(x!=0){
        if(x%2) s+="1";
        else s+="0";
        x/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    //test case
    cout<<func1(7)<<"\n";
    cout<<func2(7);
    return 0;
}