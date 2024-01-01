#include<iostream>
using namespace std;

int main(){
    // first pattern

    // int n;
    // cin>>n;
    // int i =1;
    // while(i<=n){
    //     int j =1;
    //     while (j<=n){
    //         cout<<j;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

//second pattern
    // int n;
    // cin>>n;
    // int i =1;
    // while(i<=n){
    //     int j =1;
    //     while (j<=n){
    //         cout<<n-j+1;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


// third pattern
    // int n;
    // cin>>n;
    // int i =1;
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<count;
    //         count= count+1;
    //         j= j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


// star pattern 1
    int n;
    cin>>n;
    int row = 1;
    while (row<=n){
        int col = 1;
        while (col<=row){
            cout<<" * ";
            col = col +1;
        }
        cout<<endl;
        row = row +1;
    }

// star pattern 2
    int n;
    cin>>n;
    int row = 1;
    while (row<=n){
        cout<<" * ";
        

        
    }
    
}