#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a num: ";
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}