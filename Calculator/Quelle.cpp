#include <iostream>
#include "GeneralUtil_PROT.hpp"
#include "Calculator_PROT.hpp"

/*
"getline()": http://www.cplusplus.com/reference/string/string/getline/
"std::string::npos": http://www.cplusplus.com/reference/string/string/npos/
"std::stod()": http://www.cplusplus.com/reference/string/stod/

Functions (Things it can do)
----------
Can calculate "+ - * / ^" math problems. "^" is power to.
----------

Bugs (Things to fix)
1. Throws exception when valid "arithmetic operator" (look above) and invalid symbol appear in the input string. Most likely because invalid symbol is given to math function which can't handle invalid symbol.
---------------------
*/

int main() {

	int A = 5;
	int b = 29;
	int c = 50;

	Calculator a;
	a.calc_start();

	std::cout << "Hello" << std::endl;

	GenUtil::pauseProgramm();
	return 0;
}