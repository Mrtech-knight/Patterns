#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+j+i-2;
            cout<<ch<<" ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}