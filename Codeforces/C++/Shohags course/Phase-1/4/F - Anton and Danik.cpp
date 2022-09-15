#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, Anton = 0, Danik = 0;
    string game;
    cin >> N >> game;
    for(int i = 0; i < N; i++){
        if(game[i] == 'A')
            Anton++;
        else if(game[i] == 'D')
            Danik++;
    }
    if(Anton > Danik) 
        cout << "Anton";
    else if(Anton < Danik)
        cout << "Danik";
    else cout << "Friendship";
}