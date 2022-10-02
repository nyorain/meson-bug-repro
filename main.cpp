#include "inc/fwd.hpp"
#include <iostream>
#include <vector>

int foo();
int bar();

int entry() {
	std::cout << foo() << "\n";
	std::cout << bar() << "\n";
	return 1;
}
