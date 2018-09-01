#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include <vector>
#include "Calculator_PROT.hpp"
#include "GeneralUtil_PROT.hpp"
#include "Math_PROT.hpp"

int Calculator::numberCalculators = 0;	//Statische Variable "numberCalculators" aus "Calculator" Klasse wird initialisiert.

Calculator::Calculator() {
	numberCalculators++;
}

Calculator::~Calculator() {
	numberCalculators--;
}

int Calculator::calc_getNumberCalculators() {
	return numberCalculators;
}

bool Calculator::calcEngine_ExceptionHandling(int type, std::string op) {
	switch (type) {

	case 0:
		if (calculation.find(op) != std::string::npos) {
			std::cerr << "Too many arithmetic Operators!" << std::endl;
			return true;
		}
		else {
			return false;
		}

	default:
		std::cerr << "No valid case selected!" << std::endl;
		return false;
	}
}

void Calculator::calc_help() {
	std::ifstream file;
	std::string ZeilenSpeicher;
	file.open("Y:/2_IT_Informatik/2_Programmierung/3_MS VS 2017 CE/2_Projekte/Calculator/Calculator/help.txt");
	if (file.is_open()) {
		while (std::getline(file, ZeilenSpeicher)) {
			std::cout << ZeilenSpeicher << std::endl;
		}
		file.close();
	}
	else {
		std::cerr << "Fehler beim Öffnen der Datei!" << std::endl;
	}
}

void Calculator::calcEngine() {

	while (calculation != "exit") {

		std::getline(std::cin, calculation);											//"cin" alleine verarbeitet String mit Whitespaces inkorrekt. "getline(std::cin, stringname)" benutzen.
		calculation = GenUtil::cutCharFromString(calculation, ' ');

		///Test for constants.
		if (calculation.find("eul") != -1) {											//If user calls "Euler's Number" by typing "eul", "eul" is replaced with a String of "Euler's Number's Value".
			calculation.replace(calculation.find("eul"), 3, Constants::eString);
		}

		if (calculation.find("pi") != -1) {
			calculation.replace(calculation.find("pi"), 1, Constants::piString);
		}

		if (calculation.find("sq2") != -1) {
			calculation.replace(calculation.find("sq2"), 1, Constants::sq2String);
		}

		if (calculation.find("sq3") != -1) {
			calculation.replace(calculation.find("sq3"), 1, Constants::sq3String);
		}

		if (calculation.find("sq5") != -1) {
			calculation.replace(calculation.find("sq5"), 1, Constants::sq5String);
		}

		if (calculation.find("eulMasch") != -1) {
			calculation.replace(calculation.find("eulMasch"), 1, Constants::eulMaschString);
		}

		if (calculation.find("goldRat") != -1) {
			calculation.replace(calculation.find("goldRat"), 1, Constants::goldRatString);
		}

		if (calculation.find("meissMert") != -1) {
			calculation.replace(calculation.find("meissMert"), 1, Constants::meissMertString);
		}

		if (calculation.find("bern") != -1) {
			calculation.replace(calculation.find("bern"), 1, Constants::bernString);
		}

		if (calculation.find("gaussKuzWir") != -1) {
			calculation.replace(calculation.find("gaussKuzWir"), 1, Constants::gaussKuzWirString);
		}

		if (calculation.find("hafSarMc") != -1) {
			calculation.replace(calculation.find("hafSarMc"), 1, Constants::hafSarMcString);
		}

		if (calculation.find("land") != -1) {
			calculation.replace(calculation.find("land"), 1, Constants::landString);
		}

		if (calculation.find("omega") != -1) {
			calculation.replace(calculation.find("omega"), 1, Constants::omegaString);
		}

		if (calculation.find("golDick") != -1) {
			calculation.replace(calculation.find("golDick"), 1, Constants::golDickString);
		}

		if (calculation.find("cahen") != -1) {
			calculation.replace(calculation.find("cahen"), 1, Constants::cahenString);
		}

		if (calculation.find("twinPrime") != -1) {
			calculation.replace(calculation.find("twinPrime"), 1, Constants::twinPrimeString);
		}

		if (calculation.find("laplaceLimit") != -1) {
			calculation.replace(calculation.find("laplaceLimit"), 1, Constants::laplaceLimitString);
		}

		if (calculation.find("embTre") != -1) {
			calculation.replace(calculation.find("embTre"), 1, Constants::embTreString);
		}

		if (calculation.find("landRam") != -1) {
			calculation.replace(calculation.find("landRam"), 1, Constants::landRamString);
		}

		if (calculation.find("allaGrin") != -1) {
			calculation.replace(calculation.find("allaGrin"), 1, Constants::allaGrinString);
		}

		if (calculation.find("brunquadrup") != -1) {
			calculation.replace(calculation.find("brunquadrup"), 1, Constants::brunquadrupString);
		}

		if (calculation.find("catalan") != -1) {
			calculation.replace(calculation.find("catalan"), 1, Constants::catalanString);
		}

		if (calculation.find("legendre") != -1) {
			calculation.replace(calculation.find("legendre"), 1, Constants::legendreString);
		}

		if (calculation.find("lengyel") != -1) {
			calculation.replace(calculation.find("lengyel"), 1, Constants::lengyelString);
		}

		if (calculation.find("vis") != -1) {
			calculation.replace(calculation.find("vis"), 1, Constants::visString);
		}

		if (calculation.find("apery") != -1) {
			calculation.replace(calculation.find("apery"), 1, Constants::aperyString);
		}

		if (calculation.find("conway") != -1) {
			calculation.replace(calculation.find("conway"), 1, Constants::conwayString);
		}

		if (calculation.find("mill") != -1) {
			calculation.replace(calculation.find("mill"), 1, Constants::millString);
		}

		if (calculation.find("plastic") != -1) {
			calculation.replace(calculation.find("plastic"), 1, Constants::plasticString);
		}

		if (calculation.find("ramanSold") != -1) {
			calculation.replace(calculation.find("ramanSold"), 1, Constants::ramanSoldString);
		}

		if (calculation.find("backhouse") != -1) {
			calculation.replace(calculation.find("backhouse"), 1, Constants::backhouseString);
		}

		if (calculation.find("porter") != -1) {
			calculation.replace(calculation.find("porter"), 1, Constants::porterString);
		}

		if (calculation.find("lieb") != -1) {
			calculation.replace(calculation.find("lieb"), 1, Constants::liebString);
		}

		if (calculation.find("erdBor") != -1) {
			calculation.replace(calculation.find("erdBor"), 1, Constants::erdBorString);
		}

		if (calculation.find("niven") != -1) {
			calculation.replace(calculation.find("niven"), 1, Constants::nivenString);
		}

		if (calculation.find("brunTwin") != -1) {
			calculation.replace(calculation.find("brunTwin"), 1, Constants::brunTwinString);
		}

		if (calculation.find("uniParabol") != -1) {
			calculation.replace(calculation.find("uniParabol"), 1, Constants::uniParabolString);
		}

		if (calculation.find("feigenbaum2") != -1) {
			calculation.replace(calculation.find("feigenbaum2"), 1, Constants::feigenbaum2String);
		}

		if (calculation.find("sierpinski") != -1) {
			calculation.replace(calculation.find("sierpinski"), 1, Constants::sierpinskiString);	//FEHLER: Wird vom Calculator nicht als valide Eingabe erkannt.
		}

		if (calculation.find("khinchin") != -1) {
			calculation.replace(calculation.find("khinchin"), 1, Constants::khinchinString);
		}

		if (calculation.find("fransRob") != -1) {
			calculation.replace(calculation.find("fransRob"), 1, Constants::fransRobString);
		}

		if (calculation.find("levy") != -1) {
			calculation.replace(calculation.find("levy"), 1, Constants::levyString);
		}

		if (calculation.find("reciprocFibo") != -1) {
			calculation.replace(calculation.find("reciprocFibo"), 1, Constants::reciprocFiboString);
		}

		if (calculation.find("feigenbaum1") != -1) {
			calculation.replace(calculation.find("feigenbaum1"), 1, Constants::feigenbaum1String);
		}

		///Zufallszahlen
		if (calculation.find("rnd") != -1) {
			calculation.replace(calculation.find("rnd"), 1, AdvMath::rnd(100, 1, 100000));
		}

		///Addition
		if (calculation.find("+") != -1 && calculation.find("derive") == -1) {

			if (calcEngine_ExceptionHandling(0, "++") == false) {						//Schaut, ob Rechenzeichen mehrfach vorkommen.
				std::string conversion1 = calculation.substr(0, calculation.find("+"));	//Zahl links von dem "+" wird als String isoliert.
				std::string conversion2 = calculation.substr(calculation.find("+") + 1, calculation.back()); //Zahl rechts von dem "+" wird isoliert.

				std::cout << "\t" << BasicMath::add(std::stod(conversion1, nullptr), std::stod(conversion2, nullptr)) << std::endl;	//"stod" converts string to double. Beide isolierte Zahlen als Strings werden in double Zahlen umgewandelt und der "add" Funktion übergeben.
			}
		}

		///Subtraktion
		else if (calculation.find("-") != -1 && calculation.find("derive") == -1 && calculation.find("^") == -1) {

			if (calcEngine_ExceptionHandling(0, "--") == false) {
				std::string conversion1 = calculation.substr(0, calculation.find("-"));
				std::string conversion2 = calculation.substr(calculation.find("-") + 1, calculation.back());

				std::cout << "\t" << BasicMath::sub(std::stod(conversion1, nullptr), std::stod(conversion2, nullptr)) << std::endl;
			}
		}

		///Multiplikation
		else if (calculation.find("*") != -1 && calculation.find("derive") == -1) {

			if (calcEngine_ExceptionHandling(0, "**") == false) {
				std::string conversion1 = calculation.substr(0, calculation.find("*"));
				std::string conversion2 = calculation.substr(calculation.find("*") + 1, calculation.back());

				std::cout << "\t" << BasicMath::mult(std::stod(conversion1, nullptr), std::stod(conversion2, nullptr)) << std::endl;
			}
		}

		///Division
		else if (calculation.find("/") != -1 && calculation.find("derive") == -1) {

			if (calcEngine_ExceptionHandling(0, "//") == false) {
				std::string conversion1 = calculation.substr(0, calculation.find("/"));
				std::string conversion2 = calculation.substr(calculation.find("/") + 1, calculation.back());

				std::cout << "\t" << BasicMath::div(std::stod(conversion1, nullptr), std::stod(conversion2, nullptr)) << std::endl;
			}
		}

		///Potenzrechnung
		else if (calculation.find("^") != -1 && calculation.find("derive") == -1) {
			if (calcEngine_ExceptionHandling(0, "^^") == false) {
				std::string conversion1 = calculation.substr(0, calculation.find("^"));
				std::string conversion2 = calculation.substr(calculation.find("^") + 1, calculation.back());

				std::cout << "\t" << BasicMath::Pow(std::stod(conversion1, nullptr), std::stod(conversion2, nullptr)) << std::endl;
			}
		}

		///Ableiten
		else if (calculation.find("derive") != -1) {
			calculation = calculation.erase(calculation.find("derive"), 6);
			AdvMath::deriveMain(calculation);
		}

		///Matrizen
		else if (calculation.find("mat") != -1) {
			std::cout << std::endl;
			AdvMath::matrixMain();
		}

		///Summenzeichen
		else if (calculation.find("sum") != -1) {
			std::string kString = calculation.substr(0, calculation.find("sum"));
			std::string nString = calculation.substr(calculation.find("sum") + 3, calculation.back());

			//if (nString == "1000000") {
			//	AdvMath
			//}
			AdvMath::sum(kString, nString);
		}

		///Modulorechnung
		else if (calculation.find("%") != -1) {
			std::string xString = calculation.substr(0, calculation.find("%"));
			std::string yString = calculation.substr(calculation.find("%") + 1, calculation.back());

			std::cout << "\t" << BasicMath::mod(std::stoi(xString), std::stoi(yString)) << std::endl;
		}

		///Hilfe
		else if (calculation.find("help") != -1) {
			Calculator::calc_help();
		}


		///Exit program
		else if (calculation == "exit") {}

		///Invalid Command error message
		else {
			std::cerr << "Not a valid command!" << std::endl; //FEHLER: Wird fälschlicherweise ausgelöst, wenn "operation" in "matrixMain()" = "exit" ist.
		}
	}
}

///Calculator startup
void Calculator::calc_start() {

	std::cout << "STANDARD CALCULATION MODE" << "\n-----------------------" << std::endl;
	std::cout << "To view possible commands type 'help'" << std::endl;
	std::cout << "Type Calculation" << std::endl;

	calcEngine();
}