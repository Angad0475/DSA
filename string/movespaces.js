function movespacestofront(str){
   let i=str.length-1;

(for let j=i;j>=0;j--){
  if(str[j]!=" "){
    let temp=str[i];
    str[j]=str[i];
    str[j]=temp;
    i--;
  }
}
}
