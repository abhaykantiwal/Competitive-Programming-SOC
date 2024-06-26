#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
bool isPrime(double n){ll t=n; if(t!=n){return false;} if (t <= 1){return false;}
    for(ll i = 2; i <= sqrt(t); i++){if(t%i==0){return false;}}return true;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll hh,mm;
        char colon;
        cin>>hh>>colon>>mm;
        if(hh==0){ 
            if(mm<10){
                cout<<12<<":0"<<mm<<" AM"<<endl;
                continue;
            } 
            else{
                cout<<12<<":"<<mm<<" AM"<<endl;
                continue;
            }
        }
        if(hh<10){
            if(mm<10){
                cout<<0<<hh<<":"<<0<<mm<<" AM"<<endl;
                continue;
            }
            else{
                cout<<0<<hh<<":"<<mm<<" AM"<<endl;
                continue;
            }
        }
        if(hh>=10&&hh<12){
            if(mm<10){
                cout<<hh<<":0"<<mm<<" AM"<<endl;
                continue;
            }
            else{
                cout<<hh<<":"<<mm<<" AM"<<endl;
                continue;
            }
        }
        if(hh==12){
            if(mm<10){
                cout<<hh<<":0"<<mm<<" PM"<<endl;
                continue;
            }
            else{
                cout<<hh<<":"<<mm<<" PM"<<endl;
                continue;
            }
        }
        if(hh>12&&hh<22){
            if(mm<10){ 
                cout<<0<<(hh-12)<<":"<<0<<mm<<" PM"<<endl;
                continue; 
            }
            else{
                cout<<0<<(hh-12)<<":"<<mm<<" PM"<<endl;
                continue;
            }
        }
        if(hh==22||hh==23){
            if(mm<10){
                cout<<(hh-12)<<":0"<<mm<<" PM"<<endl;
                continue;
            }
            else{
                cout<<(hh-12)<<":"<<mm<<" PM"<<endl;
                continue; 
            } 
        }
    } 
    return 0;
}