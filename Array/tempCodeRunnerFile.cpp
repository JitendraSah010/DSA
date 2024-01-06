int multiple(int array[], int n){
    int i=0;
    int ans =1;
    while(i<n){
        for(int j=0; j<n; j++){
            if(array[i]==0 && array[j]==0){
                ans = ans * 1;
            }else{
                ans = ans * array[j];
            }
        }
        if(array[i]==0){
            cout<<ans<<"  ";
        }else{
            cout<<ans/array[i]<<"  ";
        }
        i++;
        ans =1;
    }
}