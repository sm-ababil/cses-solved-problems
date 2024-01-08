#include <bits/stdc++.h>
#define ll long long

int main(){
    std::string a;
    std::getline(std::cin, a);
    std::map<char, std::string> m;
    for(char x:a){
        if(m.count(x)){
            m[x]+=x;
        }
        else{
            m[x]=x;
        }
    }

    std::string odd="", f="", l="";
    for(const auto& p:m){
        ll d = p.second.length();
        if(d%2==1 && odd!=""){
            std::cout<<"NO SOLUTION";
            return 0;
        }
        else if(d%2==1){
            odd+=p.second;
        }
        else{
            f+=p.second.substr(0,d/2);
            l=p.second.substr(0,d/2)+l;
        }
    }
    std::cout<<f+odd+l<<'\n';

    return 0;
}