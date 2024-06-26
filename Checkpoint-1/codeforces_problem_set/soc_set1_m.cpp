#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=b-1;i>=a;i--)
//bool isPrime(double n){ll t=n; if(t!=n){return false;} if (t <= 1){return false;}
//	for(ll i = 2; i <= sqrt(t); i++){if(t%i==0){return false;}}return true;
//}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll arr[3][3];
    fi(i,0,3){
        fi(j,0,3){
            cin>>arr[i][j];
        }
    }
    arr[1][1] = (arr[0][1]+arr[0][2]+arr[2][0]+arr[2][1]-arr[1][0]-arr[1][2])/2;
    arr[0][0] = arr[2][0]+arr[2][1] - arr[1][1];
    arr[2][2] = arr[0][0]+arr[0][1]-arr[1][2];
    fi(i,0,3){
        fi(j,0,3){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}