#include "Yggdrasil.h"
#include <iostream>

int main()
{
		Yggdrasil wood[5];
		for (int i = 0; i < 5; i++) {
			wood[i].namesForBranch();
		}
		cout << "Enter elf name you want to find\n";
		string str;
		cin >> str;
		int n;
		for (int i = 0; i < 5; i++) {

			n = wood[i].findElf(str);
			if (n > 0) {
				break;
			}
		}
		cout << "Have " << n - 1 << " neighbors\n";
}


