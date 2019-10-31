#pragma once
#include<iostream>
#include <vector>
#include <string>
#include <fstream>

class File
{

public:
	File();
	~File();
	std::vector<std::string> ReadAllLines();
	bool WriteAllLines(std::vector<std::string> text);

private:
	std::vector<std::string> list;
};