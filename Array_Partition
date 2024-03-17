void merge(int *A,int l,int m,int h){
    int i=l,j=m+1,result[h-l+1];
    int k=0;
    while(i<=m && j<=h){
        if(A[i]<=A[j]){
            result[k] = A[i];
            i++,k++;
        }
        else{
            result[k]=A[j];
            j++,k++;
        }
    }
    while(i<=m){
        result[k]=A[i];
        i++,k++;
    }
    while(j<=h){
        result[k]=A[j];
        j++,k++; 
    }
    k=0;
    for(int i=l;i<=h;i++){
        A[i]=result[k];
        k++;
    }
}

void merge_sort(int *A,int l,int h){
    if(l<h){
        int m =(l+h)/2;
        merge_sort(A,l,m);
        merge_sort(A,m+1,h);
        merge(A,l,m,h);
    }
}


int arrayPairSum(int* nums, int numsSize) {
    merge_sort(nums,0,numsSize-1);
    int result =0;
    for(int i=0;i<numsSize-1;i+=2){
        if(nums[i]<=nums[i+1]){
            result = result + nums[i];
        }
        else{
            result=result+nums[i];
        }
    }
    return result;

    
}
