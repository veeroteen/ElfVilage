#pragma once
#include <string>
#include "Branch.h"
#include <random>
#include <vector>

class Yggdrasil
{
public:
	vector <Branch> branches;

	Yggdrasil();
	void namesForBranch();

	int findElf(string &name);
};

