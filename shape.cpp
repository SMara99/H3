#include "shape.h"
#include <vector>
#include <iostream>
using namespace std;

shape::shape() {
	//default constructor
	Name = "";
	Flache = 0;
}

shape::shape(string new_name, int new_flache) {
	//constructor mit param
	// param : string new_name, int new_flace
	Name = new_name;
	Flache = new_flache;
}

shape::~shape() {
	//destructor
};

string shape::get_name() const {
	//returnaza numele
	return Name;
}

int shape::get_flache() const {
	//returneaza aria
	return Flache;
}

void shape::set_name(string new_name) {
	//refresh la nume
	//param: new_name
	Name = new_name;
}

void shape::set_flache(int new_flache) {
	//refresh la arie
	//param: new_flache
	Flache = new_flache;
}

void shape::f() {
	//schimba aria cu dublul ei
	Flache = Flache * 2;
	
}

void apply(vector <shape*> v,void f()){
	for (int i = 0; i < v.size();i++) {
		v[i]->f();
	}
}