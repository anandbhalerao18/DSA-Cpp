#include<iostream>
using namespace std;
int main(){

    // int arr[10] = {10, 5, 3, 78, 100};
    // cout<<"The address of first block of array is = "<<arr<<endl;
    // cout<<"The address of first block of array is = "<<&arr[0]<<endl;
    // cout<<" with star arr = "<<*arr<<endl;
    // cout<<" with star arr + 1 = "<<*arr+1<<endl;
    // cout<<"using brackets and arr +1 = "<< *(arr+1)<<endl;

    // cout<<"the value at arr[2]="<< arr[2]<<endl;
    // cout<<"the value at same arr[2] and *(arr+2)="<<*(arr+2)<<endl;

    // int i = 3;
    // cout<< i[arr]<<endl;



    int temp[10]= {1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;


}