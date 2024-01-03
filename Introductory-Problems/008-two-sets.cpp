#include <bits/stdc++.h>
#define ll long long

int main(){
    ll n;
    std::cin>>n;
    if ((n*(n+1))%4==0){
        ll s=(n*(n+1))/4;
        ll a=0, b=0, t=0;
        std::string x, y;
        std::cout<<"YES"<<'\n';
        for(ll i=n;i>=1;i--){
            if(t+i<=s){
                x+=std::to_string(i)+" ";
                t+=i;
                a+=1;
            }
            else{
                y+=std::to_string(i)+" ";
                b+=1;
            }
        }
        std::cout<<a<<'\n'<<x<<'\n'<<b<<'\n'<<y<<'\n';
    }
    else{
        std::cout<<"NO"<<'\n';
    }

    return 0;
}