#include<iostream>
using namespace std;


int fibonacci(int N);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int N){
    if(N == 0 || N == 1){
        return N;
    }else if(N > 1){
         return fibonacci(N-1)+fibonacci(N-2) ;
    }
    return N;
       
}
