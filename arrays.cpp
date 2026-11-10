#include<iostream>
using namespace std;

int main(){

#define N 10

int nums[10];
int soma=0;

    for (int i = 0; i < N; i++){

    cout << "numero " <<( i + 1) << " : ";
    cin >> nums[i];

    soma = soma+ nums[i]* nums[i];
    }
    cout << soma;


    return 0;

}

