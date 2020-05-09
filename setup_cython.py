from distutils.core import setup
from Cython.Build import cythonize

setup(name = 'Cython Library',
    ext_modules = cythonize("*.pyx"))