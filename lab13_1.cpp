#include<iostream>
#include<ctime>
using namespace std;


long long int fibonacci(int N);


int main(){
    clock_t start = clock();
    cout << "Result: " << (fibonacci(50)) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(int N){
    if(N == 0 || N == 1){
        return N;
    }else if(N > 1){
         return fibonacci(N-1)+fibonacci(N-2) ;
    }
    return N;
       
}
