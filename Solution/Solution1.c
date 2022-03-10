/*

Program : WAP to Perform Addition on 2D Array

Using   : For Loops |

Author  : Krishna Patel

Date    : 01-03-2022

*/




#include<stdio.h>

#include<conio.h>



void main()

{

    

    int m1[3][3],m2[3][3],m3[3][3],i,j;



    clrscr();


    printf("\t\t\t  Matrix Addition  ");

    

    printf("\nEnter Values Into Matrix 1 : \n");


//Matrix Number 1 :


    for(i=0;i<3;i++)  //For Rows

    {

        for(j=0;j<3;j++)  //For Columns

        {

            printf("\nEnter The Value for Matrix 1 [%d][%d] : ",i,j);  //Let user see which value he is Going to input

            scanf("%d",&m1[i][j]);   //Take Repeated Values

        }     //Column Loop End

    }  //Row Loop End


    //Cleanliness is the key

    clrscr();


//Matrix Number 2 :


    printf("\nEnter Values Into Matrix 2 : \n");

    //Lets Do Same As Above for The Second Matrix Having Minor Changes

    for(i=0;i<3;i++)  //For Rows

    {

        for(j=0;j<3;j++)  //For Columns

        {

            printf("\nEnter The Value for Matrix 2 [%d][%d] : ",i,j);  //Let user see which value he is Going to input

            scanf("%d",&m2[i][j]);   //Take Repeated Values

        }     //Column Loop End

    }  //Row Loop End


//Logical Part for Addition :


    //Lets add Like   ----   c = a + b --- Here it is  -- m3=m1+m2


    for(i=0;i<3;i++)    //row loop

    {

        for(j=0;j<3;j++)            //column loop

        {

            m3[i][j]=m1[i][j]+m2[i][j];

        }           //column loop end

    }    //row loop end


    //Cleanlines Is the Key

    clrscr();


    printf("\t\t\t  Addition of Matrix   \n\n");

    //Print Matrix 1 for user

    printf("\n  Matrix 1 : \n\n");


    for(i=0;i<3;i++)

    {

        for(j=0;j<3;j++)

            printf("%d\t",m1[i][j]);

        printf("\n");

    }


    //Print Matrix 2 for user

    printf("\n  Matrix 2 : \n\n");


    for(i=0;i<3;i++)

    {

        for(j=0;j<3;j++)

            printf("%d\t",m2[i][j]);

        printf("\n");

    }


    //Print the Output for user

    printf("\n  Addition of Matrix 1 and 2 : \n\n");


    for(i=0;i<3;i++)

    {

        for(j=0;j<3;j++)

            printf("%d\t",m3[i][j]);

        printf("\n");

    }

    getch();

}