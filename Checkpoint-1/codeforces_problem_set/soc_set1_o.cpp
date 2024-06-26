#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    fi(i,0,n){  
        cin>>arr[i];
    } 
    if(n<3){
        cout<<n<<"\n";
        return 0;
    } 
    ll len = 2;
    ll temp = 2; 
    fi(i,2,n){
        if(arr[i]==(arr[i-1]+arr[i-2])){
            temp++;  
        }  
        else{
            if(temp>len){
                len = temp;
            }  
            temp = 2; 
        }  
    }
    if(temp>len){
        len = temp;
    } 
    cout<<len<<"\n";
    return 0;
}  