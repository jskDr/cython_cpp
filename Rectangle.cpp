#include <iostream>
#include <vector>

#include "Rectangle.h"

using namespace std;

namespace shapes {
    Rectangle::Rectangle() {}

    Rectangle::Rectangle(int x0, int y0, int x1, int y1) {
        this->x0 = x0;
        this->y0 = y0;
        this->x1 = x1;
        this->y1 = y1;
    }

    Rectangle::~Rectangle() {}

    int Rectangle::getArea() {
        return (this->x1 - this->x0) * (this->y1 - this->y0);
    };

    void print_vec(vector<int> v) {
        for(vector<int>::iterator iter=v.begin(); iter !=v.end(); iter++) {
            cout << *iter << ' ';
        }
        cout << endl;        
    };

    double sum(double x, double y){
        cout << "Hello" << endl;

        vector<int> v;
        v.push_back(2);
        v.push_back(3);
        v.push_back(1);

        cout << v.front() << "," << 
            v.back() << "," <<
            v[1] << "," <<
            v.at(1) << "," <<
            v.size() << endl;

        for(vector<int>::iterator iter=v.begin(); iter !=v.end(); iter++) {
            cout << *iter << ' ';
        }
        cout << endl;

        // Sorting using vector (assending)
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

        return x + y;
    };
}