#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;

    int i=1 ;
    while(i<n){
        if(n%i==0){
        cout<<"not prime for "<< i<<endl;
        }
    else{
        cout<<"prime for" << i<<endl;
    }
    i=i+1;
    }

        return 0;
}
