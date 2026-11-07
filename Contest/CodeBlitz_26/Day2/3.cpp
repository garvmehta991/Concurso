#include <iostream> 
using namespace std;

int main() {
    int x;
    cin>>x;
    for(int y = 0 ; y < x ; y++) {
        int n;
        cin>>n;
        if(n%4 == 1 || n %4 == 0) {
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}