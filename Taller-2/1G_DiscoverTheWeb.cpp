#include<bits/stdc++.h>
using namespace std;


string current;
int t;
int main(){
cin >> t;
for(int i = 1; i <= t; i++)
{
    stack<string> back,sfoward;
    cout << "Case " << i << ":" << endl;
    current = "http://www.lightoj.com/";
    string s;
    while(cin >> s)
    {
        if (s == "QUIT") break;
        if (s == "VISIT")
        {
            back.push(current);
            cin >> current;
            cout << current << endl;
            while(!sfoward.empty()) sfoward.pop();
        } else if (s == "BACK")
        {
            if (back.empty())
            {
                cout << "Ignored" << endl;
            } else {
                sfoward.push(current);
                current = back.top();
                back.pop();
                cout << current << endl;
            }
        } else if (s == "FORWARD")
        {
            if (sfoward.empty())
            {
                cout << "Ignored" << endl;
            } else {
                back.push(current);
                current = sfoward.top();
                sfoward.pop();
                cout << current << endl;
            }
        }
    }
}
}