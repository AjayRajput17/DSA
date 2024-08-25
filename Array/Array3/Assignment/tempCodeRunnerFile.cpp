
    int i=0;
    int j=n-1;
    for(int k=0;k<n;k++)
    {
        if(a[k]==0)
        {
            a[j] =0;
            j--;
        }
        else{
            a[i] =a[k];
            i++;
        }
    }

     for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
