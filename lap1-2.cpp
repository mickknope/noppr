#include <stdio.h>
const float PI = 3.14159 ; //same as define

main() {
	int age = 16 ;
	char gender = 'f' ;
	char name[7] = "mickey" ;
	float gpa = 3.89 ;
//	printf("I am %d year old. \n" , age ) ;
//	printf("I'm %c \n" , gender) ;
//	printf("My name is %s \n", name) ;
//	printf("%c \t %.3f \n" , name[3] , PI) ;
//	printf("GPA = %.2f",gpa);
	printf("I am %d year old. \n  I'm %c \n My name is %s \n %c \t %.3f \n GPA = %.2f" , age , gender , name , name[3] , PI , gpa) ;
}