#include "middle_list.h"

long itc_sum_even_lst(const vector <int>& lst)
{
	if (lst.size() < 1) return 0;
	long output = 0;
	for (int i = 0; i < lst.size(); i++) if (i % 2 == 0) output += lst[i];
	return output;
}