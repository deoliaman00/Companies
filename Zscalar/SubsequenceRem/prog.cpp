#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>

std::list<int> findSubsequence(const std::vector<int> &arr)
{
    std::unordered_set<int> set;
    std::list<int> list;
    std::list<int> emptyList;
    emptyList.push_back(-1);
    int maxInteger = 0;

    for (int i : arr)
    {
        if (set.count(i) > 0)
        {
            if (maxInteger <= i)
            {
                maxInteger = i;
                list.push_back(i);
            }
            else
            {
                return emptyList;
            }
        }
        else
        {
            set.insert(i);
        }
    }
    return list;
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 2, 4, 5, 6, 3, 7};
    std::list<int> subsequence = findSubsequence(arr);

    if (subsequence.front() == -1)
    {
        std::cout << "No increasing subsequence found." << std::endl;
    }
    else
    {
        std::cout << "Increasing subsequence: ";
        for (int num : subsequence)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
