#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> a(2, 3);

    for (auto i = 0; i < a.size(); ++i)
    {
        cout << a.at(i) << endl;
    }
}