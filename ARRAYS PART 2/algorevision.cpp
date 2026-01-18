#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std ;

bool isValidIpV4( const string &Ip){
    vector<string> parts ;
    string part ;

    for (char ch : Ip)
    {
        if(ch == '.'){
            parts.push_back(part);
            part.clear();
        }else {
            part += ch ;
        }
    }
    
    parts.push_back(part);

    if (parts.size() != 4)
    {
        return false ;
    }

    for (const string& p: parts)
    {
        if(p.empty() || p.size() >3)
            return false ;
        
        if(p.size() > 1 && p[0] == '0')
            return false ;
        
        for(char c : p){
            if(!isdigit(c)){
                return false ;
            }
        }

        int value = stoi(p);
        if(value < 0 && value > 255){
            return false; 
        }
    }
    return true ;
}

bool isValidIpV6(const string &Ip){
    vector<string> parts ;
    string part ;
    for (char ch : Ip)
    {
        if(ch == ':'){
            parts.push_back(part);
            part.clear();
        }else{
            part += ch ;
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
        return isValidIpV4(ip) ? "IPv4" : "Invalid";

    if (ip.find(':') != string::npos)
        return isValidIpV6(ip) ? "IPv6" : "Invalid";

    return "Invalid";
}