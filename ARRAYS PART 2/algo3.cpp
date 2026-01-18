#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool isValidIPv4(const string& ip) {
    vector<string> parts;
    string part;

    for (char ch : ip) {
        if (ch == '.') {
            parts.push_back(part);
            part.clear();
        } else {
            part += ch;
        }
    }
    parts.push_back(part);

    if (parts.size() != 4)
        return false;

    for (const string& p : parts) {
        if (p.empty() || p.size() > 3)
            return false;

        if (p.size() > 1 && p[0] == '0')
            return false;

        for (char c : p) {
            if (!isdigit(c))
                return false;
        }

        int value = stoi(p);
        if (value < 0 || value > 255)
            return false;
    }

    return true;
}

bool isValidIPv6(const string& ip) {
    vector<string> parts;
    string part;

    for (char ch : ip) {
        if (ch == ':') {
            parts.push_back(part);
            part.clear();
        } else {
            part += ch;
        }
    }
    parts.push_back(part);

    if (parts.size() != 8)
        return false;

    for (const string& p : parts) {
        if (p.empty() || p.size() > 4)
            return false;

        for (char c : p) {
            if (!isxdigit(c))
                return false;
        }
    }

    return true;
}

string classifyIPAddress(const string& ip) {
    if (ip.find('.') != string::npos)
        return isValidIPv4(ip) ? "IPv4" : "Invalid";

    if (ip.find(':') != string::npos)
        return isValidIPv6(ip) ? "IPv6" : "Invalid";

    return "Invalid";
}

int main() {
    vector<string> ipAddresses = {
        "192.168.1.1",
        "255.255.255.255",
        "256.100.10.1",
        "2001:0db8:85a3:0000:0000:8A2E:0370:7334",
        "2001:db8::1",
        "abcd:1234:5678:9abc:def0:1234:5678:abcd"
    };

    for (const string& ip : ipAddresses) {
        cout << ip << " -> " << classifyIPAddress(ip) << endl;
    }

    return 0;
}
