bool isIsomorphic(char* s, char* t) {
     int A[256] = {0};
    int B[256] = {0};
    int len = strlen(s);
    for(int i=0; i<len;i++){
        if(A[s[i]] != B[t[i]]){
            return false;
        }
        A[s[i]] =i+1;
        B[t[i]] =i+1;
    }
    return true;
}
