
#ifndef ALGORITHMS_SEARCHKMP_H
#define ALGORITHMS_SEARCHKMP_H

#include <iostream>
#include "string"
#include "vector"

using namespace std;

void searchKMP(const string& S, const string& pattern) {
    vector<int> pf (pattern.length());

    pf[0] = 0;
    for (int k = 0, i = 1; i < pattern.length(); ++i) {
        while ((k > 0) && (pattern[i] != pattern[k]))
            k = pf[k-1];

        if (pattern[i] == pattern[k])
            k++;

        pf[i] = k;
    }

    for (int k = 0, i = 0; i < S.length(); ++i) {
        while ((k > 0) && (pattern[k] != S[i]))
            k = pf[k-1];

        if (pattern[k] == S[i])
            k++;

        if (k == pattern.length()) {
            cout << "Found on position " << (i - pattern.length() + 1) << endl;
            return;
        }
    }

    cout << "Not found" << endl;
}

#endif //ALGORITHMS_SEARCHKMP_H
