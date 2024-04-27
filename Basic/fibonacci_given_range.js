var fib= function(low,high){

  let a=0 ,b=1, result=0;

  if(n=0||n==1){
    return n;
  }

  while(a<=high){
    if(a>=low){
      result=a+b;
      a=b;
      b=res;
    }
   return result;
}
