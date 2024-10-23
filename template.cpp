#include<iostream>
using namespace std;

template <typename T, typename T2>
float avgNum(T a, T2 b){
    float avg = (a+b)/2;
    return avg;
}
template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;

}

int main (){
    float a;
    a=avgNum(2.25,4.95);
    cout << a << endl;
    int x = 5;
    int y =9;
    swapp(x,y);
    cout << x << endl << y;
}

