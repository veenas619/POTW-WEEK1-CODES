#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

    //morning time: i.e from 01:00:00 am to 09:59:59 am
    if(s[0]=='0' && s[8]=='A' && s[9]=='M')
    {
        s.erase(8,2);
        return s;
    }
    else if((s[0]=='0' || s[0]=='1')&& s[8]=='P')
    {

        //sorted afternoon and evening
            if(s[0]=='1' && s[1]=='2')
            {
                s.erase(8,2);
                return s;
            }
            if(s[0]=='0')
            {
                s[0]='1';
            }
            else
            {
                s[0]='2';
            }
            char nums[9]={'1','2','3','4','5','6','7','8','9'};
            for(int i=0;i<9;i++)
            {
                if(nums[i]==s[1])
                {  
                    s[1]=nums[i+2];
                    break;
                }
            }

    }
    else if(s[0]=='1' && s[8]=='A' && s[9]=='M')//sorted the 12am issue
    {   if(s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
    else if(s[0]=='1' && s[8]=='A' && s[9]=='M')
    {
        s.erase(8,2);
        return s;
    }
    s.erase(8,2);
    return s;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
