#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Allowed characters array
char elements[] = { 'a', 'b', 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','!','@','#','$','%','^','&','*','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9' };
unsigned short int i=0;
unsigned short int k=0;
time_t t;
char pass[50];
unsigned short int len=0;
//password length
void enterLength(){
    /*if(i!=0)
        reinit();*/
    printf("Enter Length of password : ");
    scanf("%d",&len);
}
//Main
void generatePassword(){
    //random function
    srand((unsigned)time(&t));
    for(i;i<len;i++){
		//printf("%c",array[rand()%sizeof(array)]);
		pass[i]=elements[rand()%sizeof(elements)];
   }
   i=0;
}
//to print result password
void showPassword(){
		printf("Password is : ");
		for(i;i<len;i++)
            printf("%c",pass[i]);
        printf("\n");
        i=0;
}
int main(){
    while(1){
    printf("Generate Password : 1\nExit 2\n");
    scanf("%d",&k);
    switch(k){
    case 1:
        enterLength();
        generatePassword();
        showPassword();
        break;
    case 2:
        exit(1);
        break;
    default:
        printf("Wrong Choice\n");
    }
}
   return 0;
}
