#include <stdio.h>
int main ()
{
	int amount = 100;
	int price = 0;
	
	printf("�������Ԫ��:");
	printf("������Ʊ�棨Ԫ��:");
	scanf("%d",&price);
	scanf("%d",&amount); 
	int change = amount - price;
	printf("����%dԪ��\n", change);
	return 0; 
}
