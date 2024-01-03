#include <iostream>
#define ll long long

int main(){
    ll n, a, s=0;
    std::cin>>n>>a;
    for(ll i=1;i<n;i++){
        ll b;
        std::cin>>b;
        if (b<a){
            s+=(a-b);
            a=b+(a-b);
        }
        else{
            a=b;
        }
    }
    std::cout<<s;

    return 0;
}
