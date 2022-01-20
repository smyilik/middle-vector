#include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int>& lst)
{
	vector<int> negative, positive, zero;
	int maxPositive = 0, minPositive = 2147483647, maxNegative = -2147483648, minNegative = 0;
	itc_pos_neg_separator_lst(lst, negative, zero, positive);
	if (negative.size() > 0) {
		for (int i = 0; i < negative.size(); i++) {
			if (negative[i] > maxNegative) maxNegative = negative[i];
			if (negative[i] < minNegative) minNegative = negative[i]; } }
	else {
		minNegative = 0;
		maxNegative = 0; }
	if (positive.size() > 0) {
		for (int i = 0; i < positive.size(); i++) {
			if (positive[i] > maxPositive) maxPositive = positive[i];
			if (positive[i] < minPositive) minPositive = positive[i]; } }
	else {
		minPositive = 0;
		maxPositive = 0; }
	int positiveSize = positive.size(), negativeSize = negative.size();
	if (positiveSize == 0) positiveSize = 1;
	if (negativeSize == 0) negativeSize = 1;
	double dnegativeSize = negativeSize, dpositiveSize = positiveSize, positiveSum = itc_sumlst(positive), negativeSum = itc_sumlst(negative), positiveAverage = positiveSum / positiveSize, negativeAverage = negativeSum / negativeSize;
	itc_pos_neg_analysis_lst_output(positive.size(), negative.size(), maxPositive, maxNegative, minPositive, minNegative,
		itc_sumlst(positive), itc_sumlst(negative), positiveAverage, negativeAverage, zero.size());
}

void itc_pos_neg_analysis_lst_output(int positiveSize, int negativeSize, int maxPositive, int maxNegative, int minPositive,
	int minNegative, int positiveSum, int negativeSum, double positiveAverage, double negativeAverage, int zeros)
{
	cout << "  Positive:\t\t\tNegative:" << endl
		<< "  Amount of numbers: " << positiveSize << "\t\tAmount of numbers: " << negativeSize << endl
		<< "  Maximum number: " << maxPositive << "\t\tMaximum number: " << maxNegative << endl
		<< "  Minimum number: " << minPositive << "\t\tMinimum number: " << minNegative << endl
		<< "  Sum of numbers: " << positiveSum << "\t\tSum of numbers: " << negativeSum << endl
		<< "  Average number: " << positiveAverage << "\t\tAverage number: " << negativeAverage << endl
		<< endl << "  Amount of zeros: " << zeros << endl;
}