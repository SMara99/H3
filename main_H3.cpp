/*
Programmierer: Mara Suteu
Programdatei: H3 aus der 4-ten Vorlesung
	Eine Classe "shape" mit versciedenen Methoden
*/
#include <iostream>
#include "shape.h"
#include <vector>
#include "shape.cpp"

using namespace std;

void apply(vector <shape*> v, void f()) {
	for (int i = 0; i < v.size(); i++) {
		v[i]->f();
	}
}

int main() {
	shape a, b, c, d, e;
	vector <shape*> v = { &a, &b, &c, &d, &e };
	apply(v,???);
	return 0;
}