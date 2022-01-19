#include "middle_list.h"

string itc_rmstrspc(string str)
{
	string output;
	for (int i = 0; i < str.size(); i++) if (str[i] != ' ') output += str[i];
	return output;
}