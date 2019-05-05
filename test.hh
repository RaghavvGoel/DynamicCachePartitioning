#ifndef __WS_TEST_HH__
#define __WS_TEST_HH__

#include <inttypes.h>

#include <cassert>
#include <memory>
#include <ostream>
#include <stdexcept>
#include <iostream>
#include <cstdlib>


int printHelloWorld(int x){
	std::cout<<"HELLO WORLD \n";
	x = x + 10;
	return x;
}

#endif // __WS_TEST_HH__

