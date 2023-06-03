#include <iostream>
#include <string>

int find_index(const std::string &st1, const std::string &st2)
{
    // Check if st1 is shorter than st2.
    if (st1.length() > st2.length())
    {
        return -1;
    }

    // Iterate over the characters in st2.
    for (int i = 0; i < st2.length(); ++i)
    {
        // If the current character in st2 matches the first character in st1,
        // check if the next `st1.length()` characters in st2 match st1.
        if (st2[i] == st1[0])
        {
            if (st2.substr(i, st1.length()) == st1)
            {
                return i;
            }
        }
    }

    // If we reach the end of st2 without finding a match, return -1.
    return -1;
}

int main()
{
    std::string st1 = "example";
    std::string st2 = "This is an example string.";

    int index = find_index(st1, st2);

    if (index != -1)
    {
        std::cout << "Found at index: " << index << std::endl;
    }
    else
    {
        std::cout << "Not found." << std::endl;
    }

    return 0;
}
