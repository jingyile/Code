#include<cstdio>
struct node {
	int x,y,z;
	int t;
} a[10005];
int x,y,z,tar;
void dfs(int k) {
	if(k==0) {
		printf("%d,%d,%d\n",a[k].x,a[k].y,a[k].z);
		return;
	}
	if(k!=0) {
		dfs(a[k].t);
		printf("%d,%d,%d\n",a[k].x,a[k].y,a[k].z);
	}
}
void find() {
	int top=0,f=-1;
	while(f<top) {
		f++;
		if(a[f].x==tar||a[f].y==tar||a[f].z==tar) {
			dfs(f);
			break;
		}
		for(int i=1; i<7; i++) {
			int fx=a[f].x;
			int fy=a[f].y;
			int fz=a[f].z;
			int flag=0;
			switch(i) {
				case 1:
					fx+fy>y?
					//容器1+容器2的量大于容器2的最大值  1-2
					(fx-=(y-fy),fy=y):(fy+=fx,fx=0);
					break;
				case 2:
					fx+fz>z?(fx-=(z-fz),fz=z):(fz+=fx,fx=0);
					//1+3>max3 1-3
					break;
				case 3:
					fy+fz>z?(fy-=(z-fz),fz=z):(fz+=fy,fy=0);
					//2+3>max3 2-3
					break;
				case 4:
					fy+fx>x?(fy-=(x-fx),fx=x):(fx+=fy,fy=0);
					//2+1>max1 2-1
					break;
				case 5:
					fz+fx>x?(fz-=(x-fx),fx=x):(fx+=fz,fz=0);
					//3+1>max1 3-1
					break;
				case 6:
					fz+fy>y?(fz-=(y-fy),fy=y):(fy+=fz,fz=0);
					//3+2>max2 3-2
					break;
			};
			for(int j=0; j<=top; j++) {
				if(a[j].x==fx&&a[j].y==fy&&a[j].z==fz) {
					flag=1;
					break;
				}
			}
			if(flag==0) {
				top++;
				a[top].x=fx;
				a[top].y=fy;
				a[top].z=fz;
				a[top].t=f;//a[1].t=0,a[2].t=1,a[3].t=2; 
				printf("a[%d].x=%d,a[%d].y=%d,a[%d].z=%d\n",top,fx,top,fy,top,fz);
				printf("a[%d].t=%d\n",top,a[top].t);
			}
		}
	}
}
int main() {
	scanf("%d,%d,%d,",&x,&y,&z);
	scanf("%d,%d,%d,",&a[0].x,&a[0].y,&a[0].z);
	scanf("%d",&tar);
	find();
	return 0;
}
