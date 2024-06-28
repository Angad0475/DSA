class Solution {
    pushZerosToEnd(arr,n){
    
	    
	    let i=0;    //inilization pf two pointers  at index 0 and and traversing the whole array and if the j is equal to zero then just pass and if it is equal to non-zero then just swap the 
	                   //element with the i pointer and increase the i pointer .
	    
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
