#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n;
    int isPrime;
    int rem;
    while (true)
    {   
        cout<<"\nEnter a Number: ";
        cin>>n;
        //Checking if the number is Prime or not.
        if (n > 1){
            if (n == 2){
                isPrime = 1;
            }
            else {
                int i = 2;
                while(i <= n){
                    rem = n % i;
                    if (i < n && rem == 0){
                        isPrime = 0;
                        break;
                    }
                    else {
                        i++;
                    }
                }
                if (isPrime != 0){
                    isPrime = 1;
                }
                
            }
        }
        else {
            cout<<"\nEnter a number greater than 1.";
            continue;
        }

        if (isPrime == 1){
            cout<<"Program Ended. You entered a Prime Number.";
            break;
        }
        else {
            cout<<n<<endl;
        }
        
    }
    getch();
    return 0;
}