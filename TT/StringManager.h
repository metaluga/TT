#pragma once
#include <set>
#include <string>
#include <iostream>
#include <algorithm>

class StringManager
{
public:
	StringManager() {};
	virtual ~StringManager() {};
	int getWordsNumber(const std::string& str);
private:
	std::set<std::string> split(const std::string& str, int delimiter(int) = ::isspace);
};

