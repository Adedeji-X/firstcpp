//
//  main.cpp
//  firstcpp
//
//  Created by cloud on 5/21/20.
//  Copyright © 2020 cloud. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    cout << fixed << setprecision(2);

    double temperature;
    cout << "Enter temperature Line 17 :" << endl;
    cin >> temperature;
    
    if (temperature >= 60)
    {
        if (temperature >= 80)
            cout << "go play ball" << endl;
        else
            cout << "go chill" << endl;
    }
    else
        cout << " be in door" << endl;
    
    
    
    
    return 0;
}
