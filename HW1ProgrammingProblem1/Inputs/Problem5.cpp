#include <iostream>
#include <string>
#include <map>
#include <utility> // for std::pair

using namespace std;

string Analyze(string str, int size) {
    if (str.length() < size) {
        return str;
    }

    map<string, pair<int, int> > freq;
    int maxFreq = 0;
    string result;

    for (size_t i = 0; i <= str.length() - size; ++i) {
        string sub = str.substr(i, size);

        if (freq.find(sub) == freq.end()) {
            freq[sub] = make_pair(1, i);
        } else {
            freq[sub].first++;
        }

        if (freq[sub].first > maxFreq ||
            (freq[sub].first == maxFreq && freq[sub].second < freq[result].second)) {
            maxFreq = freq[sub].first;
            result = sub;
        }
    }

    return result;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: Problem5 \"string\" size" << endl;
        return 1;
    }

    string str = argv[1];
    int size = stoi(argv[2]);

    if (size <= 0 || size >= 10) {
        cout << "Size must be between 1 and 9" << endl;
        return 1;
    }

    cout << Analyze(str, size) << endl;
    return 0;
}
