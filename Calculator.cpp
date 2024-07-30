#include<iostream>
using namespace std;
int main(){
    int choice,a,b;
    cout<<"Enter the numbers a and b:"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation to carry out:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Devision"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        int add;
        add=a+b;
        cout<<"Addition of following numbers is:"<<add;
        break;
        case 2:
        int diff;
        diff=a-b;
        cout<<"Differentiation of following numbers is:"<<diff;
        break;
        case 3:
        int pro;
        pro=a*b;
        cout<<"Product of following numbers is:"<<pro;
        break;
        case 4:
        int dev;
        dev=a/b;
        cout<<"Devision of following numbers is:"<<dev;
        break;
        default:
        cout<<"Operation does not exist!";
    }
    return 0;
}
/*
Enter the numbers a and b:
22
11
Enter the operation to carry out:
1.Addition
2.Subtraction
3.Multiplication
4.Devision
4
Devision of following numbers is:2*/
