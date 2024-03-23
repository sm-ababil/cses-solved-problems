#include <bits/stdc++.h>
#define ll long long

void tower_of_hanoi(ll n, ll s, ll d, ll a);

int main(){
    ll n;
    std::cin>>n;
    std::cout<<std::pow(2,n)-1<<"\n";
    tower_of_hanoi(n,1,3,2);
    return 0;
}

void tower_of_hanoi(ll n, ll s, ll d, ll a){
    if (n == 0){
        return;
    }
    tower_of_hanoi(n-1, s, a, d);
    std::cout<<s<<" "<<d<<"\n";
    tower_of_hanoi(n-1,a,d,s);
}