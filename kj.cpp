// String  sort   
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
void sort(char [][10],int );

main()
{
  const int n=3;
  char name[n][10];
  
  for(int i=0 ; i<n; i++)
  {
  	 cin.get(name[i],9);
     cin.get();
  }
  
  cout<<"\n-------------\n";
  
  sort(name,n);
  
  for(int i=0;i<n;i++)
    cout<<name[i]<<endl;
  
  
  getch();
}

void sort(char a[][10],int n)
{
	int  i,j;
	char t[10];
	
	for(i=n-1 ; i>0 ; i--)
	  for(j=0;j<i; j++)
	    if(strcmp(a[j],a[j+1])>0)
	    {
	    	strcpy(t,a[j]);
	    	strcpy(a[j],a[j+1]);
			strcpy(a[j+1],t);
		}
}


