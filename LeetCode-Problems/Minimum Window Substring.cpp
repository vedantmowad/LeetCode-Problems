#include<iostream>
#include<string>
#include<climits>
#include<unordered_map>
using namespace std;
string minimum_window_substring(string s, string t) {
    unordered_map<char, int> mp1, mp2;
    for (char c : t) {
        mp2[c]++;
    }
    int left = 0, count = 0, min_len = INT_MAX, start = 0;
    for (int right = 0; right < s.length(); right++) {
        mp1[s[right]]++;
        if (mp2.find(s[right]) != mp2.end()) {
            if (mp1[s[right]] == mp2[s[right]]) {
                count++;
            }
        }
        while (count == mp2.size()) {
            if (right - left + 1 < min_len) {
                min_len = right - left + 1;
                start = left;
            }
            if (mp2.find(s[left]) != mp2.end()) {
                if (mp1[s[left]] < mp2[s[left]]) {
                    count--;
                }
                mp1[s[left]]--;
            }
            left++;
        }
    }
    if (min_len == INT_MAX) {
        return "";
    }else {
        return s.substr(start, min_len);
    }
}
int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << minimum_window_substring(s, t) << endl;
    return 0;
}