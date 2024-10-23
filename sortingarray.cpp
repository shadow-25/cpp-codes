#include <iostream>
using namespace std;
/// sorting in array 
void selection(int array[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int tem=array[i];
                array[i]=array[j];
                array[j]=tem;
            }
        }
    }
}// min at starting

void bubble(int array[],int n){
    int count=1;
    while(count<n){
        for(int i=0;i<n-count;i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        count++;
    }
}// max at ending (adjecent value check)

void insertion(int array[], int n){
    for(int i = 1; i < n; i++){
    int current = array[i];
    int j = i - 1;
    while(array[j] > current && j >= 0){
        array[j + 1] = array[j];
        j--;
    }
    array[j + 1] = current;
}

}


int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    insertion(array,n);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    // cout<<array; address of array
return 0;
}