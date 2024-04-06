char* minRemoveToMakeValid(char* s) {
    int len = strlen(s);
    char *result = (char*)malloc(sizeof(char)*(len+1));
    int index = 0;
    int open = 0;
    for(int i=0;i<len;i++){
        if(s[i] == '('){
            open++;
        }
        else if(s[i] == ')'){
            if(open == 0) s[i] = '#';
            else open--;
        }
    }
    for(int i = len-1;i>=0;i--){
        if(open>0 && s[i] == '('){
            s[i] = '#';
            open--;
        }
    }
    for(int i=0;i<len;i++){
        if(s[i] != '#'){
            result[index] = s[i];
            index++;
        }
    }
    result[index] = '\0';
    return result;

}
