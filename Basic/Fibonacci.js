var fib = function(n) {
    let a=0, b=1, res=0; //we will take 0 and 1 as our first numbers .
    if(n==0 || n==1){
        return n;
    }
    for(let i=2;i<=n;i++){  // we will start from 3rd index till the number.
        res=a+b; //we will add the number
        a=b; //then the first number becomes the second number.
        b=res;// second number becomes the result.
    }
    return res; //we will return the result after reaching the number.
};
