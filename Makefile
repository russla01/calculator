CARCH = $(shell uname)

ifeq ($(ARCH),Darwin)
	CXX	 = g++
	LINK     = g++
else
	CXX	 = g++-4.8
	LINK     = g++-4.8
endif

DEBUG    = -g
CXXFLAGS = $(shell fltk-config --cxxflags ) -std=c++11 -I.
LDFLAGS  = $(shell fltk-config --ldflags )
LDSTATIC = $(shell fltk-config --ldstaticflags )

calculator: calculator.cpp
	$(CXX) $(CXXFLAGS) calculator.cpp  $(LDFLAGS) -o calculator

clean: 
	rm -f *.o 2> /dev/null
	rm -f ibutton animals