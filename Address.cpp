#include"Address.h"
Address::Address(char* house_Number, char* Street_Name, char * City, char* County)
{
	int w = strlen(house_Number)+1,x= strlen(street_Name)+1,y= strlen(city)+1,z=strlen(County)+1;
	house_Number = new char[w];
	Street_Name = new char[x];
	city = new char[y];
	County = new char[z];
	int i = 0;
	for(; i < w; i++)
	{
		house_Number[i] = house_Number[i];
	}
	house_Number[i] = 0;
	for (int i = 0; i < x; i++)
	{
		street_Name[i] = street_Name[i];
	}
	street_Name[i] = 0;
	for (int i = 0; i < y; i++)
	{
		city[i] = city[i];
	}
	city[i] = 0;
	for (int i = 0; i < z; i++)
	{
		county[i] = county[i];
	}
	County[i] = 0;
}
Address::Address(const Address&other)
{
	int w = strlen(other.house_Number)+!, x = strlen(other.street_Name)+1, y = strlen(other.city)+1, z = strlen(other.county)+1;
	house_Number = new char[w];
	street_Name = new char[x];
	city = new char[y];
	county = new char[z];
	int i = 0;
	for (; i < w; i++)
	{
		house_Number[i] = other.house_Number[i];
	}
	house_Number[i] = 0;
	for (int i = 0; i < x; i++)
	{
		street_Name[i] = other.street_Name[i];
	}
	street_Name[i] = 0;
	for (int i = 0; i < y; i++)
	{
		city[i] = other.city[i];
	}
	city[i] = 0;
	for (int i = 0; i < z; i++)
	{
		county[i] = other.county[i];
	}
	county[i] = 0;
}
const Address & Address::  operator=(const Address& other)
{
	int w = strlen(other.house_Number)+1, x = strlen(other.street_Name)+1, y = strlen(other.city)+1, z = strlen(other.county)+1;
	delete house_Number;
	delete street_Name;
	delete city;
	delete county;
	house_Number = new char[w];
	street_Name = new char[x];
	city = new char[y];
	county = new char[z];
	int i = 0;
	for (; i < w; i++)
	{
		house_Number[i] = other.house_Number[i];
	}
	house_Number[i] = 0;
	for (int i = 0; i < x; i++)
	{
		street_Name[i] = other.street_Name[i];
	}
	street_Name[i] = 0;
	for (int i = 0; i < y; i++)
	{
		city[i] = other.city[i];
	}
	city[i] = 0;
	for (int i = 0; i < z; i++)
	{
		county[i] = other.county[i];
	}
	county[i] = 0;
	return *this;
}
Address::~Address()
{
	delete house_Number;
	delete street_Name;
	delete city;
	delete county;
}