//
//  main.cpp
//  TestCplusplus
//
//  Messing around in C++ since I haven't used it in a very long time
//  Variables, conditional statements, loops, and functions
//
//  Created by Jason Moreau on 1/21/20.
//  Copyright © 2020 Jason Moreau. All rights reserved.
//

#include <iostream>

using namespace std;

/* greaterorless: Checks whether or not sum is greater than or equal to 10
 * Returns a String -- true or false
 */
string greaterorless(int sum) {
    if(sum >= 10){
        return "True";
    } else {
        return "False";
    }
}

/* blankspace: Function returns a new line
 */
string blankspace() {
    return "\n";
}

int main() {
    int x = 0;
    int sum = 0;
    string result = "";
    std::cout << "This is a test." << std::endl;
    cout << "Including namespace." << endl;
    cout << "Enter a number: " << endl;
    cin >> x;
    cout << "Your number is " << x << endl;
    
    if(x > 10) {
        cout << "Your number is greater than 10" << endl;
    } else {
        cout << "Your number is less than 10" << endl;
    }
    
    blankspace();
    
    // Sum loop
    for(int i = 0; i < 2; i++) {
        sum = sum + 1;
    }
    cout << "Sum = " << sum << endl;
    
    blankspace();
    
    cout << "Is sum greater than 10? " << endl;
    result = greaterorless(sum);
    cout << result << endl;
    
    return 0;
}


