#include "stdio.h"
#include "iostream"
#include "string"
using namespace std;
class CampusAutos
{
private:
string snotag;
public:
CampusAutos(string sno)
{
snotag=sno;
}
string Getsnotag()
{
return snotag;
}
};
void main()
{
CampusAutos *p[5];
bool status[5];
for(int m=0;m<5;m++)
{
status[m]=false;
}
int i=0;
while(1)
{
cout<<"������1��ʾѧ�����룬2��ʾѧ����У"<<endl;
cin>>i;
int biaoji=0;
switch(i)
{
case 1:
{
while(status[biaoji]==true&&biaoji<5)
biaoji++;
if(biaoji<5)
{
cout<<"������ѧ��"<<endl;
string snoin;
cin>>snoin;
while (snoin.length()>8)
{
cout<<"ѧ�ų���9���ַ�,����������"<<endl;
cin>>snoin;
}
p[biaoji]=new CampusAutos(snoin);
status[biaoji]=true;
cout<<"�����ѽ���У԰"<<endl;
}
}
case 2:
{
string pout;
cout<<"���Ҫ��ѧУ��ѧ��"<<endl;
cin>>pout;
for(int out=0;out<5;out++)
{
if(status[out]==true&&pout.compare(p[out]->Getsnotag()))
continue;
else if(status[out]==false)
continue;
else
break;
}
if(out==5)
cout<<"�޴�ѧ��"<<endl;
else
{
cout<<"ѧ��Ϊ"<<p[out]->Getsnotag()<<"�����ѳ�У"<<endl;
delete p[out];
status[out]=false;
}
break;
}
}
}
}