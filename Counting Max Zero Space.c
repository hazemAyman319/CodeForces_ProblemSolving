int main()
{
    int cases , size , nums , counter=0 , res=0;
    cin>>cases;
    while(cases--)
    {
        counter=0 , res=0;
        cin>>size;
        for(int i=0;i<size;i++)
        {
            cin>>nums;
            if(nums==1)
            {
                res=max(res , counter);
                counter=0;
            }
            if(nums==0)
            {
                counter++;
            }
        }
        res=max(res , counter);
        cout<<res<<endl;
    }
}

