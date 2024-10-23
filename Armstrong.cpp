#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int o=n;
    int s=0;
    int a=n;
    int b=0;
    while(a>0){
        a=a/10;
        b++;

    }

    while(n>0){
        int d=(n%10);
        s+=pow(d,b);
        n=n/10;
    }

if (s==o){
    cout<<"Its a armstrong number"<<endl;
}
else{
    cout<<"Its not a armsstrong number"<<endl;
}
return 0;
}