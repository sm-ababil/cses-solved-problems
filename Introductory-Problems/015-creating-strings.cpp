#include<bits/stdc++.h>
#define ll long long

int main(){
    std::string s;
    std::cin>>s;
    sort(s.begin(),s.end());
    std::vector<std::string> permutaions;
    
    do{
        permutaions.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    std::cout<<permutaions.size()<<"\n";
    for(auto x:permutaions){
        std::cout<<x<<"\n";
    }

    return 0;
}