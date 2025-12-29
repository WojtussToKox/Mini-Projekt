#pragma once
#include <vector>

using namespace std;

struct Coordinate {						//Struct of Coordinate (x,y)
		double x;
		double y;

		Coordinate() : x(0.0), y(0.0) {};
		Coordinate(double x, double y) : x(x), y(y) {};
};

class ProblemData {
public:


private:

	int capacity;							//Max carriage
	vector<Coordinate> coords;				//Vector with coordinates of clients
	vector<int> demands;					//Demands of each client
	vector<vector<double>> distanceMatrix;	//Distance matrix of each client to each

};