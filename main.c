#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()
{
	int from;
	int to;
	float time;
	
	printf("***TIME CONVERTER***");
	printf("\n\nConvert From");
	printf("\nSelect Only One Option");
	printf("\n1. Year");
	printf("\n2. Month");
	printf("\n3. Week");
	printf("\n4. Day");
	printf("\n5. Hour");
	printf("\n6. Minute");
	printf("\n7. Second");
	printf("\nOption = ");
	scanf("%d",&from);
	printf("\nConvert To");
	printf("\nSelect Only One Option");
	printf("\n1. Year");
	printf("\n2. Month");
	printf("\n3. Week");
	printf("\n4. Day");
	printf("\n5. Hour");
	printf("\n6. Minute");
	printf("\n7. Second");
	printf("\nOption = ");
	scanf("%d",&to);
	printf("\nEnter Time = ");
	scanf("%f",&time);
	
	if(from==1 && to==1)
	{
		printf("\nConverting %f Years Results in %f Years",time,time);
	}
	if(from==1 && to==2)
	{
		float result=time*12;
		printf("\nConverting %f Years Result in %f Months",time,result);
	}
	if(from==1 && to==3)
	{
		float result=time*52.143;
		printf("\nConverting %f Years Result in %f Weeks",time,result);
	}
	if(from==1 && to==4)
	{
		float result=time*365;
		printf("\nConverting %f Years Results in %f Days",time,result);
	}
	if(from==1 && to==5)
	{
		float result=time*8760;
		printf("\nConverting %f Years Result in %f Hours",time,result);
	}
	if(from==1 && to==6)
	{
		float result=time*525600;
		printf("\nConverting %f Years Result in %f Minutes",time,result);
	}
	if(from==1 && to==7)
	{
		float result=time*31536000;
		printf("\nConverting %f Years Results in %f Seconds",time,result);
	}
	if(from==2 && to==1)
	{
		float result=time/12;
		printf("\nConverting %f Months Results in %f Years",time,result);
	}
	if(from==2 && to==2)
	{
		printf("\nConverting %f Months Results in %f Months",time,time);
	}
	if(from==2 && to==3)
	{
		float result=time*4.345;
		printf("\nConverting %f Months Results in %f Weeks",time,result);
	}
	if(from==2 && to==4)
	{
		float result=time*30.417;
		printf("\nConverting %f Months Results in %f Days",time,result);
	}
	if(from==2 && to==5)
	{
		float result=time*730;
		printf("\nConverting %f Months Results in %f Hours",time,result);
	}
	if(from==2 && to==6)
	{
		float result=time*43800;
		printf("\nConverting %f Months Results in %f Minutes",time,result);
	}
	if(from==2 && to==7)
	{
		float result=time*2628002.88;
		printf("\nConverting %f Months Results in %f Seconds",time,result);
	}
	if(from==3 && to==1)
	{
		float result=time/52.143;
		printf("\nConverting %f Weeks Results in %f Years",time,result);
	}
	if(from==3 && to==2)
	{
		float result=time/4.345;
		printf("\nConverting %f Weeks Results in %f Months",time,result);
	}
	if(from==3 && to==3)
	{
		printf("\nConverting %f Weeks Results in %f Weeks",time,time);
	}
	if(from==3 && to==4)
	{
		float result=time*7;
		printf("\nConverting %f Weeks Results in %f Days",time,result);
	}
	if(from==3 && to==5)
	{
		float result=time*168;
		printf("\nConverting %f Weeks Results in %f Hours",time,result);
	}
	if(from==3 && to==6)
	{
		float result=time*10080;
		printf("\nConverting %f Weeks Results in %f Minutes",time,result);
	}
	if(from==3 && to==7)
	{
		float result=time*604800;
		printf("\nConverting %f Weeks Results in %f Seconds",time,result);
	}
	if(from==4 && to==1)
	{
		float result=time/365;
		printf("\nConverting %f Days Results in %f Years",time,result);
	}
	if(from==4 && to==2)
	{
		float result=time/30.417;
		printf("\nConverting %f Days Results in %f Months",time,result);
	}
	if(from==4 && to==3)
	{
		float result=time/7;
		printf("\nConverting %f Days Results in %f Weeks",time,result);
	}
	if(from==4 && to==4)
	{
		printf("\nConverting %f Days Results in %f Days",time,time);
	}
	if(from==4 && to==5)
	{
		float result=time*24;
		printf("\nConverting %f Days Results in %f Hours",time,result);
	}
	if(from==4 && to==6)
	{
		float result=time*1440;
		printf("\nConverting %f Days Results in %f Minutes",time,result);
	}
	if(from==4 && to==7)
	{
		float result=time*86400;
		printf("\nConverting %f Days Results in %f Seconds",time,result);
	}
	if(from==5 && to==1)
	{
		float result=time/8760;
		printf("\nConverting %f Hours Results in %f Years",time,result);
	}
	if(from==5 && to==2)
	{
		float result=time/730;
		printf("\nConverting %f Hours Results in %f Months",time,result);
	}
	if(from==5 && to==3)
	{
		float result=time/168;
		printf("\nConverting %f Hours Results in %f Weeks",time,result);
	}
	if(from==5 && to==4)
	{
		float result=time/24;
		printf("\nConverting %f Hours Results in %f Days",time,result);
	}
	if(from==5 && to==5)
	{
		printf("\nConverting %f Hours Results in %f Hours",time,time);
	}
	if(from==5 && to==6)
	{
		float result=time*60;
		printf("\nConverting %f Hours Results in %f Minutes",time,result);
	}
	if(from==5 && to==7)
	{
		float result=time*3600;
		printf("\nConverting %f Hours Results in %f Seconds",time,result);
	}
	if(from==6 && to==1)
	{
		float result=time/525600;
		printf("\nConverting %f Minutes Results in %f Years",time,result);
	}
	if(from==6 && to==2)
	{
		float result=time/43800;
		printf("\nConverting %f Minutes Results in %f Months",time,result);
	}
	if(from==6 && to==3)
	{
		float result=time/10080;
		printf("\nConverting %f Minutes Results in %f Weeks",time,result);
	}
	if(from==6 && to==4)
	{
		float result=time/1440;
		printf("\nConverting %f Minutes Results in %f Days",time,result);
	}
	if(from==6 && to==5)
	{
		float result=time/60;
		printf("\nConverting %f Minutes Results in %f Hours",time,result);
	}
	if(from==6 && to==6)
	{
		printf("\nConverting %f Minutes Results in %f Minutes",time,time);
	}
	if(from==6 && to==7)
	{
		float result=time*60;
		printf("\nConverting %f Minutes Results in %f Seconds",time,result);
	}
	if(from==7 && to==1)
	{
		float result=time/3153600;
		printf("\nConverting %f Seconds Results in %f Years",time,result);
	}
	if(from==7 && to==2)
	{
		float result=time/2628002.88;
		printf("\nConverting %f Seconds Results in %f Months",time,result);
	}
	if(from==7 && to==3)
	{
		float result=time/604800;
		printf("\nConverting %f Seconds Results in %f Weeks",time,result);
	}
	if(from==7 && to==4)
	{
		float result=time/86400;
		printf("\nConverting %f Seconds Results in %f Days",time,result);
	}
	if(from==7 && to==5)
	{
		float result=time/3600;
		printf("\nConverting %f Seconds Results in %f Hours",time,result);
	}
	if(from==7 && to==6)
	{
		float result=time/60;
		printf("\nConverting %f Seconds Results in %f Minutes",time,result);
	}
	if(from==7 && to==7)
	{
		printf("\nConverting %f Seconds Results in %f Seconds",time,time);
	}
	return 0;
}
