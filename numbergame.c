#include<stdio.h>
#include<stdlib.h>
int generate();
int fun(int );
void main()
{
	int r;
	printf("Welcomes You..!!\n In the jargon of a number\n");
	printf("\nJust think a number between 1 and 63 in your mind..\n");
	printf("\n Do not enter the number..I will find that number on your mind..\n");
	printf("\n By Just answering few questions..\nBe Honest\n ");
	printf("\nIf your number is present in the numbers on your screen, then press p else press N\n");
	r=generate();
	if(r==0)
	{
		printf("\n You didn't think the number between 1 and 63\n so try again\n");
	}
	else
	{
		printf("\nYour number is %d\n",r);
		printf("\n Suprised..!!\n Thank You");
	}
}
int generate()
{
	int j,f,i,a,num[6],n,r=0;
	char ch[6];
	printf("\n");
	for(j=0;j<=5;j++)
	{
		f=fun(j);
		for(i=1;i<=63;i++)
		{
			//f=fun(j);
			//printf("%d  ",f);
			a=i&f;
			if(a==f)
				printf("%d    ",i);
		}
		printf("\n Enter ur answer either p or N\n");
		//scanf("%c",&ch[j]);
		ch[j]=getche();
		printf("\n");
		if(ch[j]=='p'||ch[j]=='P')
		{
			num[j]=1;
			n=fun(j);
			r=r+n;
		}
		else
			num[j]=0;
	}
	/*for(j=5;j>=0;j--)
	{
		printf("%d  ",num[j]);
		//if(ch[j]=='p'||ch[j]=='P')
			//num[j]=1;
		//else
			//num[j]=0;
	}*/
	//printf("%d",r);
	return r;
}
int fun(int j)
{
	if(j==0)
		return 1;
	else
		return 2*fun(j-1);
}