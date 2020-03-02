#include<stdio.h>

int add_int(int a,int b);
int sub_int(int a,int b);
float add_float(float a, float b);
float sub_float(float a, float b);

int main(void){
	printf("6+4=%d\n",add_int(6,4));
	printf("6-4=%d\n",sub_int(6,4));
	printf("6.6+4.4=%f\n",add_float(6.6,4.4));
	printf("6.6-4.4=%f\n",sub_float(6.6,4.4));  
	return 0;
}
