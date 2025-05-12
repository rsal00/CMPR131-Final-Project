#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> s1;
    s1.insert("John");
    s1.insert("Xavier");
    s1.insert("Austin");

    for (auto i : s1)
    {
        cout << i << " ";
    }

    return 0;
}
