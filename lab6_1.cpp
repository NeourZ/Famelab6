#include<iostream>
using namespace std;

int main(){
    int x = 1 ;
    int i = 0 ;
    int count = 0 ;
    int number[100] ;
    while (x != 0 && count < 100){
        cout << "Enter an integer: " ;
        cin >> x ;
        if (x != 0) {
            number[count] = x ;
            count++ ;
        }
    }
    int sumevens = 0 ;
    int sumodds = 0 ;
    while (i < count){
        if (number[i] % 2 == 0 ){
            sumevens ++ ;
        }
        else{
            sumodds ++ ;
        }
        i ++ ;
    }
    cout << "#Even numbers = " ;
    cout << sumevens << endl;
    cout << "#Odd numbers = " ;
    cout << sumodds << endl;
    return 0;
}
