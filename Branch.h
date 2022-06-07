#pragma once
#include <string>
#include <random>
#include <vector>
#include <iostream>
using namespace std;
class Branch
{
public:
	Branch* parent;
	vector <Branch> childrens;
	string elfName;

	Branch(Branch* parent);
	Branch();

	Branch* getParent ();

	Branch* getChild();

	string getName();

	void namesForBranch();

	int findName(string &name);

	int count();
	

};

