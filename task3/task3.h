#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void atob(vector<int> &a, vector<vector<int>> &b, int rows, int cols) {

	//vector<vector<int>> a(n, vector<int>(m));

	vector<int>::iterator it;

	vector<vector<int>>::iterator row;
	vector<int>::iterator col;
	b.resize(rows);


	
	for (it = a.begin(); it != a.end(); ++it) {
		if ((it - a.begin()) % cols == 0) {
			row = b.begin() + (it - a.begin()) / cols;
			row->resize(cols);
		}
		col = row->begin() + (it - a.begin()) % cols;
		*col = *it;
	}


	//int len = 0;

	//std::vector<std::vector<int>>::iterator row;
	//std::vector<int>::iterator col;

	//for (row = a.begin(); row != a.end(); ++row) {
	//	for (col = row->begin(); col != row->end(); ++col) {
	//		len++;
	//	}
	//}
	//std::vector<int> b(len);



	//std::vector<int>::iterator it = b.begin();
	//for (row = a.begin(); row != a.end(); ++row) {
	//	for (col = row->begin(); col != row->end(); ++col) {
	//		*it = *col;
	//		++it;
	//	}
	//}

	//return b;
}

void btoa(vector<int>& a, vector<vector<int>> &b) {

	vector<int>::iterator it;

	vector<vector<int>>::iterator row;
	vector<int>::iterator col;


	a.resize(b.size() * b.begin()->size());
	
	for (row = b.begin(); row != b.end(); ++row) {
		for (col = row->begin(); col != row->end(); ++col) {
			it = a.begin() + (row - b.begin()) * b.begin()->size() + (col - row->begin());
			*it = *col;
		}
	}
}

int sumOfArray(vector<vector<int>> a) {
	int sum = 0;

	vector<vector<int>>::iterator row;
	vector<int>::iterator col;

	for (row = a.begin(); row != a.end(); ++row) {
		for (col = row->begin() + min((size_t)(row - a.begin()), row->size() - (row - a.begin())-1); col != row->begin() + max((size_t)(row - a.begin()), row->size() - (row - a.begin())-1) + 1; ++col) {
			sum += *col;
		}
	}

	return sum;
}