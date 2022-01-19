#pragma once

//#include "easy_list/easy_list.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <char> itc_strtlist(string str);                                                                              //01
string itc_join(vector <char> lst, string sep);                                                                      //02
string itc_rmstrspc(string str);                                                                                     //03
string itc_rmstrspc(string str);                                                                                     //04
long itc_sumlst(const vector <int>& lst);                                                                            //05
string itc_rmstrchar(string str, string less);                                                                       //06
long itc_sum_even_lst(const vector <int>& lst);                                                                      //07
void itc_odd_even_separator_lst(const vector <int>& lst, vector <int>& lst1, vector <int>& lst2);                    //08
void itc_pos_neg_separator_lst(const vector <int>& lst, vector <int>& lst1, vector <int>& lst2, vector <int>& lst3); //09
void itc_odd_even_analysis_lst(const vector <int>& lst);                                                             //10
void itc_pos_neg_analysis_lst(const vector <int>& lst);                                                              //11

long long itc_len1(string str);
int itc_find_str1(string str1, string str2);
void itc_pos_neg_analysis_lst_output(int positiveSize, int negativeSize, int maxPositive, int maxNegative, int minPositive,
	int minNegative, int positiveSum, int negativeSum, double positiveAverage, double negativeAverage, int zeros);
