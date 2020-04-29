#include <iostream>
#include <string>

int main(int argc, char *argv[])
    {
        int i;
        i = 1;

        if (argc == 1)
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        else
        {
            while(i < argc)
            {
                    std::string str(argv[i]);
                    for(std::string::size_type j=0; j < str.length(); ++j)
                    {
                        std::cout << (char)std::toupper(argv[i][j]);
                    }
                i++;
            }
            std::cout << std::endl;
        }
        return 0;
    }