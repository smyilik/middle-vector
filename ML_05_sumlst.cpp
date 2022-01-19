#include "middle_list.h"

long itc_sumlst(const vector <int>& lst)
{
	if (lst.size() < 1) return 0;
	long output = 0;
	for (int i = 0; i < lst.size(); i++) output += lst[i];
	return output;
}