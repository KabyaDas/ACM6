#include<iostream>
using namespace std;

int main() {
    int t,n,x,total;
    cin>>t;
    while(t--){
        cin>>n;
        while(n!=0){
            x=n%10;
            n=n/10;
            if(x==4){
            total=total+1;
                x=0;
            }
       }
       cout<<total<<endl;
       total=0;
    }
    return 0;
}