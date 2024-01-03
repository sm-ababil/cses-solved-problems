#include <bits/stdc++.h>
#define ll long long

int main(){
    ll a;
    std::cin>>a;
    for (ll i=1;i<=a;i++){
        ll b=(((i*i)*(i*i-1))/2)-(4*(i-1)*(i-2));
        std::cout<<b<<'\n';
    }
    return 0;
}