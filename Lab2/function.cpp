#include "lab2.hh"
#include <iostream>

void read(int *A, int n){
    for(int i = 0; i < n; i++){
        std::cin >> A[i];
    }
}

void print(int *A, int n){
    for(int i = 0; i < n; i++){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int max(int *A, int n){
    int new_max = *A;
    int i;
    for(i = 1; i < n; ++i){
        if(new_max < *(A + i)){
            new_max = *(A + i);
        }
    }
    return new_max;
}

int gcd(int *A, int n){

}

int * concat(int *A, int n, int *B, int m){

}

int * subarray(int *A, int n, int start, int len){

}

int * add(int * A, int n, int p, int e){

}

int * del(int *A, int n, int p){

}
