#include <iostream>
using namespace std;
int main(){
    int n,a,b,i,r,sum=0;
    cin>>n;
    if(n%2!=0){
        a = n/2;
        b = (n/2)+1;
    }
    else{
        a = (n/2)+1;
        b = (n/2)-1;
    }
    while(a>0){
        r = a%10;
        sum=sum+r;
        a=a/10;
    }
    while(b>0){
        r = b%10;
        sum=sum+r;
        b=b/10;
    }
    cout<<sum<<endl;
    return 0;
}
