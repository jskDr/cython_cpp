cdef extern from "MyCPP.cpp":
    pass
cdef extern from "MyCPP.h" namespace "mycpp":
    void mysort()
