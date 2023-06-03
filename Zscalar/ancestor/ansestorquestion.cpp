/*
arr[] = {"John VII", "David V", "John V", "Henry VI", "Henry IV"}

The strings in the list represent names with a Roman numeral suffix, which may indicate a specific order or ranking.
The task mentioned is "ancestral sorting," which implies that the strings need to be sorted based on the Roman numeral suffix in ascending order.

Here's how the list would look like after sorting it based on the Roman numeral suffix in ascending order:

"Henry IV"
"David V"
"John V"
"Henry VI"
"John VII"
So, the sorted list would be: {"Henry IV", "David V", "John V", "Henry VI", "John VII"}.


*/
#include <iostream>
#include <vector>
#include <algorithm>

// Function to extract the Roman numeral suffix from a string
int getRomanNumeralSuffix(const std::string &str)
{
    // Extract the last character from the string
    char lastChar = str.back();

    // Convert the character to an integer based on Roman numeral rules
    int suffix = 0;
    switch (lastChar)
    {
    case 'I':
        suffix = 1;
        break;
    case 'V':
        suffix = 5;
        break;
    case 'X':
        suffix = 10;
        break;
    case 'L':
        suffix = 50;
        break;
    case 'C':
        suffix = 100;
        break;
    case 'D':
        suffix = 500;
        break;
    case 'M':
        suffix = 1000;
        break;
    default:
        suffix = 0;
        break;
    }

    return suffix;
}

// Custom comparison function for sorting based on Roman numeral suffix
bool compareRomanNumeralSuffix(const std::string &str1, const std::string &str2)
{
    int suffix1 = getRomanNumeralSuffix(str1);
    int suffix2 = getRomanNumeralSuffix(str2);
    return suffix1 < suffix2;
}

int main()
{
    // Given list of strings
    std::vector<std::string> s = {"John M", "David V", "John V", "Henry IX", "Henry V"};

    // Sort the list based on Roman numeral suffix
    sort(s.begin(),s.end());
    std::sort(s.begin(), s.end(), compareRomanNumeralSuffix);

    // Output the sorted list
   
    std::cout << "Sorted list: ";
    for (const std::string &str : s)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
