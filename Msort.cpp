int coun=0;

     void make_merge(char* a, int l, int mid,int r)
{   
    int tmp[100];
    int i=l;
    int j;
    j=mid+1;
    for(int step=0;step<r-l+1;step++){
            if((j>r)||((i<=mid) && (a[i]<a[j])))
            {       coun+=j-(mid+1);
                    tmp[step]=a[i];
                    i++;
            }
            else {
                  tmp[step]=a[j];
                  j++;
                 }
            }  
    for(int step=0;step<r-l+1;++step)
	{
            a[l+step]=tmp[step];
	}
}             
int merge_sort(char* a,int l,int r) 
{
    if(l==r) return 0;
    int mid =(l+r)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    make_merge(a,l,mid,r);   
}
       