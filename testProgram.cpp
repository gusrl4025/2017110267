#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    for(int i=1; i<=8; i++){
        cout<<"[구구단 "<<i<<"단]"<<'\n';
        for(int j=1; j<=9; j++){
            cout<<i<<" x "<<j<<" = "<<i*j<<'\n';
        }
        cout<<'\n';
    }
    
    return 0;
}
