#include <iostream>
#define ll long long

int main(){
    ll n, sum = 0;
    std::cin>>n;
    for(ll i=1; i<n;i++){
        ll a;
        std::cin>>a;
        sum+=a;
    }
    std::cout<<n*(n+1)/2-sum;
    return 0;
}
