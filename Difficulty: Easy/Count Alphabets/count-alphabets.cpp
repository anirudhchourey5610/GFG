int Count(string S) {
    // complete the function here
    int c=0;
    for(int i=0;i<S.length();i++){
        if(('a'<=S[i] && 'z'>=S[i])||('A'<=S[i] && 'Z'>=S[i])){
            c++;
        }
    }
    return c;
}