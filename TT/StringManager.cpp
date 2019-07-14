#include "StringManager.h"

int StringManager::getWordsNumber(const std::string & str)
{
	return split(str).size();
}

std::set<std::string> StringManager::split(const std::string & str, int delimiter(int))
{
	std::set<std::string> result;
	std::string::const_iterator e = str.end();
	std::string::const_iterator i = str.begin();
	while (i != e) {
		i = find_if_not(i, e, delimiter);
		if (i == e) break;
		std::string::const_iterator j = find_if(i, e, delimiter);
		result.insert(std::string(i, j));
		i = j;
	}
	return result;
}
