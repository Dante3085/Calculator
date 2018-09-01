#pragma once
#include <string>
#include <algorithm>
#include <ctime>

/*"Constants" contains important mathematical constants.*/
namespace Constants {

	const double e = 2.71828182845904523536028747135266249;										//e, Napier's constant, or Euler's number.
	const std::string eString = "2.71828182845904523536028747135266249";

	const double pi = 3.14159265358979323846264338327950288;									//Pi, Archimedes' constant or Ludolph's number.
	const std::string piString = "3.14159265358979323846264338327950288";

	const double sq2 = 1.41421356237309504880168872420969807;
	const std::string sq2String = "1.41421356237309504880168872420969807";						//Pythagoras' constant, square root of 2.

	const double sq3 = 1.73205080756887729352744634150587236;
	const std::string sq3String = "1.73205080756887729352744634150587236";						//Theodorus' constant, square root of 3.

	const double sq5 = 2.23606797749978969640917366873127623;
	const std::string sq5String = "2.23606797749978969640917366873127623";						//square root of 5

	const double eulMasch = 0.57721566490153286060651209008240243;
	const std::string eulMaschString = "0.57721566490153286060651209008240243";					//Euler–Mascheroni constant

	const double goldRat = 1.61803398874989484820458683436563811;
	const std::string goldRatString = "1.61803398874989484820458683436563811";					//Golden ratio

	const double meissMert = 0.26149721284764278375542683860869585;
	const std::string meissMertString = "0.26149721284764278375542683860869585";				//Meissel–Mertens constant

	const double bern = 0.28016949902386913303;
	const std::string bernString = "0.28016949902386913303";									//Bernstein's constant

	const double gaussKuzWir = 0.30366300289873265859744812190155623;
	const std::string gaussKuzWirString = "0.30366300289873265859744812190155623";				//Gauss–Kuzmin–Wirsing constant

	const double hafSarMc = 0.35323637185499598454351655043268201;
	const std::string hafSarMcString = "0.35323637185499598454351655043268201";					//Hafner–Sarnak–McCurley constant

	const double land = 0.5;
	const std::string landString = "0.5";														//Landau's constant

	const double omega = 0.56714329040978387299996866221035554;
	const std::string omegaString = "0.56714329040978387299996866221035554";					//Omega constant

	const double golDick = 0.62432998854355087099293638310083724;
	const std::string golDickString = "0.62432998854355087099293638310083724";					//Golomb–Dickman constant

	const double cahen = 0.6434105462;
	const std::string cahenString = "0.6434105462";                                             //Cahen's constant

	const double twinPrime = 0.66016181584686957392781211001455577;
	const std::string twinPrimeString = "0.66016181584686957392781211001455577";				//Twin prime constant

	const double laplaceLimit = 0.66274341934918158097474209710925290;
	const std::string laplaceLimitString = "0.66274341934918158097474209710925290";				//Laplace limit

	const double embTre = 0.70258;
	const std::string embTreString = "0.70258";													//Embree–Trefethen constant

	const double landRam = 0.76422365358922066299069873125009232;
	const std::string landRamString = "0.76422365358922066299069873125009232";					//Landau–Ramanujan constant

	const double allaGrin = 0.8093940205;
	const std::string allaGrinString = "0.8093940205";											//Alladi–Grinstead constant

	const double brunquadrup = 0.87058838;
	const std::string brunquadrupString = "0.87058838";											//Brun's constant for prime quadruplets

	const double catalan = 0.91596559417721901505460351493238411;
	const std::string catalanString = "0.91596559417721901505460351493238411";					//Catalan's constant

	const double legendre = 1;
	const std::string legendreString = "1";														//Legendre's constant

	const double lengyel = 1.0986858055;
	const std::string lengyelString = "1.0986858055";											//Lengyel's constant

	const double vis = 1.13198824;
	const std::string visString = "1.13198824";													//Viswanath's constant

	const double apery = 1.20205690315959428539973816151144999;
	const std::string aperyString = "1.20205690315959428539973816151144999";					//Apéry's constant

	const double conway = 1.30357726903429639125709911215255189;
	const std::string conwayString = "1.30357726903429639125709911215255189";					//Conway's constant

	const double mill = 1.30637788386308069046861449260260571;
	const std::string millString = "1.30637788386308069046861449260260571";						//Mills' constant

	const double plastic = 1.32471795724474602596090885447809734;
	const std::string plasticString = "1.32471795724474602596090885447809734";					//Plastic constant

	const double ramanSold = 1.45136923488338105028396848589202744;
	const std::string ramanSoldString = "1.45136923488338105028396848589202744";				//Ramanujan–Soldner constant

	const double backhouse = 1.45607494858268967139959535111654356;
	const std::string backhouseString = "1.45607494858268967139959535111654356";				//Backhouse's constant

	const double porter = 1.4670780794;
	const std::string porterString = "1.4670780794";											//Porter's constant

	const double lieb = 1.5396007178;
	const std::string liebString = "1.5396007178";												//Lieb's square ice constant

	const double erdBor = 1.60669515241529176378330152319092458;
	const std::string erdBorString = "1.60669515241529176378330152319092458";					//Erdoes–Borwein constant

	const double niven = 1.70521114010536776428855145343450816;
	const std::string nivenString = "1.70521114010536776428855145343450816";					//Niven's constant

	const double brunTwin = 1.902160583104;
	const std::string brunTwinString = "1.902160583104";										//Brun's constant for twin primes

	const double uniParabol = 2.29558714939263807403429804918949039;
	const std::string uniParabolString = "2.29558714939263807403429804918949039";				//Universal parabolic constant

	const double feigenbaum2 = 2.50290787509589282228390287321821578;
	const std::string feigenbaum2String = "2.50290787509589282228390287321821578";				//2nd Feigenbaum constant

	const double sierpinski = 2.58498175957925321706589358738317116;
	const std::string sierpinskiString = "2.58498175957925321706589358738317116";				//Sierpinski's constant

	const double khinchin = 2.68545200106530644530971483548179569;
	const std::string khinchinString = "2.68545200106530644530971483548179569";					//Khinchin's constant

	const double fransRob = 2.80777024202851936522150118655777293;
	const std::string fransRobString = "2.80777024202851936522150118655777293";					//Fransoen–Robinson constant

	const double levy = 3.27582291872181115978768188245384386;
	const std::string levyString = "3.27582291872181115978768188245384386";						//Lévy's constant

	const double reciprocFibo = 3.35988566624317755317201130291892717;
	const std::string reciprocFiboString = "3.35988566624317755317201130291892717";				//Reciprocal Fibonacci constant

	const double feigenbaum1 = 4.66920160910299067185320382046620161;
	const std::string feigenbaum1String = "4.66920160910299067185320382046620161";				//1st Feigenbaum constant
}

/*"BasicMath" contains basic mathematical function.*/
namespace BasicMath {
	
	//Modulo Calculation with integers.
	double mod(int x, int y) {
		return x % y;
	}

	//x to the power of y
	template<typename T>
	T Pow(T x, T y) {
		double erg;
		if (y == -1) {
			erg = 1 / x;
		}

		else if (y < -1) {
			y *= -1;
			for (int i = 0; i < y; i++) {
				erg = (1 / x) * (1 / x);
			}
		}

		else {
			erg = 1;
			for (int i = 0; i < y; i++) {
				erg *= x;
			}
		}
		return erg;
	}

	//Adds two numbers and returns the value as specified by template.
	template<typename T>
	T add(T x, T y) {
		return x + y;
	}

	//Subtracts two numbers and returns the value as specified by template.
	template<typename T>
	T sub(T x, T y) {
		return x - y;
	}

	//Multiplies two numbers and returns the value as specified by template.
	template<typename T>
	T mult(T x, T y) {
		return x * y;
	}

	//Divides two numbers and returns the value as specified by template.
	template<typename T>
	T div(T x, T y) {
		return x / y;
	}
}

/*"AdvMath" contains advanced mathematical functions.*/
namespace AdvMath {

	void sum(std::string kString, std::string nString) {
		GenUtil::measureTime("t1");

		int k = std::stod(kString);
		int n = std::stod(nString);
		double erg = 0;

		if ((n % 2) == 0 && (n % 3) != 0 && n != 2) {
			while (k <= (n / 2)) {
				erg += k;
				k++;
			}
			erg = (erg * 4) - (n / 2);
		}

		else if ((n % 3) == 0 && n != 3) {
			while (k <= (n / 3)) {
				erg += k;
				k++;
			}
			erg = (erg * 9) - ((n / 3) * 3);
		}

		else {
			while (k <= n) {
				erg += k;
				k++;
			}
		}
		std::cout << "\t" << erg << std::endl;

		GenUtil::measureTime("t2");
	}

	//Multiplikation von Matrix mit Skalar
	std::vector< std::vector<double> > matrixSkalar(std::vector< std::vector<double> > mat, int matZeilen, int matSpalten, double skalar) {
		typedef std::vector< std::vector<double> > matrix;
		matrix matErg(matZeilen, std::vector<double>(matSpalten));

		for (int i = 0; i < matZeilen; i++) {
			for (int x = 0; x < matSpalten; x++) {
				matErg[i][x] = mat[i][x] * skalar;
			}
		}
		return matErg;
	}

	//Multiplikation von Matrizen
	std::vector< std::vector<double> > matrixMult(std::vector< std::vector<double> > mat1, std::vector< std::vector<double> > mat2, int mat1Zeilen, int mat1Spalten) {
		typedef std::vector< std::vector<double> > matrix;
		matrix matErg(mat1Zeilen, std::vector<double>(mat1Spalten));

		for (int x = 0; x < mat1Zeilen; x++) {
			for (int j = 0; j < mat1Zeilen; j++) {
				double result = 0;
				for (int y = 0; y < mat1Spalten; y++) {
					result += mat1[x][y] * mat2[y][j];
				}
				matErg[x][j] = result;
			}
		}
		return matErg;
	}

	//Addition von Matrizen
	std::vector< std::vector<double> > matrixAdd(std::vector< std::vector<double> > mat1, std::vector< std::vector<double> > mat2, int mat1Zeilen, int mat2Spalten) {
		typedef std::vector< std::vector<double> > matrix;
		matrix matErg(mat1Zeilen, std::vector<double>(mat2Spalten));

		for (int i = 0; i < mat1Zeilen; i++) {
			for (int x = 0; x < mat2Spalten; x++) {
				matErg[i][x] = mat1[i][x] + mat2[i][x];
			}
		}
		return matErg;
	}

	//Subtraktion von Matrizen
	std::vector< std::vector<double> > matrixSub(std::vector< std::vector<double> > mat1, std::vector< std::vector<double> > mat2, int mat1Zeilen, int mat2Spalten) {
		typedef std::vector< std::vector<double> > matrix;
		matrix matErg(mat1Zeilen, std::vector<double>(mat2Spalten));

		for (int i = 0; i < mat1Zeilen; i++) {
			for (int x = 0; x < mat2Spalten; x++) {
				matErg[i][x] = mat1[i][x] - mat2[i][x];
			}
		}
		return matErg;
	}

	//Controls matrix process
	void matrixMain() {
		std::cout << "MATRIX CALCULATION MODE" << "\n-----------------------" << std::endl;

		int matCount;
		std::cout << "Anzahl der Matrizen (2, 4, 6, 8, 10)" << std::endl;
		std::cin >> matCount;
		std::cout << std::endl;
		typedef std::vector< std::vector<double> > matrix;

		if (matCount == 2) {
			//Erstellung von Matrix 1
			std::cout << "Matrix 1" << "\n-----------" << std::endl;
			int zeilen1, spalten1;
			std::cout << "Zeilen: ";
			std::cin >> zeilen1;
			std::cout << "Spalten: ";
			std::cin >> spalten1;

			matrix mat1(zeilen1, std::vector<double>(spalten1));

			//Befüllung von Matrix 1
			std::cout << "Matrix 1 befuellen" << std::endl;

			for (int i = 0; i < zeilen1; i++) {
				for (int x = 0; x < spalten1; x++) {
					std::cin >> mat1[i][x];
				}
			}

			std::cout << std::endl;

			//Erstellung von Matrix 2
			std::cout << "Matrix 2" << "\n-----------" << std::endl;
			int zeilen2, spalten2;
			std::cout << "Zeilen: ";
			std::cin >> zeilen2;
			std::cout << "Spalten: ";
			std::cin >> spalten2;

			matrix mat2(zeilen2, std::vector<double>(spalten2));

			//Befüllung von Matrix 2
			std::cout << "Matrix 2 befuellen" << std::endl;

			for (int i = 0; i < zeilen2; i++) {
				for (int x = 0; x < spalten2; x++) {
					std::cin >> mat2[i][x];
				}
			}

			std::cout << std::endl;

			//Erstellung der Ergebnismatrix
			int zeilenErg = zeilen1;
			int spaltenErg = spalten2;

			matrix matErg(zeilenErg, std::vector<double>(spaltenErg));

			//Befüllung der Ergebnismatrix
			std::string operation = "";

			while (operation != "exit") {
				bool operationPossible = true;
				std::cout << "Operation: ";
				std::cin >> operation;

				//Addition
				if (operation == "+") {
					if (zeilen1 != zeilen2 || spalten1 != spalten2) {
						std::cerr << "Fuer eine Addition muessen beide Matrizen 'die gleiche' Anzahl an Zeilen und Spalten besitzen!" << std::endl;
						operationPossible = false;
					}
					else {
						matErg = matrixAdd(mat1, mat2, zeilen1, spalten2);
					}
				}

				//Subtraktion
				else if (operation == "-") {
					if (zeilen1 != zeilen2 || spalten1 != spalten2) {
						std::cerr << "Fuer eine Subtraktion muessen beide Matrizen 'die gleiche' Anzahl an Zeilen und Spalten besitzen!" << std::endl;
						operationPossible = false;
					}
					else {
						matErg = matrixSub(mat1, mat2, zeilen1, spalten2);
					}
				}

				//Multiplikation
				else if (operation == "*") {
					if (spalten1 != zeilen2) {
						std::cerr << "Fuer eine Multiplikation muss die Spaltenanzahl der ersten Matrix mit der Zeilenanzahl der zweiten Matrix uebereinstimmen!" << std::endl;
						operationPossible = false;
					}
					else {
						matErg = matrixMult(mat1, mat2, zeilen1, spalten1);
					}
				}

				//Multiplikation mit Skalar
				else if (operation == "skalar") {
					double skalar;
					std::string chooseMatrix;
					std::cout << "Matrix: ";
					std::cin >> chooseMatrix;
					std::cout << "Skalar: ";
					std::cin >> skalar;

					if (chooseMatrix == "mat1") {			//FEHLER: Funktioniert nicht mit "Matrix 1" als String.
						matErg = matrixSkalar(mat1, zeilen1, spalten1, skalar);
					}

					else if (chooseMatrix == "mat2") {		//FEHLER: Funktioniert nicht mit "Matrix 2" als String.
						matErg = matrixSkalar(mat2, zeilen2, spalten2, skalar);
					}
				}

				//Ausstieg aus "MATRIX CALCULATION MODE"
				else if (operation == "exit") {
					std::cout << std::endl;
					std::cout << "STANDARD CALCULATION MODE" << "\n-----------------------" << std::endl;
				}

				//Ausgabe der Ergebnismatrix
				if (operationPossible == true && operation != "exit") {
					std::cout << "Ergebnismatrix" << "\n----------------" << std::endl;

					for (int i = 0; i < zeilenErg; i++) {
						for (int x = 0; x < spaltenErg; x++) {
							std::cout << matErg[i][x] << "\t";
						}
						std::cout << "\n";
					}
				}
				std::cout << std::endl;
			}
		}

		/*if (matCount == 4) {
		matrix mat1(zeilen, std::vector<double>(spalten));
		matrix mat2(zeilen, std::vector<double>(spalten));
		matrix mat3(zeilen, std::vector<double>(spalten));
		matrix mat4(zeilen, std::vector<double>(spalten));
		}

		if (matCount == 6) {
		matrix mat1(zeilen, std::vector<double>(spalten));
		matrix mat2(zeilen, std::vector<double>(spalten));
		matrix mat3(zeilen, std::vector<double>(spalten));
		matrix mat4(zeilen, std::vector<double>(spalten));
		matrix mat5(zeilen, std::vector<double>(spalten));
		matrix mat6(zeilen, std::vector<double>(spalten));
		}

		if (matCount == 8) {
		matrix mat1(zeilen, std::vector<double>(spalten));
		matrix mat2(zeilen, std::vector<double>(spalten));
		matrix mat3(zeilen, std::vector<double>(spalten));
		matrix mat4(zeilen, std::vector<double>(spalten));
		matrix mat5(zeilen, std::vector<double>(spalten));
		matrix mat6(zeilen, std::vector<double>(spalten));
		matrix mat7(zeilen, std::vector<double>(spalten));
		matrix mat8(zeilen, std::vector<double>(spalten));
		}

		if (matCount == 10) {
		matrix mat1(zeilen, std::vector<double>(spalten));
		matrix mat2(zeilen, std::vector<double>(spalten));
		matrix mat3(zeilen, std::vector<double>(spalten));
		matrix mat4(zeilen, std::vector<double>(spalten));
		matrix mat5(zeilen, std::vector<double>(spalten));
		matrix mat6(zeilen, std::vector<double>(spalten));
		matrix mat7(zeilen, std::vector<double>(spalten));
		matrix mat8(zeilen, std::vector<double>(spalten));
		matrix mat9(zeilen, std::vector<double>(spalten));
		matrix mat10(zeilen, std::vector<double>(spalten));
		}*/

	}

	//Creates random Numbers between "0" and "RAND_MAX"
	std::string rnd(int rndDegree) { //"rndDegree" controls how far random numbers are apart. 
		srand(time(0));
		for (int i = 0; i < rndDegree; i++) {
			rand();
		}
		std::string rndString = std::to_string(rand());
		return rndString;
	}

	//Creates random Numbers between "rangeLow" and "rangeHigh". "rangeHigh" is still limited by "RAND_MAX".
	std::string rnd(int rndDegree, int rangeLow, int rangeHigh) { //"rangeLow" and "rangeHigh" control the intervall in which random numbers are created.
		srand(time(0));
		for (int i = 0; i < rndDegree; i++) {
			rand();
		}
		std::string rndString = std::to_string(rangeLow + (rand() % rangeHigh));
		return rndString;
	}

	//Standard Derivation.
	std::string deriveStandard(std::string function) {

		//Unnecessary symbols are being deleted out of String "function".
		function = GenUtil::cutCharFromString(function, ' ');
		function = GenUtil::cutCharFromString(function, '(');
		function = GenUtil::cutCharFromString(function, ')');
		function = GenUtil::cutCharFromString(function, '*');
		function = GenUtil::cutCharFromString(function, '^');

		size_t xCount = std::count(function.begin(), function.end(), 'x');	//Number of "x"s in String "function" is being determined, to determine how big the dynamic Arrays for holding the "a"s and "n"s need to be.
		int eraseCount = 1;													//This number is added to "function.find("+")" in the loop, to correctly erase the parts from String "function" that already have been saved in the Arrays.

																			//String "function" is separated into Substrings to later extract all the "a"s and "n"s
		std::string *anString = new std::string[xCount];
		for (unsigned int i = 0; i < xCount; i++) {							//"i" has to be "unsigned" since "xCount" is as well.
			anString[i] = function.substr(0, function.find("+"));			//"an" an der Stelle "i" wird mit einem Substring von Index "0" bis zum ersten "+" befüllt.
			function.erase(0, function.find("+") + eraseCount);				//Der eben in "an" gesteckte Stringanteil von "function" wird aus diesem gelöscht, damit im nächsten Schleifendurchgang komplett identisch verfahren werden kann.
			if (eraseCount < 1) {											//Da "eraseCount" nicht mehr als "Im 2. Schleifendurchgang +1 auf function.find("+") draufschlagen" erledigen soll, wird es durch diese if-Abfrage nachdem es seine Aufgabe erledigt hat, sozusagen außer Gefecht gesetzt.
				eraseCount++;
			}
			//std::cout << "anString: " << anString[i] << std::endl;
		}

		//std::cout << std::endl;

		//Hier werden die jeweiligen "a" und "n" aus den Substrings isoliert. In "aS1" liegen alle "a"s und in "nS1" alle "n"s.
		std::string *aString = new std::string[xCount];
		std::string *nString = new std::string[xCount];
		for (unsigned int x = 0; x < xCount; x++) {
			aString[x] = anString[x].substr(0, anString[x].find("x"));
			//std::cout << "aString: " << aString[x] << std::endl;

			nString[x] = anString[x].substr(anString[x].find("x") + 1, anString[x].back());
			//std::cout << "nString: " << nString[x] << std::endl;
		}

		//std::cout << std::endl;


		//Hier werden die isolierten "a" und "n" in "double" Zahlen umgewandelt. In "aD1" liegen alle "a"s und in "nD1" alle "n"s.
		double *aDouble = new double[xCount];
		double *nDouble = new double[xCount];
		for (unsigned int z = 0; z < xCount; z++) {
			aDouble[z] = std::stod(aString[z], nullptr);
			//std::cout << "aDouble[z]: " << aDouble[z] << std::endl;

			nDouble[z] = std::stod(nString[z], nullptr);
			//std::cout << "nDouble[z]: " << nDouble[z] << std::endl;
		}

		//std::cout << std::endl;

		//Essenzielle Ableitungsprozesse. Jedes "a" wird mit seinem jeweiligen "n" multipliziert und von jedem "n" wird "1" abgezogen. 
		double *aErgebnisDouble = new double[xCount];
		double *nErgebnisDouble = new double[xCount];
		for (unsigned int a = 0; a < xCount; a++) {
			aErgebnisDouble[a] = aDouble[a] * nDouble[a];
			//std::cout << "aErgebnisDouble[a]: " << aErgebnisDouble[a] << std::endl;

			nErgebnisDouble[a] = nDouble[a] - 1;
			//std::cout << "nErgebnisDouble[a]: " << nErgebnisDouble[a] << std::endl;
		}

		//std::cout << std::endl;

		//Zahlen werden wieder in Strings umgewandelt, damit die komplette abgeleitete Funktion in einem String stehen kann.
		std::string *aErgebnisString = new std::string[xCount];
		std::string *nErgebnisString = new std::string[xCount];
		for (unsigned int b = 0; b < xCount; b++) {
			aErgebnisString[b] = std::to_string(aErgebnisDouble[b]);
			//std::cout << "aErgebnisString[b]: " << aErgebnisString[b] << std::endl;

			nErgebnisString[b] = std::to_string(nErgebnisDouble[b]);
			//std::cout << "nErgebnisString[b]: " << nErgebnisString[b] << std::endl;
		}

		//Abgeleitete Funktion wird in einem String zusammengesetzt.
		std::string derivedFunction = "";
		for (unsigned int c = 0; c < xCount; c++) {
			derivedFunction.append(aErgebnisString[c]);
			derivedFunction.append("*x^(");
			derivedFunction.append(nErgebnisString[c]);

			if (c < xCount - 1) {
				derivedFunction.append(")+");
			}
		}
		derivedFunction.append(")");

		//Deletion of dynamic variables.
		delete[] nErgebnisString;
		delete[] aErgebnisString;

		delete[] nErgebnisDouble;
		delete[] aErgebnisDouble;

		delete[] nDouble;
		delete[] aDouble;

		delete[] aString;
		delete[] nString;

		delete[] anString;

		//String "derivedFunction" is being returned.
		return derivedFunction;
	}

	//Derivation of product.
	std::string deriveProduct(std::string function) {

		//Number of "x"s in String "function" is being determined.
		size_t xCount = std::count(function.begin(), function.end(), 'x');

		//String "function" is being separated into "u(x)" and "v(x)".
		std::string u = function.substr(0, function.find(")") + 1);
		//std::cout << "\tu(x): " << u << std::endl;

		std::string v = function.substr(function.find(")") + 2, function.back());
		//std::cout << "\tv(x): " << v << std::endl;

		//std::cout << std::endl;

		//"u(x)" and "v(x)" are being derived.
		std::string uStrich = deriveStandard(u);
		//std::cout << "\tu'(x) = " << uStrich << std::endl;

		std::string vStrich = deriveStandard(v);
		//std::cout << "\tv'(x) = " << vStrich << std::endl;

		//std::cout << std::endl;

		//"a"s and "n"s are being extracted out of "u(x)", "v(x)","u'(x)" and "v'(x)".
		std::string *aString = new std::string[xCount * 2];
		std::string *nString = new std::string[xCount * 2];

		for (unsigned int i = 0; i < xCount * 2; i++) {

			if (i == 0) {
				aString[i] = u.substr(0, u.find("*"));
				//std::cout << "\taString[" << i << "]" << aString[i] << std::endl;

				nString[i] = u.substr(u.find("(") + 1, (u.find(")") - u.find("(")) - 1);
				//std::cout << "\tnString[" << i << "]" << nString[i] << std::endl;
			}

			else if (i == 1) {
				aString[i] = v.substr(0, v.find("*"));
				//std::cout << "\taString[" << i << "]" << aString[i] << std::endl;

				nString[i] = v.substr(v.find("(") + 1, (v.find(")") - v.find("(")) - 1);
				//std::cout << "\tnString[" << i << "]" << nString[i] << std::endl;
			}

			else if (i == 2) {
				aString[i] = uStrich.substr(0, uStrich.find("*"));
				//std::cout << "\taString[" << i << "]" << aString[i] << std::endl;

				nString[i] = uStrich.substr(uStrich.find("(") + 1, (uStrich.find(")") - uStrich.find("(")) - 1);
				//std::cout << "\tnString[" << i << "]" << nString[i] << std::endl;
			}

			else if (i == 3) {
				aString[i] = vStrich.substr(0, vStrich.find("*"));
				//std::cout << "\taString[" << i << "]" << aString[i] << std::endl;

				nString[i] = vStrich.substr(vStrich.find("(") + 1, (vStrich.find(")") - vStrich.find("(")) - 1);
				//std::cout << "\tnString[" << i << "]" << nString[i] << std::endl;
			}
		}

		//std::cout << std::endl;

		//Extracted Strings are being converted to "double".
		double *aDouble = new double[xCount * 2];
		double *nDouble = new double[xCount * 2];

		for (unsigned int i = 0; i < xCount * 2; i++) {
			aDouble[i] = std::stod(aString[i]);
			//std::cout << "\taDouble[" << i << "]" << aDouble[i] << std::endl;

			nDouble[i] = std::stod(nString[i]);
			//std::cout << "\tnDouble[" << i << "]" << nDouble[i] << std::endl;
		}

		//"a1" is multiplied with "a2", "a3" is multiplied with "a4" and "n1" is added with "n2" and "n3" is added with "n4".
		double aErgebnisDouble = 0;
		double nErgebnisDouble = 0;

		aErgebnisDouble = aDouble[2] * aDouble[1] + aDouble[0] * aDouble[3];
		nErgebnisDouble = nDouble[2] + nDouble[1];

		//The resulting numbers are converted to Strings.
		std::string aErgebnisString = std::to_string(aErgebnisDouble);
		std::string nErgebnisString = std::to_string(nErgebnisDouble);

		//Derived Function is put together in String "derivedFunction".
		std::string derivedFunction = aErgebnisString;
		derivedFunction.append("x^(");
		derivedFunction.append(nErgebnisString);
		derivedFunction.append(")");

		//Deletion of dynamic Variables.
		delete[] aString;
		delete[] nString;

		delete[] aDouble;
		delete[] nDouble;

		//String "derivedFunction" is being returned.
		return derivedFunction;
	}

	//Main derivation function. Controls derivation process.
	void deriveMain(std::string function) {

		//Backup of String "function" for other functions to use.
		std::string functionBackup = function;

		//Counts all "*" to for derivation by "product rule".
		size_t mulCount = std::count(function.begin(), function.end(), '*');

		//Unnecessary symbols are being deleted out of String "function".
		function = GenUtil::cutCharFromString(function, ' ');
		function = GenUtil::cutCharFromString(function, '(');
		function = GenUtil::cutCharFromString(function, ')');
		function = GenUtil::cutCharFromString(function, '*');
		function = GenUtil::cutCharFromString(function, '^');

		//Error Message: "No function entered" (i.e. String "function" is empty).
		if (function == "") {
			std::cerr << "\tYou didn't enter a valid function!" << std::endl;
		}

		//Error Message: "No function entered" (i.e. String "function" only contains letters).
		else if (function != "" && function.find("x") == -1 && function.find("eul") == -1 && GenUtil::checkIfStringContainsLetter(function) == true) {
			std::cerr << "\tYou didn't enter a valid function!" << std::endl;
		}

		//Test for derivation by "product rule".
		else if (functionBackup.find("*", functionBackup.find("x")) != -1 && mulCount == 3) {
			std::cout << "\tf'(x) = " << deriveProduct(functionBackup) << std::endl;
		}

		//Derivation of a "constant number".
		else if (function.find("x") == -1 && function != "" && GenUtil::checkIfStringContainsLetter(function) == false) {
			std::cout << "\tf'(x) = 0" << std::endl;
		}

		//Derivation of "x".
		else if (function == "x") {
			std::cout << "\tf'(x) = 1" << std::endl;
		}

		//Manner of writing: "x^(n)" = "1*x^(n)"
		else if (function.find("x") == 0) {
			std::string n = function.substr(function.find("x") + 1, function.back());
			double nDouble = std::stod(n, nullptr);
			std::cout << "\tf'(x) = " << n << "*x^(" << nDouble - 1 << ")" << std::endl;
		}

		else {
			std::cout << "\tf'(x) = " << deriveStandard(function) << std::endl;
		}
	}
}