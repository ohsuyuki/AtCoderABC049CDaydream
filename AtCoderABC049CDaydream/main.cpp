//
//  main.cpp
//  AtCoderABC049CDaydream
//
//  Created by osu on 2019/01/04.
//  Copyright © 2019 osu. All rights reserved.
//

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

bool endsWith(const std::string& s, const std::string& suffix) {
    if (s.size() < suffix.size()) return false;
    return std::equal(std::rbegin(suffix), std::rend(suffix), std::rbegin(s));
}

int main(int argc, const char * argv[]) {
    std::string S;
    std::cin >> S;

    while(S.size() >= 0) {
        if(endsWith(S, "dream") == true) {
            S.erase(S.size()-5, 5);
        } else if(endsWith(S, "dreamer") == true) {
            S.erase(S.size()-7, 7);
        } else if(endsWith(S, "erase") == true) {
            S.erase(S.size()-5, 5);
        } else if(endsWith(S, "eraser") == true) {
            S.erase(S.size()-6, 6);
        } else {
            break;
        }
    }

    if(S.length() == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
