#include <bits/stdc++.h>
#define ll long long

int main(){
    ll n, ans=1;
    std::cin>>n;
    for (ll i=0;i<n;i++){
        ans*=2;
        ans%=(int)(1e9+7);
    }
    std::cout<<ans;
    return 0;
}