#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int checkdig(char ch){
    if(ch>='0' && ch<='9')
        return 1;
    return 0;
}

ll inverter_ascii(char ch){
    if(checkdig(ch))return (ll)(ch-'0');
    else return ((ll)(ch-'A')+10);
}

ll bigascii(string uu){
    char c='0';
    for(ll i=0;i<(int)(uu.size());i++){
        if(uu[i]>=c)c=uu[i];
    }
    
    
    ll v=0;
    if(checkdig(c)){
        v= (ll)(c-'0');
        return ++v;
    }
    else{
        v=(int)(c-'A');
        return v+11;
    }
}

int main(){
    string str;
    vector<string> bid;
    while(cin>>str){
        bid.push_back(str);
    }
    ll minimum=INT_MAX;
    for(int i=0;i<(int)(bid.size());i++){
        ll base=bigascii(bid[i]);
        ll result=0,multiplier=1;
        str=bid[i];
        for(ll j=(int)(str.size())-1; j>=0; j--){
            result += multiplier * inverter_ascii(str[j]);
            multiplier *= base;
        }
        if(minimum >= result)
           minimum = result;
    }
    
    cout << minimum;
    
    return 0;
}