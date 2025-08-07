/*
Name: Dhruv Jain
PRN: 24070123042
Batch: A2
*/
#include <iostream>
using namespace std;

int main(){
    int PRN;
    cout << "Enter last 5 digit of your PRN: ";
    cin >> PRN;
    cout << "Reversed PRN: ";
    do{
        int digit = PRN%10;
        cout << digit;
        PRN=PRN/10;
    }while(PRN !=0);
}
/*
Output:-
Enter last 5 digit of your PRN: 23035
Reversed PRN: 53032
*/
