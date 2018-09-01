#pragma once
#include <iostream>
#include <cctype>
#include <chrono>
#include <algorithm>
#include <string>
#include "GeneralUtil_PROT.hpp"
#define WINDOWS

namespace GenUtil {
	
	bool checkIfStringContainsLetter(std::string input) {
		if (std::any_of(std::begin(input), std::end(input), std::isalpha))
		{
			return true;
		}

		else {
			return false;
		}
	}

	//Pauses program and waits for user input. Windows specific solution and general solution.
	void pauseProgramm() {
#ifdef WINDOWS
		system("pause");
#endif

#ifndef WINDOWS
		std::cout << "Press Enter to continue . . .";
		std::cin.get();
#endif
	}

	//Measures time at two points and subtracts them, to find out the elapsed time.
	void measureTime(std::string time) {

		static std::chrono::high_resolution_clock::time_point t1;
		static std::chrono::high_resolution_clock::time_point t2;
		static bool t1Measured = false;
		
		if (time == "t1") {
			t1Measured = true;
			t1 = std::chrono::high_resolution_clock::now();
		}

		else if (time == "t2") {
			if (t1Measured == false) {
				std::cerr << "The start point of the measurement must be specified first!" << std::endl;
			}
			else {
				t2 = std::chrono::high_resolution_clock::now();
				auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
				std::cout << "duration in microseconds: " << duration << std::endl;
			}
		}
		
		else {
			std::cerr << "Wrong input! Only 't1' and 't2' " << std::endl;
		}
	}

	//Takes string and completely erases a specific character.
	std::string cutCharFromString(std::string input, char character) {
		input.erase(std::remove(input.begin(), input.end(), character), input.end());
		return input;
	}
}