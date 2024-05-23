int maxDepth(char* s) {
    int max = 0,open=0;
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]=='('){
            open++;
            if(open>max){
                max = open;
            }
        }
        else if(s[i]==')'){
            open--;
        }
    }
    return max;
}
