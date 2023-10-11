int search(int arr[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==key)
                return mid;
            else if(arr[mid]<=arr[h]){
                if(key>arr[mid] && key<=arr[h])
                    l=mid+1;
                else
                    h=mid-1;
            }
            else{
                if(key>=arr[l] && key<arr[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
        }
        return -1;
        
        //complete the function here
    }
    
};