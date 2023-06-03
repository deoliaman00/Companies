#include <iostream>
#include <string>

bool isCorrectCapitalUsage(const std::string &word)
{
    int capitalCount = 0;

    for (char c : word)
    {
        if (isupper(c))
        {
            capitalCount++;
        }
    }

    if (capitalCount == word.length() || capitalCount == 0 || (capitalCount == 1 && isupper(word[0])))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::string word = "fLaG";
    bool result = isCorrectCapitalUsage(word);

    std::cout << std::boolalpha;
    std::cout << result << std::endl;

    return 0;
}
