#include<iostream>
using namespace std;

class rectangle{
    public:
    int length ;
    int breadth;

    //construstors 
    rectangle(){ //constructor without parameters or default constructor
        length =0;
        breadth =0;
    }

    rectangle (int x , int y){ // parameterised construstor 
        length = x;
        breadth = y;
    }

    rectangle (rectangle& r){ //copy constructor ----- copy existing object to new object
        length = r.length;
        breadth = r.breadth;

    }

    ~rectangle(){ //destructor
        cout<< "Destructor in action"<<endl;
    }
};

int main(){

    rectangle r1;
    cout<<r1.length<<" "<<r1.breadth<<endl;

    rectangle r2(4,5);
    cout<<r2.length <<" "<<r2.breadth <<endl;

    rectangle* r2_3= new rectangle(4,9);
    cout<<r2_3->length<<" "<<r2_3->breadth<<endl;
    delete r2_3;

    rectangle r3 = r2;
    cout<<r3.length<<" "<<r3.breadth<<endl;




    return 0;
}