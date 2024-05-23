int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {.c
    int total_sec=0;
   while(tickets[k]>0){
    for(int i=0;i<ticketsSize;i++){
        if(tickets[i]!=0){
            tickets[i]-=1;
            total_sec++;
        if(i==k && tickets[i] == 0){
         return total_sec;
        }
        }
    }
   }
    return total_sec;
}
