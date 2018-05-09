require "mkmf"
system('swig -c++   -ruby matplot.i') or abort
