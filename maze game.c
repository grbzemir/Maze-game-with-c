#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main() {
	int a; 
    int b;
    int Ya;  
    Ya = 1; 
    int Yb;
    Yb = 1; 
    int Za; 
    Za=1;
    int Zb; 
    Zb= 9; 
    int Xa; 
    Xa= 8;
    int Xb;
    Xb = 1;

	char Yc, Zc, Xc;

	while(1) {
		for(a=1; a<=9; a++) {
			for(b=1; b<=9; b++) {
				if((a==1 && b==4) || (a==2 && (b==7 || b==9)) || (a==3 && (b==2 || b==4 || b==7 || b==8)) || (a==4 && b==5) || (a==5 && (b==2 || b==7)) || (a==6 && (b==3 || b==5 || b==9)) || (a==7 && (b==1 || b==7 || b==8)) || (a==8 && (b==2 || b==4 || b==7)) || (a==9 && (b==4 || b==5))) {
					printf("--");
				}
				else {
					if(a==5 && b==9) {
						printf("?");
					}
					else if(a==Ya && b==Yb) {
						printf(" Y");
					}
					else if(a==Za && b==Zb) {
						printf(" Z");
					}
					else if(a==Xa && b==Xb) {
						printf(" X");
					}
					else {
						printf("--");
					}
				}
			}
			printf("\n");
		}
		if(Ya==5 && Yb==9) {
			printf("Y oyuncusu kazandi.\n");
			break;
		}
		else if(Za==5 && Zb==9) {
			printf("Z oyunusu kazandi.\n");
			break;
		}
		else if(Xa==5 && Xb==9) {
			printf("X oyuncusu kazandi.\n");
			break;
		}
		printf("Y oyuncusunun sirasi:\n");
		scanf(" %c", &Yc);
		if(Yc=='w')
			Ya--;
		else if(Yc=='s')
			Ya++;
		else if(Yc=='d')
			Yb++;
		else if(Yc=='a')
			Yb--;
		printf("Z oyuncusunun sirasi:\n");
		scanf(" %c", &Zc);
		if(Zc=='w')
			Za--;
		else if(Zc=='s')
			Za++;
		else if(Zc=='d')
			Zb++;
		else if(Zc=='a')
			Zb--;
		printf("X oyuncusunun sirasi:\n");
		scanf(" %c", &Xc);
		if(Xc=='w')
			Xa--;
		else if(Xc=='s')
			Xa++;
		else if(Xc=='d')
			Xb++;
		else if(Xc=='a')
			Xb--;
	}
	return 0;
}




