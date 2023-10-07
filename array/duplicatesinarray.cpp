int remove_duplicate(int a[],int n){
        int result=1;
        for(int i=1;i<n;i++){
            if(a[result-1]!=a[i]){
                a[result]=a[i];
                result++;
            }
        }
        return result;
    }