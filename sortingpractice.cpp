#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;


int main() {

int n;
int arr[MAX];

cout<< "Enter a number N: ";
cin >> n;

//input value in array

for (int i = 0; i<n; i++)
{
    arr[i] = rand();
}


//outout array

for (int i = 0; i<n; i++){
    cout << arr[i] << " ";
    
}

    return 0;
}