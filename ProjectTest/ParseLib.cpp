#include "ParseLib.h"

namespace ParseLib {

	int GetCountSymbol(int length) {
		return length * 55 / 100;
	}

	void Update(std::string& line) {
		int len = line.length();
		int count_symbol = GetCountSymbol(len);
		for (int i = len - 1; i >= len - count_symbol; i--)
			line[i] = '*';
	}

}