var majorityElement = function(nums) {                           // Step 1: Initialize the candidate element (elm) as the first element of the array.
    let ctr = 1;        // Step 2: Initialize the counter (ctr) to 1, as we have encountered elm once.
    let n = nums.length; // Step 3: Store the length of the array in n.

     let elm = nums[0];  
        let  ctr = 1;
        let n = nums.length;
        for(let i=1;i<n;i++){ // Step 4: Iterate over the array starting from the second element (index 1).
            if(nums[i]==elm){  // Step 5: If the current element is the same as the candidate element,
                ctr++;            // increment the counter.
            }else{
                ctr--;             // decrement the counter.
                if(ctr==0){         // Step 7: If the counter reaches 0,
                   ctr=1;               // reset the counter to 1,
                   elm = nums[i];         // and update the candidate element to the current element.
                }
            }
        }
        return elm;
    }
