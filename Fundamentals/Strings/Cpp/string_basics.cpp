#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Hello World";
    // length of string
    cout << s.length() << endl;
    // or
    cout << s.size() << endl;
    // Indexing
    cout << s[1] << endl;
    // Extract substring
    cout << s.substr(0, 5) << endl;
    // Find substring
    cout << s.find("Hell") << endl;
    // if substring not found
    if (s.find("car") == string::npos)
    {
        cout << "Not found" << endl;
    }
    // string concatenation
    string c = s + "Rise";
    cout << c << endl;
    // string comparision
    string a = "leo";
    string b = "neo";
    cout << (a == b) << endl;
    // Iteration using for-each loop
    for (char i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // string to int
    int n = stoi("123");
    cout << n << endl;
    // string to long long
    long long no = stoll("1234567890");
    cout << no << endl;
    // number to string
    string v = to_string(07);
    cout << v << endl;

    return 0;
}