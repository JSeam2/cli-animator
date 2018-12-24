/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/25/2018 01:27:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    string line;

    while(1) {
        // clear screen
        cout << "\033[2J\033[1;1H";

        for(int i = 0; i < 6; i++) {
            string s = to_string(i) + ".txt";
            ifstream myfile (s);
           if (myfile.is_open()) {
                while (getline (myfile, line)) {
                    cout << line << '\n';
                }
                myfile.close();
            }
            this_thread::sleep_for(chrono::milliseconds(200));
        }
    }
}
