#include <iostream>
#include <vector>
#include "HorseRaceBalance.h"

using namespace std;


int main(){

    vector<double> s = {0.,0.,0.,0.,0.,0.,0.};

    HorseRaceBalance hr = HorseRaceBalance(s, false);

    cout << hr.won_affter_loisng_(2) << endl;
    return 0;
}