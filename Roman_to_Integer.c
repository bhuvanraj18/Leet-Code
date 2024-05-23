int RomanValue(char ch) {
    switch (ch) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}


int romanToInt(char* s) {
    int len = strlen(s);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        if (i<len-1 && RomanValue(s[i]) < RomanValue(s[i+1])){
            sum -= RomanValue(s[i]);
        } 
        else {
            sum += RomanValue(s[i]);
        }
    }
    return sum;
}
