#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Integer =  ";
    cin>>n;
    int a=0;
    while(n>0){
        int b=n%10;;
        a=a*10+b;
        n/=10;
    }
    cout<<"Reversed Integer =  "<<a<<endl;

return 0;
}