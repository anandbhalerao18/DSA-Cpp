#include<iostream>
using namespace std;


void update(int arr[], int n){
    cout<<"Inside the function"<<endl;

    //updating arrays first element
    arr[0] = 120;

    // printing the array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Going back to main fucntion"<<endl;

}



int main(){

    int arr[3] = {1,2,3};
    update(arr, 3);
    // printing the array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";

    }

//    Print sum of all elements in an array


}