// vec.cpp : This file contains the 'main' function. Program execution begins and ends there.
// http://www.cplusplus.com/reference/vector/vector/
// confluence.cec.lab.emc.com:8443
// https://cal-linux.com/tutorials/vectors.html
// https://www.codesdope.com/cpp-stdvector/
// https://www.hackerearth.com/practice/notes/stl-vector/
// https://www.studytonight.com/cpp/stl/stl-container-vector

#include "pch.h"
#include<iostream>
#include<vector>
void assign();


using namespace std;

void print(std::vector <int> const &a) {
	std::cout << "The vector elements are : ";

	for (unsigned int i = 0; i < a.size(); i++)  // Return size
		std::cout << a.at(i) << ' ';   // Access element
}

void accumulator_function2(const std::vector<int> &v, int &acm, int beginIndex, int endIndex)
{
	acm = 0;
	cout << beginIndex << endl;
	cout << endIndex << endl;
	for (int i = beginIndex; i < endIndex; ++i)
	{ 
		cout << "value of i " << i << endl;
		cout << v[i] << endl;
	}
}




void assign() {

	vector<int> v1, v2, v3;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "V1 ";
	for (auto &v : v1)       // : - > is a conditional operator which commonly works like if than else statement, here looks like all values in vector v is placed to reference v
		cout << v << " ";    // auto - > Type Inference refers to automatic deduction of the data type of an expression in a programming language
							 // & - > When a variable is declared as reference, it becomes an alternative name for an existing variable

	cout << endl;

	v2.assign(v1.begin(), v1.end());
	cout << "v2 ";
	for (auto& v : v2) {
		cout << v << " ";
		cout << endl;
	}

	v3.assign(7, 4);
	cout << "V3 ";
	for (auto& v : v3)
		cout << v << " " ;
	cout << endl;

	v3.assign({ 5,6,7 });
	cout << "V3 ";
	for (auto& v : v3)
		cout << v << " ";

}


int main() {
	std::vector<int> a = { 2,4,3,5,6 };
	print(a);

	std::vector<int> v = { 7,8,9};
    int acm = 0;
	accumulator_function2(v,acm,0,3);

	assign();
	
	return 0;
}