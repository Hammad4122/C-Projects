#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int N;
    while(true){
        cout<<"\nEnter a number from where to print the Collatz Sequence : ";
        cin>> N;
    
        if (N > 1){
            while (N != 1){
                if (N % 2 == 0){

                    N = N/2;
                    cout<< N <<" ";
                }
                else {
                    N = (3 * N) + 1;
                    cout<< N <<" ";
                }
            }
            break;
        }
        else {
            cout<<"Please Enter a number greater than 1";
        }
    }
    return 0;
}