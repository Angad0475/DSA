class Solution {
    pushZerosToEnd(arr,n){
    
	    
	    let i=0;
	    
	    for(let j=0; j<n; j++) {
	        let temp;
	        if(arr[j] != 0) {
	            temp=arr[j];
	            arr[j]=arr[i]
	            arr[i]=temp;
	            i++;
	        }
	    }
	}
    
}
