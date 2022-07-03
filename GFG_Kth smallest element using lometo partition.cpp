int partition(int arr[],int l,int r){
    int i=l-1;
    int pivot=arr[r];
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;
    return i+1;
}
int kthSmallest(int arr[], int l, int r, int k)
    {
        while(l<=r){
        int p=partition(arr,l,r);
        if(p==k-1)return arr[p];
        else if(p>k-1)r=p-1;
        else l=p+1;
        }
        return -1;
    }
