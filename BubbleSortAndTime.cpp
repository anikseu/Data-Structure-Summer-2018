// Generating random numbers upto 10^3 and 10^5 and comparing the time taken to sort them using naive Bubble Sort Algorithm. 
// Advanced Lab Task 1 - 07-06-2018

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){


    for(int i=0; i<=n-2; i++){
        for(int j=0; j<=n-2-i; j++){
            if(arr[j]<arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }


}

void printArray(int arr[], int s){
    for(int i=0; i<s; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void generateArray(int arr[], int n){
    srand(time(0));
    for(int i=0; i<n; i++){
        arr[i]=rand()%1000 + 1; // range 1-1000
    }
}

int main(){

    // 0.265 for 10k
    // 31.935 for 100k

    int n;
    cin >> n;
    int arr[n];
    generateArray(arr, n);

    double start=clock();
    bubble_sort(arr, n);
    double stop=clock();
    double calc = (stop-start)/double(CLOCKS_PER_SEC);

    cout << "time: " << calc << endl;

    cout << endl << endl;
    printArray(arr, n);


}
