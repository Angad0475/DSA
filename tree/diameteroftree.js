var diameterOfBinryTree =function(root) {
 if(!root){
   return 0;
 }

let maxDiameter =0 ;
const dfs =(node)=>{
 if(!node){
       return 0;
 }
let left= dfs(node.left);
let right =dfs(node.right);

maxDiameter =Math.max(maxDiameter,left+right);

return 1+ Math.max(left,right);
}


dfs(root);

return maxDiameter;
}
  
