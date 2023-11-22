#include <iostream>
#define ll long long

int main(){
    ll n;
    std::cin>>n;
    if (n==1 || n>3){
        for (ll i=2;i<n+1;i+=2){
            std::cout<<i<<" ";
        }
        for (ll i=1;i<n+1;i+=2){
            std::cout<<i<<" ";
        }
    }
    else{
        std::cout<<"NO SOLUTION";
    }
    return 0;
}