#ifndef MAIN_H
#define MAIN_H 1

	#include<iostream>
	#include<stdlib.h>
	using std::cout;
	using std::cin;
	using std::flush;
	using std::endl;
	
	
	void Preview (int* array, int N);
	void Shift(int* array, int N, int M);
	void Program();
	#include"Preview.cpp"
	#include"Shift.cpp"
	#include"Program.cpp"

#endif
