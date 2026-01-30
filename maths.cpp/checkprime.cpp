#include<bits/stdc++.h>
using namespace std;

// int main(){                        //1st method O(num)
//     int num;
//     cin>> num;
//     bool check = false;
//     for(int i = 2; i<num; i++){
//         if (num % i == 0){
//             check = true;
//             break;
//         } 
//     }
//     if(check == false){
//         cout<< "It is a prime no" <<endl; 
//     }
//     else{
//         cout<< "It is not a prime no" <<endl; 
//     }
//     return 0;
// }


int main(){                        // O(sqrt(num))
    int num;
    cin>> num;
    bool check = false;
    for(int i = 2; i*i < num; i++){
        if(num % i == 0){
            check = true;
            if((num/i) != i){
                check = true;
                break;
            }
        }
    }
    if(check == false){
        cout<< "It is a prime no" <<endl; 
    }
    else{
        cout<< "It is not a prime no" <<endl; 
    }
    return 0;
}