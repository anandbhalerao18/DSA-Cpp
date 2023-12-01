# include <iostream>
using namespace std;



int power(int a, int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans *a;

    }
    return ans;
}



int main() {

    // switch statements in cpp

    // int a = 90;
    // switch(a){
    //     case 1 : cout << "It is executed in case 1"<<endl;
    //             break;
    //     case 8 : cout<< "It is executed in case 8"<<endl;
    //             break;
    //     default: cout<< "It is executed in default case"<<endl;
    //             break;

    // }



    // pyara sa calulator in cpp
    // int a ;
    // int b;
    // cout<<"Enter the value of A = "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b = "<<endl;
    // cin>>b;

    // char c;
    // cout<<"Enter the opreation you want to perform"<<endl;
    // cin >>  c;

    // int mul = a*b;
    // int div = a/b;
    // int add = a+b;
    // int sub = a-b;


    // switch(c) {
    //     case '*': cout<<"The multiplication of"<< a <<"And"<< b <<"is"<< mul<<endl;
    //                 break;
    //     case '/': cout<<"The Division of"<< a <<"And"<< b <<"is"<< div<<endl;
    //                 break;
    //     case '+': cout<<"The Addition of"<< a <<" And "<< b <<"is"<< add<<endl;
    //                 break;
    //     case '-': cout<<"The Subtraction of"<< a <<" And "<< b <<"is"<< sub<<endl;
    //                 break;
    //     default: cout<<"Somthing is wrong in the input user has given try again ! "<<endl;
    // }




    // **************** FUNCTIONS **************
    
    int a, b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<"The answer is = "<<answer<<endl;
}
