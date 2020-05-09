# distutils: language = c++

def inverse(float x):
    cdef float y
    y = 1.0 / x
    return y

from Rectangle cimport Rectangle
from Rectangle cimport sum

def main():
    rec_ptr = new Rectangle(1, 2, 3, 4)
    try:
        rec_area = rec_ptr.getArea()
        print(rec_area)
    finally:
        del rec_ptr

    print(sum(1.0, 2.0))
    print(inverse(2.0))