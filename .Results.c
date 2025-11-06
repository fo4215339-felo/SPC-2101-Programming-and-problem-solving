
/*
Name:Felix Omondi
Reg No:PA106/G/28817/25
Description:Peogram to Track Borrowed Books 
*/


#include<stdio.h>
#include <stdlib.h>
struct student{
	char name [60];
	int RegNo;
	float marks;
	};
 int main(void)
 {
 	FILE* fptr;
 	struct student s;
   	 
	fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\C programs\\results.dat.bin","rb"); 
	 if(fptr== NULL){
		 printf("Error opening the file\n");
		 return 1;
	 }
	 printf("Name\t\tRegNo\tMarks\n");
	  
	    while (fread(&s, sizeof(struct student), 1, fptr) == 10 ){
        printf("%-15s %d\t%.2f\n", s.name, s.RegNo, s.marks);
    }

    fclose(fptr);
    return 0;
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 

/*
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main(void) {
    FILE *file;
    struct Student s;

    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Name\t\tReg No\tMarks\n");
    printf("-------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%-15s %d\t%.2f\n", s.name, s.regNo, s.marks);
    }

    fclose(file);
    return 0;
}
*/