#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void split(const string& str,char delimiter,vector<string> &svec,bool skipEmpty)
{
    istringstream ss(str);
    for(string item ; getline(ss,item,delimiter);)
    {
        if(skipEmpty && item.empty())
            continue;
        else
            svec.push_back(item);
    }
}

int main()
{
    string input = "Liu Guang Xuan";
    string output;
    vector<string> svec;
    split(input,' ',svec,true);
    for(auto iter = svec.begin();iter != svec.end();++iter)
    {
        reverse(iter->begin(),iter->end());
        output += *iter;
        if(iter != svec.end() - 1)
        {
            output += " ";
        }
    }

    cout << output << endl;

    return 0;
}
