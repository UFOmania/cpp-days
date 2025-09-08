#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if(ac != 4)
		return (std::cerr << "argument count is invalid: ./<program> <filename> <s1> <s2>\n", EXIT_FAILURE);


	std::ifstream infile(av[1]);
	if (!infile.is_open())
		return (std::cerr << "Fail to open file :" << av[1] << std::endl, EXIT_FAILURE);

	std::ofstream outfile("output");
	if (!outfile.is_open())
	{
		infile.close();
		return (std::cerr << "failed to open the outfile\n", EXIT_FAILURE);
	}


	std::string input;
	while (1)
	{
		if (!std::getline(infile, input))
			break;
			// return (std::cerr << "Failed to getline from the stream\n", EXIT_FAILURE);
		// else
		// {
			int i = 0;
			while(i < (int)input.length())
			{
				if (input.compare(i, strlen(av[2]), av[2]) == 0)
				{
					outfile << av[3];
					i += strlen(av[2]);
				}
				else
				{
					outfile << input[i];
					i++;
				}
			}
			outfile << std::endl;
		// }
	}
	infile.close();
	outfile.close();
		
	
}