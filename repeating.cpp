int firstrepeating(int arr[],int n){
    //step 1 -> store count of numbers using map
    unordered_map<int,int> count;
    for (int i = 0; i < n; i++)
    {
        int currentelement= arr[i];
        count[currentelement]++;
    }

    //step 2 -> traverse array and find the ans
    for (int i = 0; i < n; i++)
    {
        int currentelement= arr[i];
        if (count[currentelement]>1)
        {
            return currentelement;
        } 
    }
}