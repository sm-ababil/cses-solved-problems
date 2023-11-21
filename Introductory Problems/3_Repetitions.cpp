#include <iostream>
#define ll long long

int main(){
    std::string seq;
    std::getline(std::cin, seq);
    ll m=1;
    ll n=1;

    for(ll i=1;i<seq.size();i++){
        char a=seq[i];
        char b=seq[i-1];
        if(a==b){
            n+=1;
            if(n>m){
                m=n;
            }
        }
        else{
            n=1;
        }
    }
    std::cout<<m;

    return 0;
}




//MEETHOD 2

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    string s;
    cin>>s;
    ll maxim = 0, c = 0;
    char l = 'A';
    for (char d:s){
        if (d==l){
            c++;
            maxim = max(maxim,c);
        }
        else{
            l=d;
            c=1;
        }
    }
 
    cout<<maxim;
 
    return 0;
 
}
