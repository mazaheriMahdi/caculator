/*
 simple calculator with c++
 */


#include <iostream>

using namespace std;

int main (){
    int a , b , result = 0;
    char oprator1;
    
    cout <<  "Enter number 1 : \t";
    cin >> a ;
    cout << "Enter number 2 : \t" ;
    cin >> b ;
    cout << "what you wanna do with these tow number ? (ican do + , - , * , /) \t" ;
    cin >> oprator1 ;
    
    switch (oprator1) {
        case '+' :
            result = a + b ;
            cout << result << "\n";
            break;
        case '-' :
            result = a - b ;
            cout << result << "\n";
            break;
        case '*' :
            result = a * b ;
            cout << result << "\n";
            break;
        case '/' :
            result = a / b ;
            cout << result << "\n";
            break;
        
            
        default:
            
            cout << result << "\n" << "error , oprator is not correct \n";
            break;
            
    }
    
}
