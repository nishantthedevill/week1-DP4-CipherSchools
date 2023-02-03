#include <iostream>
#include <string>

using namespace std;

void permute(string str, int l, int r) {
    if (l == r) {
        cout << str << endl;
    } else {
        for (int i = l; i <= r; i++) {
            if (i != l && str[i] == str[l]) continue;  // check for repetition
            swap(str[l], str[i]);
            permute(str, l+1, r);
            swap(str[l], str[i]);
        }
    }
}

int main() {
    string str;
    cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter a string: \";\n    cin >>"}` str;
    permute(str, 0, str.length()-1);
    return 0;
}
