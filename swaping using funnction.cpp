#include<iostream>
using namespace std;

void swap(int a , int b){

    int c;

    cout<<"a = ";
    cin>> a;
    cout<<"b = ";
    cin>>b;

    c=b;
    b=a;
    a=c;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;

}

int main(){

    int a , b;
    swap(a,b);
    return 0;

}
