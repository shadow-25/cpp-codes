#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*int count=1;
    for (int i=1;i<=n;i++){
        for (int j = 1; j <=i; j++)
        {
            cout<<count<<" ";
            if(count==1){
                count--;
            }
            else{
                count++;
            }
        }
        if(i+1%2==0){
            count=0;
        }
        else{
            count=1;
        }
        cout<<endl;
    }*/
     for (int i=1;i<=n;i++){
        for (int j = 1; j <=i; j++)
        {
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1 
*/