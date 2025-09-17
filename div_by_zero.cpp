#include <iostream>
using namespace std;

int main() {
    float n1, n2, ans;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            cout<<"Answer = "<<ans;
        }
    }
    catch(float num){
        cout<<"\nERROR: Division by "<<num<<endl;
    }
    return 0;
}

/*
OUTPUT:
Enter two numbers: 10 0

ERROR: Division by 0
*/
