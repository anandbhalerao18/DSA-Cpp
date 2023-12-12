#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid =(start + end)/2;

    while(start <= end){
        if(arr[mid]== key){
            return mid;
        }


        // go to right wala part
        if(key> arr[mid]){
            start = mid + 1;
        }
        else{ 
            end = mid -1;
        }

        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int even[6] ={2,4,6,8,12,14};
    int odd[5] = {3,4,5,22,80};

    int evenindex = binarySearch(even, 6, 12);
    cout <<"Index of 12 is "<< evenindex<<endl;


    int oddindex = binarySearch(odd, 5, 8);
    cout<< "Index of 20 iis "<< oddindex<<endl;



}