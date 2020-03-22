#pragma once
#include <string>

using namespace std;

class shape{
	string Name;
	int Flache;

public:
	//defalut constructor
	shape();
	//construtor cu param
	shape(string name, int flache);
	//destructor
	~shape();
	//getter
	string get_name() const;
	int get_flache() const;
	//setter
	void set_name(string new_name);
	void set_flache(int new_flache);

	void f();

};

