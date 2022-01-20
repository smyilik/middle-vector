#include "middle_list.h"

string itc_join(vector <char> lst, string sep)
{
	if (lst.size() < 1) return "";
	string output = "";
	for (int i = 0; i < lst.size(); i++) {
		if (i != lst.size() - 1) {
			output += lst[i];
			for (int j = 0; j < sep.size(); j++) output += sep[j];
		}
		else output += lst[i];
	}
	return output;
}
