#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while (star<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--; 
    }
    
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}





int main(){
    int arr[6] = {2,3,45,676,5, -6};
    int arr[5] = {-243,333,5,6,-96};
    reverse(arr, 5);
    reverse(arr, 6);

    printArray(arr, 5);
    printArray(arr, 6);






    return 0;

}