class Solution
{
    //Function to find the next greater element for each element of the array.
    nextLargerElement(arr, n)
    {
        let stack =[];
        let result = new Array(n);
        
        for(let i=n-1;i >=0;i--){
            while(stack.length && arr[i]>=stack[stack.length-1]){
                stack.pop();
            }
            if(stack.length){
                result[i]= stack[stack.length-1];
            }
            else{
                result[i]=-1;
            }
            stack.push(arr[i])
            }
            return result;
        
    }
}
