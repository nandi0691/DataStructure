#ifndef MERGE_SORT_ARRAY
#define MERGE_SORT_ARRAY
void MergeSortedArray()
{
        int arr1[5]={1,2,3,4,5};
        int arr2[2]={6,7};
        int n1 = sizeof(arr1)/sizeof(arr1[0]);
        int n2 = sizeof(arr2)/sizeof(arr2[0]);
        int arr[n1+n2];
        int i=0,j=0,k=0;
        while(i<n1 && j<n2)
        {
                arr[k++]=(arr1[i]<arr2[j]?arr1[i++]:arr2[j++]);
                cout<<"inside 1st while"<<endl;
        }

        while(i<n1)
        {
                cout<<"insde n1 while"<<endl;
                arr[k++]=arr1[i++];
        }

        while(j<n2)
        {
                cout<<"insde n2 while"<<endl;
                arr[k++]=arr2[j++];
        }

        cout<<"After sort merging"<<endl;
        for(int i =0;i<(n1+n2);i++)
                cout<<arr[i]<<endl;


}
#endif
