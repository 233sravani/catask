#include<iostream>
#include<conio.h>
using namespace std;
class schedule
{
	public:
		int P[10],A[10],B[10],n,min=A[0],mini,RQ,newRQ,max,maxi,T[50];

        void enter()
        {
	          cout<<"enter the number of processes"<<endl;
	            cin>>n;
          	for(int i=0;i<n;i++)
            	{
		      cout<<"enter the arrival time of P"<<i+1<<endl;
		      cin>>A[i];
		       if(A[i]<3)
		          {
		 	           cout<<"arrival time should me more than 3 units!!Please re enter the arrival time"<<endl;
			        cout<<"enter the arrival time of P"<<i+1<<endl;
		             cin>>A[i];
		          }
	               	cout<<"enter the burst time of P"<<i+1<<endl;
		            cin>>B[i];
		
	              }
	              cout<<"__________________________________________________"<<endl;
	              cout<<"|  PROCESS   |   ARRIVAL TIME  |   BURST TIME     |"<<endl;
	              cout<<"|_________________________________________________|"<<endl;
	              for(int i=0;i<n;i++)
	              {
	              cout<<"|      P"<<i+1<<"    |      " <<A[i]<<"          |"<<"      "<<B[i]<<"           |"<<endl;
	          }
	              cout<<"|_________________________________________________|"<<endl;

        }
        void ready()
        { 
		    int i;
        	for(i=0;i<n;i++)
        	{
               if(min>A[i])
			   {
			   	min=A[i];
			   	mini=i;
					   }		
			}
			for(int i=0;i<n;i++)
        	{
               if(max<A[i])
			   {
			   	max=A[i];
			   	maxi=i;
					   }		
			}
			for(i=0;i<n;i++)
        	{
               if(min==A[i])
			   {
			   	 if(B[mini]<B[i])
			   	 {
			   	    RQ=mini;
					}
					else
					{
					RQ=i;	
					}
					   }		
			}
			cout<<"process P"<<RQ+1<<" enters the ready queue"<<endl;
        
             }
				
			
		
};
int main()
{
	schedule s1;
	s1.enter();
	s1.ready();
	getch();  
}
