#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
    
    int number;
    long long int remainder;
    long long int quotient;
    string binary_number = "";
    
    // Taking input from user
    cout<<"Enter a Number : ";
    cin>>number;

    // Solution
    quotient = number / 2;
    remainder = number % 2;
    binary_number += (remainder + '0');

    while (quotient > 0)
    {
        remainder = quotient % 2;
        quotient = quotient / 2;
        binary_number += (remainder + '0');
    }
    // Now reversing the string
    int length_of_string = binary_number.length()-1;
    string reversed_binary_value = "";
    while (length_of_string >= 0){
        reversed_binary_value += binary_number[length_of_string];
        length_of_string--;
    }
    cout<<"\nThe binary value of the number "<< number <<" is: "<<reversed_binary_value;

    getch();
    return 0;
}