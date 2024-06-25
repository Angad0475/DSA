symbols={
    'I':1,
    'V':5,
    'X':10,
    'L':50,
    'C':100,
    'D':500,
    'M':1000
};

var romanToInt = function(s) {
    value=0;
    for(let i=0;i<s.length;i++){
        symbols[s[i]]<symbols[s[i+1]] ? value -=symbols[s[i]]:value+=symbols[s[i]]//if the next symbolis greater than the current index then the current
                                                                                    //index will be negative declared otherwise positive.
    }
    return value;
};
