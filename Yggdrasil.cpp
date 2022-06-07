#include "Yggdrasil.h"

Yggdrasil::Yggdrasil() {
	int count = 3 +(rand() % 3);

	for (int i = 0; i < count; i++)
	{
		branches.emplace_back();
	}
}

void Yggdrasil::namesForBranch() {
	for (int i = 0; i < branches.size(); i++)
	{
		branches[i].namesForBranch();
	}
}

int Yggdrasil::findElf(string &name) {
	
	int n = 0;
	for (int i = 0; i < branches.size(); i++) {
		n = branches[i].findName(name);
		if (n > 0) {
			break;
		}
	}
	return n;
}

