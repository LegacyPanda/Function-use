#include <iostream>
#include <cmath>

using namespace std;

string reverse(string strWord);

int main()
{

    cout << reverse("Hello") << endl;
    return 0;
}

string reverse(string strWord)
{
    string strReverse;

    for(char c : strWord)
    {
        strReverse = c + strReverse;
    }

    return strReverse;
}