var isAnagram = function(s, t) {
    let n1= s.length;
    let n2= t.length;

    if( n1!==n2){
        return false;
    }
    if(s.split('').sort().join('')===t.split('').sort().join(''))
    {                                                              // in ordr to sort we have to split it in order 
                                                                   //to covert into array and then sort it and join it back as string.
        return true;
    }
    else{
        return false;
    }
};
