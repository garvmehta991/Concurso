#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    for(int y = 0 ; y < x ; y++) {
        int n , a , b , k ;
        cin>>n>>a>>b>>k;
        int tru_max = a + b;
        for(int i = 0 ; i <= k ; i++) {
            int temp_max = 0;
            int a_dum = (a + i)%n ;
            if(a_dum==0) {
                a_dum = n;
            }
            int b_dum = (b + i)%n ;
            if(b_dum == 0) {
                b_dum = n;
            }
            temp_max = a_dum+b_dum ;
            if(temp_max > tru_max) {
                tru_max = temp_max ;
            }
        }
        cout<<tru_max<<endl;

    }
}
