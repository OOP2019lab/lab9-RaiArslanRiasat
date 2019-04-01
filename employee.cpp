#include"employee.h"
Employee::Employee(char* name, const Address&a)
	:a(a)
{
	int x = strlen(name) + 1;
	emp_name = new char[x];
	for (int i = 0; i < x; i++)
		emp_name[i] = name[i];

}
Employee::Employee(const Employee & other)
	:a (other.a),p(other.p)
{
	
	int x = strlen(other.emp_name) + 1;
	emp_name = new char[x];
	for (int i = 0; i < x; i++)
		emp_name[i] = other.emp_name[i];
}
const Employee& Employee::operator = (const Employee& other)
{
		a = other.a;
		int x = strlen(other.emp_name) + 1;
		delete[]emp_name;
		emp_name = new char[x];
		for (int i = 0; i < x; i++)
			emp_name[i] = other.emp_name[i];
		for (int i = 0; i < 3; i++)
			p[i] = other.p[i];
	return *this;
}
void Employee::addProject(Project const *ptr)
{
	p = new p * [2];
	for (int i = 0; i < 2; i++)
	{
		p[i] = ptr;
		noofp++;
	}
}
void Employee::removeProject(Project const *ptr)
{
	for (int i = 0; i < 2; i++)
	{
		if (p[i] == ptr)
		{
			p[i] = nullptr;
		}
		
	}
}
Employee::~Employee()
{
	delete emp_name;
}