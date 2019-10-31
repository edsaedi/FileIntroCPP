#include "File.h"

File::File()
{
}

File::~File()
{
}

std::vector<std::string> File::ReadAllLines()
{
	std::ifstream file("test.txt");
	list.clear();

	if (file.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			list.push_back(line);
		}
	}
	else
	{
		std::cout << "File was closed." << std::endl;
	}

	return list;
}

bool File::WriteAllLines(std::vector<std::string> text)
{
	std::ofstream file("test.text");
	if (file.is_open())
	{
		for (int i = 0; i < text.size(); i++)
		{
			file << i << "\n";
		}
	}
	else
	{
		return false;
	}

	return true;
}


