#include <bits/stdc++.h>
#define ll long long

std::vector<std::string> elem(std::vector<std::string> v);

int main(){
    ll n;
    std::cin>>n;
    ll s = pow(2, n);
    std::map<int, std::vector<std::string>> m;
    m[0]={"0"};
    m[1]={"0","1"};
    for(ll i=2;i<=n;i++){
        m[i]=elem(m[i-1]);
    }
    for(ll i=0;i<s;i++){
        std::cout<<m[n][i]<<'\n';
    }
    return 0;
}

std::vector<std::string> elem(std::vector<std::string> v){
    std::vector<std::string> q;
    ll r = v.size();
    for(ll i=0;i<r;i++){
        q.push_back("0"+v[i]);
    }
    for(ll j=r-1;j>=0;j--){
        q.push_back("1"+v[j]);
    }
    return q;
}


