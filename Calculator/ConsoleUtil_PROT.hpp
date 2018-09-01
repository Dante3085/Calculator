#pragma once

namespace ConUtil {
	void setTxtColor(std::string);
	void setCursorXY(int, int);
	void writeTextlineSound(char[], std::string, double);				//Function requires Linker "winmm.lib". Properties of "Name.vcxproj" in Projectfolder-Explorer -> Linker -> Input -> Additional Dependencies.
	void writeTextlineSoundPos(char[], std::string, double, int, int);	//Function requires Linker "winmm.lib".	Properties of "Name.vcxproj" in Projectfolder-Explorer -> Linker -> Input -> Additional Dependencies.
	void writeTextline(std::string, double);
	void writeTextlinePos(std::string, double, int, int);
	void loadAnimRandSound(int, int, int, double);
	void loadAnimRand(int, int, int, double);
}