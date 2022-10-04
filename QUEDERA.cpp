
#include <iostream>
#include<cmath>
using namespace std;
#define DAY 2
#define MONTH 10 
#define location 29.975511729486687, 30.95009913965539 

void heart(){
         
   int a, b, line = 12;
   for (a = line/2; a <= line; a = a+2) { //for the upper part of the heart
      for (b = 1; b < line-a; b = b+2) //create space before the first peak
         printf(" ");
      for (b = 1; b <= a; b++) //print the first peak
         printf("*");
      for (b = 1; b <= line-a; b++) //create space before the first peak
         printf(" ");
      for (b = 1; b <= a-1; b++) //print the second peak
         printf("*");
      printf("\n");
   }
   for (a = line; a >= 0; a--) { //the base of the heart is inverted triangle
      for (b = a; b < line; b++) //generate space before triangle
         printf(" ");
      for (b = 1; b <= ((a * 2) - 1); b++) //print the triangle
         printf("*");
      printf("\n");
   }
}

int main (){
int choice=0;

cout<<"Ohayō gozaimasu QUEDERA\n";
cout<<"This is a special program for your eyes sweetie\n";
cout<<"I hope you will enjoy th puzzle \n";
cout<<"let's go throgh it babe\n";
cout<<"At first can you press 0 for me ?\n";
cin>>choice ;
if (choice==0)
{
	cout<<"once upon atime there was a lonly person and pla pla pla .....  and boooohm you apeer in his life ya qamar\n";
	cout<<"what comes after 0 ?";
}
cin>>choice;
if (choice==1)
{
	cout<<"now let's do some exersices..... can you decrpt it ??\n";
	cout<<"RmxhZ3syOS45NzU1MTE3Mjk0ODY2ODcsIDMwLjk1MDA5OTEzOTY1NTM5fQ==";
	cout<<"keep the flag you will need it later";
	cout<<"dont forget WHAT COMES NEXT?";
}
cin>>choice;
if (choice==2)
{
	cout<<"when i told you i would get you a star i wasn't kidding\n";
	cout<<"https://www.staracle.com/staracle/staracle.php?Tycho=10096750636&FB";
	cout<<"happy birthday quedera ";
	cout<<"WHAT'S NEXT?";
}

cin>>choice;
if (choice==2)
{
	cout<<"one day the sun and the moon decied to meet on earth let's find out when ??\n";
	cout<<"the nubmer of our hearts >>>> day";
	cout<<"the half of your age >>>> month";
	cout<<"MjAyMg== >>>> year";
	cout<<"wanna see them??follow the link: shshshshshshs";
	cout<<"WHAT'S NEXT?";
}

cin>>choice;
if (choice==4){
    cout<<"I love U QUEDERA"<<endl;
  int a, b, line = 12;
   for (a = line/2; a <= line; a = a+2) { //for the upper part of the heart
      for (b = 1; b < line-a; b = b+2) //create space before the first peak
         printf(" ");
      for (b = 1; b <= a; b++) //print the first peak
         printf("*");
      for (b = 1; b <= line-a; b++) //create space before the first peak
         printf(" ");
      for (b = 1; b <= a-1; b++) //print the second peak
         printf("*");
      printf("\n");
   }
   for (a = line; a >= 0; a--) { //the base of the heart is inverted triangle
      for (b = a; b < line; b++) //generate space before triangle
         printf(" ");
      for (b = 1; b <= ((a * 2) - 1); b++) //print the triangle
         printf("*");
      printf("\n");
   }
}
return 0;
}


