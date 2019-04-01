#include"Project.h"
Project::Project(char* name, int bud, int dur)
{
	int x = strlen(name)+1;
	for (int i = 0; i < x; i++)
	{
		name[i] = name[i];
	}
	budget = bud;
	duration = dur;
}
Project::Project(const Project& other)
{
	int x = strlen(other.name) + 1;
	name = new char[x];
	for (int i = 0; i < x; i++)
	{
		name[i] = other.name[i];
	}
	budget = other.budget;
	duration = other.duration;
}
void Project::setBudget(int a)
{
	budget = a;
}
const Project & Project:: operator=(const Project& other)
{
	int x = strlen(other.name) + 1;
	delete name;
	name = new char[x];
	for (int i = 0; i < x; i++)
	{
		name[i] = other.name[i];
	}
	budget = other.budget;
	duration = other.duration;
}
Project::~Project()
{
	delete name;
}