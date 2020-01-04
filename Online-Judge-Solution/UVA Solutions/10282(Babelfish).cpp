#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string> conversion;
    string temp, second;
    getline(cin, temp);

    while (temp.size() !=0)
    {
        stringstream ss(temp);
        ss >> temp >> second;
        conversion[second] = temp;
        getline(cin, temp);
    }

    while (cin >> temp)
    {
        map<string, string>::const_iterator iter = conversion.find(temp);
        if (iter == conversion.end())
            cout << "eh\n";
        else
            cout << iter->second << '\n';
    }
    return 0;
}
