#include<iostream>
using namespace std;

void compare(int a, int b, int c)
{
    cout<<"enter the 1st number  ";
    cin>>a;
    cout<<"enter the 2nd number  ";
    cin>>b;
    cout<<"enter the 3rd number  ";
    cin>>c;

    if (a>c){
        if (a>b){
            cout<<"largest number is " << a;
        }

        else {
            cout<<"largest number is " << b;
        }
    }
    else {
        cout<<"largest number is "<< c;
    }
}


int main(){
    int a ,b ,c;
    compare(a,b,c);
    return 0;
}
