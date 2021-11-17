#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char name[20];
int roll;
char dob[20];
int std;
char division[20];

int eng;
int hindi;
int maths;
int phy;
int chem;
int bio;
int hist;
int geo;

float total;
float percent;

int e;
int m;
int h;
int p;
int c;
int b;
int his;
int g;

int teng;
int tmaths;
int thindi;
int tphy;
int tchem;
int tbio;
int thist;
int tgeo;

void input_1()
{
	printf("\n\t\t\t\tSTUDENT INFORMATION\n\n\n");
	printf("Enter name of student : ");
	gets(name);
	
	printf("Enter standard : ");
	scanf("%d",&std);
	while(std<1 || std>10)
    {
        printf("\nInvalid input\n");
        printf("Enter standard : ");
        scanf("%d",&std);
    }
    
    printf("Enter division : ");
    scanf("%s",&division);
    
    printf("Enter Roll Number : ");
    scanf("%d",&roll);
    while(roll<0 || roll>60)
    {
        printf("\nInvalid input\n");
        printf("Enter Roll Number : ");
        scanf("%d",&roll);
    }
    
    printf("Enter Date Of Birth : ");
    scanf("%s",&dob);
    
    printf("\n");
}

void input_2()
{
	printf("\n\t\t\t\tMARKS OF INTERNAL EXAM\n\n");
	
	printf("Marks of English out of 20 : ");
	scanf("%d",&e);
	while(e<0 || e>20)
    {
        printf("\nInvalid input\n");
        printf("Marks of English out of 20 : ");
		scanf("%d",&e);
    }
    
    printf("Marks of Hindi out of 20 : ");
	scanf("%d",&h);
	while(h<0 || h>20)
    {
        printf("\nInvalid input\n");
        printf("Marks of Hindi out of 20 : ");
		scanf("%d",&h);
    }
    
    printf("Marks of Maths out of 20 : ");
	scanf("%d",&m);
	while(m<0 || m>20)
    {
        printf("\nInvalid input\n");
        printf("Marks of Maths out of 20 : ");
		scanf("%d",&m);
    }
    
    printf("Marks of Physics out of 20 : ");
	scanf("%d",&p);
	while(p<0 || p>20)
    {
        printf("\nInvalid input\n");
        printf("Marks of Physics out of 20 : ");
		scanf("%d",&p);
    }
    
    printf("Marks of Chemistry out of 20 : ");
	scanf("%d",&c);
	while(c<0 || c>20)
    {
        printf("\nInvalid input\n");
        printf("Marks of Chemistry out of 20 : ");
		scanf("%d",&c);
    }
    
    printf("Marks of Biology out of 20 : ");
	scanf("%d",&b);
	while(b<0 || b>20)
    {
        printf("\nInvalid input\n");
        printf("Marks of Biology out of 20 : ");
		scanf("%d",&b);
    }
    
    printf("Marks of History out of 20 : ");
	scanf("%d",&his);
	while(his<0 || his>20)
    {
        printf("\nInvalid input\n");
        printf("Marks of History out of 20 : ");
		scanf("%d",&his);
    }
    
    printf("Marks of Geography out of 20 : ");
	scanf("%d",&g);
	while(g<0 || g>20)
    {
        printf("\nInvalid input\n");
        printf("Marks of Geography out of 20 : ");
		scanf("%d",&g);
    }
}

void input_3()
{
	printf("\n\t\t\t\tMARKS OF SEMESTER EXAM\n\n");
	
	printf("Marks of English out of 80 : ");
	scanf("%d",&eng);
	while(eng<0 || eng>80)
    {
        printf("\nInvalid input\n");
        printf("Marks of English out of 80 : ");
		scanf("%d",&eng);
    }
    
    printf("Marks of Hindi out of 80 : ");
	scanf("%d",&hindi);
	while(hindi<0 || hindi>80)
    {
        printf("\nInvalid input\n");
        printf("Marks of Hindi out of 80 : ");
		scanf("%d",&hindi);
    }
    
    printf("Marks of Maths out of 80 : ");
	scanf("%d",&maths);
	while(maths<0 || maths>80)
    {
        printf("\nInvalid input\n");
        printf("Marks of Maths out of 80 : ");
		scanf("%d",&maths);
    }
    
    printf("Marks of Physics out of 80 : ");
	scanf("%d",&phy);
	while(phy<0 || phy>80)
    {
        printf("\nInvalid input\n");
        printf("Marks of Physics out of 80 : ");
		scanf("%d",&phy);
    }
    
    printf("Marks of Chemistry out of 80 : ");
	scanf("%d",&chem);
	while(chem<0 || chem>80)
    {
        printf("\nInvalid input\n");
        printf("Marks of Chemistry out of 80 : ");
		scanf("%d",&chem);
    }
    
    printf("Marks of Biology out of 80 : ");
	scanf("%d",&bio);
	while(bio<0 || bio>80)
    {
        printf("\nInvalid input\n");
        printf("Marks of Biology out of 80 : ");
		scanf("%d",&bio);
    }
    
    printf("Marks of History out of 80 : ");
	scanf("%d",&hist);
	while(hist<0 || hist>80)
    {
        printf("\nInvalid input\n");
        printf("Marks of History out of 80 : ");
		scanf("%d",&hist);
    }
    
    printf("Marks of Geography out of 80 : ");
	scanf("%d",&geo);
	while(geo<0 || geo>80)
    {
        printf("\nInvalid input\n");
        printf("Marks of Geography out of 80 : ");
		scanf("%d",&geo);
    }
}

void totals()
{
	teng = eng + e;
	thindi = hindi + h;
	tmaths = maths + m;
	tphy = phy + p;
	tchem = chem + c;
	tbio = bio + b;
	tgeo = geo + g;
	thist = hist + his;
	
	total = teng + thindi + tmaths + tphy + tchem + tbio + tgeo + thist;
	percent = total / 8;
}

void display_1(){
	printf("\n\t\t\t\tMARKSHEET\n\n\n\n");
	
	printf("Name             :\t %s",name);
	printf("\nStandard         :\t %d",std);
	printf("\nDivision         :\t %s",division);
	printf("\nRoll number      :\t %d",roll);
	printf("\nDate of Birth    :\t %s",dob);
}

void display_2()
{
	printf("\n\n");
	int i;
	for(i=0;i<=76;i++)
    {
        printf("_");
    }
    
    printf("\nSubject\t\t|Internal Marks\t|\tSemester Marks\t|\tTotal\t    |");
    printf("\n");
    for(i=0;i<=76;i++)
    {
        printf("¯");
    }
    printf("\n");
    printf("English\t\t|     %d\t|\t     %d\t\t|\t %d\t    |",e,eng,teng);
    printf("\nMaths\t\t|     %d\t|\t     %d\t\t|\t %d\t    |",m,maths,tmaths);
    printf("\nHindi\t\t|     %d\t|\t     %d\t\t|\t %d\t    |",h,hindi,thindi);
    printf("\nPhysics\t\t|     %d\t|\t     %d\t\t|\t %d\t    |",p,phy,tphy);
    printf("\nChemistry\t|     %d\t|\t     %d\t\t|\t %d\t    |",c,chem,tchem);
    printf("\nBiology\t\t|     %d\t|\t     %d\t\t|\t %d\t    |",b,bio,tbio);
    printf("\nHistory\t\t|     %d\t|\t     %d\t\t|\t %d\t    |",his,hist,thist);
    printf("\nGeography\t|     %d\t|\t     %d\t\t|\t %d\t    |",g,geo,tgeo);
    printf("\n");
    for(i=0;i<=76;i++)
    {
        printf("¯");
    }
    
    int y=37;
    printf("\n\nPercentage \t:  %lf %c\n\n",percent,y);
}

void main()
{
	input_1();
	input_2();
	input_3();
	totals();
	system("cls");
	display_1();
	display_2();
	
	printf("\n\n");
	int x=178;
	int i;
	for(i=0;i<=30;i++)
	{
		printf("%c",x);
	}
	printf("\n%c   Hemin Dhamelia     - 13   %c",x,x);
	printf("\n%c   Kaustubh Digarse   - 14   %c",x,x);
	printf("\n%c   Somil Doshi        - 15   %c",x,x);
	printf("\n%c   Arya Dubey         - 16   %c\n",x,x);
		
	for(i=0;i<=30;i++)
	{
		printf("%c",x);
	}
	
	printf("\n");
	getch();
}
