#include <bits/stdc++.h>
using namespace std;

int main(void){
    int D, T, S;
    cin >> D >> T >> S;

    bool result{D<=S*T};

    if(result){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
