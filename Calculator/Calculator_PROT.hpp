#pragma once

class Calculator {
private:
	//Attributes
	std::string calculation = "";
	static int numberCalculators;
private:
	//Private Functions
	void calcEngine();
	bool calcEngine_ExceptionHandling(int, std::string op);

public:
	//Constructors
	Calculator();

	//Destructors
	~Calculator();

	//Public Functions
	static int calc_getNumberCalculators();
	void calc_start();
	void calc_help();
};