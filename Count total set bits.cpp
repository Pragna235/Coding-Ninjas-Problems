


int count(int N){
    int count1=0;
        while(N){
            N=(N&(N-1));
            count1++;
        }
        return count1;
}

    int countSetBits(int N){
        // code here
        int count2=0;
        while(N){
            count2+=count(N);
            N--;
        }
        return count2;
        
        
    }
