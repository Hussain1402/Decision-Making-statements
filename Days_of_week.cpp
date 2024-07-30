#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter Choice:\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n7.Sunday"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"It is Monday.";
        break;
        case 2:
        cout<<"It is Tuesday.";
        break;
        case 3:
        cout<<"It is Wednesday.";
        break;
        case 4:
        cout<<"It is Thursday.";
        break;
        case 5:
        cout<<"It is Friday.";
        break;
        case 6:
        cout<<"It is Saturday.";
        break;
        case 7:
        cout<<"It is Sunday.";
        break;
        default:
        cout<<"Day does not exist!";
    }
    return 0;
}
/*
Enter Choice:
1.Monday
2.Tuesday
3.Wednesday
4.Thursday
5.Friday
6.Saturday
7.Sunday
8
Day does not exist!

  
Enter Choice:
1.Monday
2.Tuesday
3.Wednesday
4.Thursday
5.Friday
6.Saturday
7.Sunday
7
It is Sunday.*/
