#include<stdio.h>
int main() {
	int a,k,b;
	char d[1000];
	scanf("%d.",&a);
	scanf("%[^e]%ne%d",d,&k,&b);
	if(k==1&&d[0]=='0'&&!b) 	printf("%d\n",a);
	else if(b>=k)   printf("%d%s%.*d\n",a,d,b-k,0);
	else 						printf("%d%.*s.%s\n",a,b,d,d+b);
	return 0;

}

