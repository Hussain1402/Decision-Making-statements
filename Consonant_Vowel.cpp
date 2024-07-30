#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the character:";
    char ch;
    cin>>ch;
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        cout<<"VOWEL.";
    }
    else{
        cout<<"CONSONENT.";
    }
    return 0;
}

/*
Enter the character:h
CONSONENT.
Enter the character:A
VOWEL.*/
