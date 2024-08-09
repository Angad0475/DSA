var lengthOfLongestSubstring = function(s) {
    let start=0;
    let end =0;
    let maxlength=0;

    const uniquecharacters= new Set();

    while (end< s.length){
        if(!uniquecharacters.has(s[end])){
            uniquecharacters.add(s[end]);
            end++;
            maxlength= Math.max(maxlength,uniquecharacters.size);
        }else{
            uniquecharacters.delete(s[start]);
            start++;
        }
    }
    return maxlength;

};
