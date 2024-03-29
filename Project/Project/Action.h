#ifndef SFMLCLASS_ACTION_H
#define SFMLCLASS_ACTION_H

#include "Common.h"

class Action
{
private:
	std::string m_name{ "NONE" };
	std::string m_type{ "NONE" };

public:
	Action();
	Action(const std::string& name, const std::string& type);

	const std::string& name() const;
	const std::string& type() const;

	std::string toString() const;
};










#endif //SFMLCLASS_ACTION_H
