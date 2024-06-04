#include <stdio.h>

int main(void){
	int N,hora,s,m;
	float g;
		scanf("%d",&N);
		hora=N/3600;
		g=((float)N/3600)*60;
		while(g>=60){
			g-=60;
		}
		m=g;
		g=(((float)N/3600)*60)*60;
		while(g>=60){
			g-=60;
		}
		s=g;
		
		printf("%d:%d:%d\n",hora,m,s);	
		
	return 0;
}
