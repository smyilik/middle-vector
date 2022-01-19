#include "middle_list.h"

string itc_join(vector <char> lst, string sep)
{
	if (lst.size() < 1) return "";
	string out, output;
	for (int i = 0; i < lst.size(); i++) out += lst[i];
	int find = itc_find_str1(out, sep);
	if (find <= 0) return output;
	for (int i = 0; i < find; i++) output += out[i];
	return output;
}

int itc_find_str1(string str1, string str2)
{
	long long ind = 0, st1 = itc_len1(str1), st2 = itc_len1(str2), otv = -1;
	for (int i = 0; i < st1; i++) {
		if (str1[i] == str2[0]) {
			otv = i;
			for (int j = 0; j < st2; j++) {
				if (str1[j + i] == str2[ind]) {
					ind++;
				}
				else {
					ind = 0;
					break;
				}
			}
		}
		if (ind == st2) {
			break;
		}
	}
	return(otv);
}

long long itc_len1(string str)
{
	long long i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return (i);
}