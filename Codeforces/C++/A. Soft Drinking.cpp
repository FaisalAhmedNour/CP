
#include<bits/stdc++.h>
using namespace std;

int main(){
    int frnd, botles, liters, clemon, clice, salt, liter_frnd, salt_frnd;
    cin >> frnd >> botles >> liters >> clemon >> clice
        >> salt >> liter_frnd >> salt_frnd;
    int total_liters = botles * liters;
    int total_slice = clemon * clice;
    int drinks_toast = total_liters / (frnd * liter_frnd);
    int slice_toast = total_slice / frnd;
    int salt_toast = salt / (frnd * salt_frnd);
    cout << min({drinks_toast,slice_toast,salt_toast});
}
