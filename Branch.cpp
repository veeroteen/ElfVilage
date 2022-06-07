#include "Branch.h"

Branch::Branch(Branch *parent) {

	this->parent = parent;
}
Branch::Branch() {

	parent = nullptr;
	int count = 2 +(rand() % 2);
	for (int i = 0; i < count; i++) {
		childrens.emplace_back(this);
	}
}

Branch* Branch::getParent() {
	return parent;
}

Branch* Branch::getChild() {
	return &childrens[0];
}

string Branch::getName() {
	return elfName;
}

void Branch::namesForBranch() {
	cout << "Enter elf name\n";
	cin >> elfName;
	if (parent == nullptr) {
		for (int i = 0; i < childrens.size(); i++) {
			childrens[i].namesForBranch();
		}
	}
}

int Branch::findName(string &name) {
	if (elfName == name) {
		return count();
	}
	for (int i = 0; i < childrens.size(); i++) {
		if (childrens[i].elfName == name) {
			return childrens[i].count();
		}
	}
	return 0;

}

int Branch::count() {
	if (parent != nullptr) {
		return parent->count();
	}
	int count = 0;
	if (elfName != "None")
	{
		count++;
	}
	for (int i = 0; i < childrens.size(); i++) {
		if (elfName != "None")
		{
			count++;
		}
	}
	return count;
}
