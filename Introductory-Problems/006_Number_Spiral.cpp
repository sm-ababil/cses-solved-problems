#include <iostream>
#define ll long long

int main(){
    ll t;
    std::cin>>t;
    for(ll i=0;i<t;i++){
        ll y,x;
        std::cin>>y>>x;
        if (y>x){
            if(y%2==0){
               std::cout<<(y*y)-(x-1)<<'\n'; 
            }
            else{
                std::cout<<((y-1)*(y-1)+1)+(x-1)<<'\n';
            }
        }
        else{
            if(x%2==0){
                std::cout<<((x-1)*(x-1)+1)+(y-1)<<'\n';

            }
            else{
                std::cout<<(x*x)-(y-1)<<'\n';
            }
        }
    }
    return 0;
}