#include <stdio.h>
struct aba{
int a;
char*s;	
};
struct aba baba={0};
struct vis;
void print(struct vis*);
struct vis{
int m1;
int m2;
int m3;
void(*print)(struct vis*);
}vi={10,.print=print};

void print(struct vis*vis){printf("%d, %d %d\n",vis->m1,vis->m2,vis->m3);}//im prinzip das kann mann ohne class

int main(){
if(baba.s==0)printf("baba\n");
printf("baba.s %s\n",baba.s);
//struct vis vi={.m1=1,.m2=2,.m3=3,.print=print};
//struct vis vi={1,2,3,print};
//struct vis vi={10,2,.print=print};// C++ Values v(1,2,3)
vi.print(&vi);
return 0;	
}
