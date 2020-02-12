#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long long basicOccur = 0;
    long long modOccur = 0;
    long long repeat;

    int i;
    for(i=0; i < n%s.length(); i++){
        if(s.at(i)=='a')
            basicOccur++;
    }

    modOccur = basicOccur;

    for( ; i < s.length(); i++){
        if(s.at(i)=='a')
            basicOccur++;
    }

    return (long long)basicOccur*(n/s.length()) + modOccur;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
