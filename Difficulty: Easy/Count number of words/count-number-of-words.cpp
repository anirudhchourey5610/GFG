// User function Template for C++

int countWords(string s) {
    // code here.
    int c=0;
    bool inWord=false;
for(int i = 0; i < s.length(); i++) {
    if((s[i]==' ' || s[i]=='\n' || s[i]=='\t') ||
    (s[i]=='\\' && i+1 < s.length() && (s[i+1]=='n' || s[i+1]=='t'))) {
            inWord = false;
            if(s[i]=='\\') i++;
        }
        else if(!inWord) {
            c++;
            inWord = true;
        }
    }
    return c;
}