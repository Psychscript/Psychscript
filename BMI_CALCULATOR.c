/*******************************
* Creator: Mr.Cruz             * 
* Program_Name: BMI_CALCULATOR *
********************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
        
        float weight,height;
        float bmi;
        int methods;
        int a =703.0;
        char choice;
        system("cls");
       printf("**IMPERICAL_BMI CALCULATION **\n\n");
       printf("    (1). IMPERIAL_METHOD\n");
       printf("    (2). METRICAL_METHOD\n");
       
 do 
{        
		 printf("\n*********************************************\n");
       printf("\nSelect a Method: ");
         scanf("%d",&methods);
//DECLARATION OF THE CHOSEN METHOD 
switch(methods)
   {
       case 1:
       {	
       printf("\n*********************************************\n");
       printf("\nWeight(lbs): ");
       scanf("%f",&weight);
       printf("Height(inch): ");
       scanf("%f",&height);   
//IMPERICAL FORMULA
       bmi = weight * a /(height*height);
       break;
       }
       
       case 2:
       	{
 	   printf("\n*********************************************\n");
       printf("\nWeight(kg): ");
       scanf("%f",&weight);
       printf("Height(m): ");
       scanf("%f",&height);
//IMPERICAL FORMULA
       bmi = (weight/ (height * height));
       break; 
	    }	 
   } printf("BMI: %.2f\n",bmi);
    
   printf("\n*********************************************\n\n");
   
   
        //DECLARING FOR ANOTHER CALCULATION
        //OUPUT&INPUT_STATEMENT       
          printf("\nTake another calculation?(y/n): ");
          scanf("%s",&choice);
}while(choice!='n');

//END OF PROGRAM OUTPUT_STATEMENT
printf("\n*********************************************\n");
  printf("\n    Thanks for using my program :)\n");
  printf("    ADVANCED MERRY_CHRISTMAS!!\n\n");
  system("cls");
   return 0;
}
