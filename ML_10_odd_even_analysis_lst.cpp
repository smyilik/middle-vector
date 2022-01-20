#include "middle_list.h"

void itc_odd_even_analysis_lst(const vector <int>& lst)
{
	vector<int> even, odd;
	int evenMax = -2147483648, evenMin = 2147483647, oddMax = -2147483648, oddMin = 2147483647;
	itc_odd_even_separator_lst(lst, even, odd);
	if (even.size() > 0) {
		for (int i = 0; i < even.size(); i++) {
			if (even[i] > evenMax) evenMax = even[i];
			if (even[i] < evenMin) evenMin = even[i];} }
	else {
		evenMax = 0;
		evenMin = 0; }
	if (odd.size() > 0) {
		for (int i = 0; i < odd.size(); i++) {
			if (odd[i] > oddMax) oddMax = odd[i];
			if (odd[i] < oddMin) oddMin = odd[i]; } }
	else {
		oddMax = 0;
		oddMin = 0; }
	cout<< "  List analysis:" << endl
		<< "  Amount of even numbers: " << even.size() << "\t\tAmount of odd numbers: " << odd.size() << endl
		<< "  Maximum even number: " << evenMax << "\t\tMaximum odd number: " << oddMax << endl
		<< "  Minimum even number: " << evenMin << "\t\tMinimum odd number: " << oddMin << endl
		<< "  Sum of even numbers: " << itc_sumlst(even) << "\t\tSum of odd numbers: " << itc_sumlst(odd) << endl;
}