#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enetr the three numbers:";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is largest.";
        }
        else{
            cout<<"c is largest.";
        }
    }
    else if(b>a){
        if(b>c){
            cout<<"b is largest.";
        }
        else{
            cout<<"c is largest.";
        }
    }
    else{
        cout<<"c is largest.";
    }
    return 0;
}

/*Enetr the three numbers:69
74
21
b is largest.*/
