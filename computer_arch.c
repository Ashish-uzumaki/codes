#include<stdio.h>
void convert_to_binary(int d,int binary_array[16]){
	int i;
	for(i=0;i<16;i++){
		if(d>=1){
			binary_array[i] = d%2;
			d = d/2;
		}
		else{
			break;
		}
	}
}
void binary_add(int alist[16],int blist[16]){
	int i,carry=0;
	for(i=0;i<16;i++){
		if(((alist[i]+blist[i])==2)&&(carry==1)){
			alist[i] = 1;
			carry = 1;
		}
		else{
			if(((alist[i]+blist[i])==2)&&(carry==0)){
				alist[i] = 0;
				carry = 1;
			}
			else{
				if(((alist[i]+blist[i])==1)&&(carry==0)){
					alist[i] = 1;
				}
				else{
					if(((alist[i]+blist[i])==1)&&(carry==1)){
						alist[i] = 0;
						carry = 1;
					}
					else{
						if(((alist[i]+blist[i])==0)&&(carry==1)){
							alist[i] = 1;
							carry = 0;
						}
					}
				}
			}
		}
	}
}
void compliment(int binary_array[16]){
	int i;
	int c[16];
	for(i=0;i<16;i++){
		if(binary_array[i]==0){
			binary_array[i]=1;
		}
		else{
			if(binary_array[i]==1){
				binary_array[i]=0;
			}
		}
		if(i==0){
            c[i]=1;
		}
		else{
            c[i]=0;
		}
	}
binary_add(binary_array,c);
}

void main(){
	int d_a,d_b,sw,i;
	int a_binary[16],b_binary[16];
	for(i=0;i<16;i++){
		a_binary[i] = 0;
		b_binary[i] = 0;
	}
	printf("Enter Two Decimal Values \n0->Addition \n1->Subtraction\n");
	scanf("%d %d %d",&d_a,&d_b,&sw);
	convert_to_binary(d_a,a_binary);
	printf("Your in register A is:");
	for(i=15;i>=0;i--){
		printf("%d",a_binary[i]);
	}
	printf("\n");
	convert_to_binary(d_b,b_binary);
	printf("Your in register B is:");
	for(i=15;i>=0;i--){
		printf("%d",b_binary[i]);
	}
	printf("\n");
	if(sw==0){
        printf("your A+B is:");
		binary_add(a_binary,b_binary);
	}
	else{
		compliment(b_binary);
		printf("your complement of b is:");
		for(i=15;i>=0;i--){
			printf("%d",b_binary[i]);
		}
		printf("your A-B is:");
		binary_add(a_binary,b_binary);
	}
	printf("\n");
	printf("your final answer is:");
	for(i=15;i>=0;i--){
		printf("%d",a_binary[i]);
	}
}
