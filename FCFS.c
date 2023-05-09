#include<stdio.h>
#define max 10

int main(){
    
    int p[max],bt[max],n,tat[max],wt[max],ct[max];
    float avg_tat=0,avg_wt=0;
    
    printf("Enter number of processes  : ");
    scanf("%d",&n);
    
    printf("Enter process numbers : ");
   
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    
   
    printf("Enter burst  time : ");
  
    for(int i=0;i<n;i++){

       printf("\np%d : ",i+1);
       scanf("%d",&bt[i]);
    
        
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
           
            if(bt[j]>bt[j+1]){
               
                int temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;
                
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
                
                
            }
        }
    }
    
    for(int i=0;i<n;i++){
        ct[i]=0;
        wt[i]=0;
        tat[i]=0;
       
        ct[0]=bt[0];
        
        for(int j=i;j>=0;j--){
            ct[i]+=bt[j];
        }
    }
    
    
    
    for(int i=0;i<n;i++){
        
        tat[i]=ct[i];
        wt[i]=tat[i]-bt[i];
        
        avg_tat+=tat[i];
        avg_wt+=wt[i];
    }
    printf("\nProcess no.\t Burst time\tCompletion time\t TAT \t WT");
    
    for(int i=0;i<n;i++){
        printf("\n  %d\t\t %d\t\t\t %d\t  %d\t %d",p[i],bt[i],ct[i],tat[i],wt[i]);
    }
    
    printf("\n\nAverage turnaround time : %.2f",avg_tat/n);
    
     printf("\nAverage waiting time : %.2f",avg_wt/n);
    
    return 0;
}
