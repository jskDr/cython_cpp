#include <iostream>
#include <vector>

#include "MyCPP.h"
using namespace std;

namespace mycpp {
    void print_vec(vector<int> v) {
        for(vector<int>::iterator iter=v.begin(); iter !=v.end(); iter++) {
            cout << *iter << ' ';
        }
        cout << endl;        
    };
    void mysort(){
        vector<int> v;
        v.push_back(2);
        v.push_back(3);
        v.push_back(1);

        print_vec(v);        
        for(uint i=0; i < v.size(); i++) {
            for(uint j=i+1; j < v.size(); j++) {
                if(v[j] < v[i]) {
                    int temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
            }
        }
        print_vec(v);
    };
}