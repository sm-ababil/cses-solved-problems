#include <bits/stdc++.h>
#define ll long long

int main(){
    ll n, a=0;
    std::cin>>n;
    for(ll i=5;i<=n;i*=5){
        a+=n/i;
    }
    std::cout<<a;
    return 0;
}