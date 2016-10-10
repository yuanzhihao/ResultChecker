//
//  main.cpp
//  ResultChecker
//
//  Created by Zhihao Yuan on 10/10/16.
//  Copyright © 2016 Zhihao Yuan. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using std::fstream;
using std::string;

int main(int argc, const char * argv[]) {
    // insert code here...
    char c1[256],c2[256];
    fstream inputFile1;
    fstream inputFile2;
    inputFile1.open(argv[1]);
    inputFile2.open(argv[2]);
    while (!inputFile1.eof() || !inputFile2.eof()) {
        inputFile1.getline(c1, 256, '\n');
        inputFile2.getline(c2, 256, '\n');
        if (strcmp(c1, c2)) {
            std::cout << "结果不同" <<std::endl;
            return -1;
        }
    }
    inputFile1.close();
    inputFile2.close();
    std::cout << "结果一致" << std::endl;
    return 0;
}
