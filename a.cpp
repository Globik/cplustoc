#include <stdio.h>
#include <iostream>
#include <vector>
struct aba{
int a;
char*s;	
};
struct aba baba={0};

class Values{
private:
int m1;
int m2;
int m3;
public:
Values(int v1,int v2,int v3):m1(v1),m2(v2),m3(v3){}
void print(){printf("%d, %d, %d\n",this->m1,m2,m3);}	
};
class ValuesL{
private:
const int m1;
public:
ValuesL():m1{7}{}
	
};

int main(){
printf("baba.a: %d\n",baba.a);
printf("baba.s: %s\n",baba.s);
if(baba.s){printf("baba\n");}

double value1(4.2);
printf("value1: %f\n",value1);
int val(4);
int val1{4}; //extended initializer lists only available with -std=c++11 or -std=gnu++11
int val2={4};
char val3{'a'};
char val4={'4'};

printf("%d, %d, %d \n",val,val1,val2);
printf("val3 %d , %d\n",val3,val4);// 97, 52
Values v(1,2,3);//struct vis vi={.m1=1,.m2=2,.m3=3,.print=print};
v.print();//	vi.print(&vi);
Values suka{1,2,3};//однохуйственно что и в круглых скобках
suka.print();
Values suka1={1,2,3};//the same
suka1.print();
ValuesL suka2();
//printf("%d\n",suka2());

int*a=new int[2]{1,2};
printf("%d-%d\n",a[0],a[1]);
delete a;
printf("%d\n",a[0]);

int a2[]={2,3};
std::vector<int> vec(&a2[0],&a2[sizeof(a2)/sizeof(int)-1]);

return 0;	
}
