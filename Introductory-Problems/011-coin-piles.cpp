#include <bits/stdc++.h>
#define ll long long

int main(){
    ll t;
    std::cin>>t;
    for(ll i=0;i<t;i++){
        ll a,b;
        std::cin>>a>>b;
        if((a+b)%3==0){
            if(a>2*b || b>a*2){
                std::cout<<"NO"<<'\n';
            }
            else{
                std::cout<<"YES"<<'\n';
            }
        }
        else{
            std::cout<<"NO"<<'\n';
        }
    }
    return 0;
}