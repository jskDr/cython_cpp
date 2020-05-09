#ifndef RECTANGLE_H
#define RECTANGLE_H

// #include<iostream>
#include<vector>
using namespace std;

namespace shapes {
    class Rectangle {
        public:
            int x0, y0, x1, y1;
            Rectangle();
            Rectangle(int, int, int, int);
            ~Rectangle();
            int getArea();
    };    
    void print_vec(vector<int> v);
    double sum(double, double);
}

#endif