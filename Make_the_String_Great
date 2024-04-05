char* makeGood(char* s) {
    int len = strlen(s);
   int top = -1;
   for(int i=0;i<len;i++){
    if(top!= -1 && abs(s[top]-s[i]) == 32){
        top--;
    }
    else{
        top++;
        s[top] = s[i];
    }
   }
   s[++top] = '\0';
   return s;
}
