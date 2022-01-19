#include "middle_list.h"

string itc_rmstrchar(string str, string less)
{
	string output;
	bool isless = false;
	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < less.size(); j++) {
			if (str[i] == less[j]) isless = true;
		}
		if (!isless) output += str[i];
		isless = false;
	}
	return output;
}