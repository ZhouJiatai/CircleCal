/*
Բ���� V2.5.1 PC��  ��Ȩ���� (C) �����๤����
��������� GPLv3+ ������Ȩ��
Ҫ�鿴�����Э�飬�����<https://www.gnu.org/licenses/gpl-3.0.txt>�� 
Ҫ�鿴�����Э�������ķǹٷ����ķ��룬�����<https://jxself.org/translations/gpl-3.zh.shtml>�� 
*/ 
#include <iostream>
#include <string>
#include <sstream> 
#include <cstdlib>
using namespace std;
const float PI=3.14;
stringstream strs;
string zh(char c)	//ת���� 
{
	switch(c)
	{
		case 'r':case 'R':return "�뾶";
		case 'd':case 'D':return "ֱ��";
		case 'C':case 'c':return "�ܳ�";
		case 'L':case 'l':return "����";
		case 'S':case 's':return "���";
	}
}
void y()	//Բ 
{
	char ctr;
	long double r;
	bool ddw;
	string dw;
	getcharacter:cout<<"\n����֪����Բ��ʲô��\n"
	<<"r.�뾶r\n"
	<<"d.ֱ��d\n"
	<<"C.�ܳ�C\n"
	<<"������ѡ��������ĸ����Сд���ɣ���";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D'&&ctr!='C'&&ctr!='c')
	{
		cout<<"�������������...";
		goto getcharacter;
	}
	cout<<"�Ƿ�Ҫ����λ��������1��������0��";
	cin>>ddw;
	if(ddw)	cout<<"��ѡ����ǣ�����λ"; 
	else	cout<<"��ѡ����ǣ�������λ";
	cout<<"\n���������Բ��"<<zh(ctr)<<ctr<<"��";
	cin>>r;
	if(ddw)	cin>>dw;
	switch(ctr)
	{
		case 'd':case 'D':	r/=2;break;
		case 'c':case 'C':	r/=2*PI;break;
	}
	strs.str("");
	strs<<r;
	cout<<"\n���Բ�İ뾶r��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*2;
	cout<<"\nd=2r ���Բ��ֱ��d��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*2*PI;
	cout<<"\nC=2��r���Բ���ܳ�C��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*r*PI;
	cout<<"\nS=��r^2���Բ�����S��"<<strs.str()<<dw;
	if(ddw)	cout<<"^2";
}
void yh()	//Բ�� 
{
	char ctr;
	long double r,b_r;
	bool ddw;
	string dw1,dw2;
	getcharacter:cout<<"\n����֪����Բ����ʲô��\n"
	<<"r.��뾶R���ڰ뾶r\n"
	<<"d.��ֱ��D����ֱ��d\n"
	<<"������ѡ��������ĸ����Сд���ɣ���";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D')
	{
		cout<<"�������������...";
		goto getcharacter;
	}
	cout<<"�Ƿ�Ҫ����λ��������1��������0��";
	cin>>ddw;
	if(ddw)	cout<<"��ѡ����ǣ�����λ"; 
	else	cout<<"��ѡ����ǣ�������λ";
	getd:cout<<"\n���������Բ������"<<zh(ctr)<<(ctr=='r'||ctr=='R'?'R':'D')<<"��";
	cin>>b_r;
	if(ddw)	cin>>dw1;
	cout<<"���������Բ������"<<zh(ctr)<<(ctr=='r'||ctr=='R'?'r':'d')<<"��";
	cin>>r;
	if(ddw)	cin>>dw2;
	if(dw1!=dw2)
	{
		cout<<"��λ�������������λ��һ����";
		goto getd;
	}
	if(ctr=='d'||ctr=='D')	b_r/=2,r/=2;
	strs.str("");
	strs<<(b_r+r)*2*PI;
	cout<<"\nC=2��(R+r) ���Բ�����ܳ�C��"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r*b_r-r*r)*PI;
	cout<<"\nS=��(R^2-r^2) ���Բ�������S��"<<strs.str()<<dw1;
	if(ddw)	cout<<"^2";
}
void by()	//��Բ 
{
	char ctr;
	long double r;
	bool ddw;
	string dw;
	getcharacter:cout<<"\n����֪���ǰ�Բ��ʲô��\n"
	<<"r.�뾶r\n"
	<<"d.ֱ��d\n"
	<<"C.�ܳ�C\n"
	<<"L.����L\n"
	<<"������ѡ��������ĸ����Сд���ɣ���";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D'&&ctr!='C'&&ctr!='c'&&ctr!='L'&&ctr!='l')
	{
		cout<<"�������������...";
		goto getcharacter;
	}
	cout<<"�Ƿ�Ҫ����λ��������1��������0��";
	cin>>ddw;
	if(ddw)	cout<<"��ѡ����ǣ�����λ"; 
	else	cout<<"��ѡ����ǣ�������λ";
	cout<<"\n�����������Բ��"<<zh(ctr)<<ctr<<"��";
	cin>>r;
	if(ddw)	cin>>dw;
	switch(ctr)
	{
		case 'd':case 'D':	r/=2;break;
		case 'c':case 'C':	r/=PI+2;break;
		case 'l':case 'L':	r/=PI;break;
	}
	strs.str("");
	strs<<r;
	cout<<"\n�����Բ�İ뾶r��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*2;
	cout<<"\nd=2r �����Բ��ֱ��d��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*(PI+2);
	cout<<"\nC=(2+��)r �����Բ���ܳ�C��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*PI;
	cout<<"\nL=��r �����Բ���ⳤL��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*r*PI/2;
	cout<<"\nS=��r^2/2 �����Բ�����S��"<<strs.str()<<dw;
	if(ddw)	cout<<"^2";
}
void byh()	//��Բ�� 
{
	char ctr;
	long double r,b_r;
	bool ddw;
	string dw1,dw2;
	getcharacter:cout<<"\n����֪���ǰ�Բ����ʲô��\n"
	<<"r.��뾶R���ڰ뾶r\n"
	<<"d.��ֱ��D����ֱ��d\n"
	<<"������ѡ��������ĸ����Сд���ɣ���";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D')
	{
		cout<<"�������������...";
		goto getcharacter;
	}
	cout<<"�Ƿ�Ҫ����λ��������1��������0��";
	cin>>ddw;
	if(ddw)	cout<<"��ѡ����ǣ�����λ"; 
	else	cout<<"��ѡ����ǣ�������λ";
	getd:cout<<"\n�����������Բ������"<<zh(ctr)<<(ctr=='r'||ctr=='R'?'R':'D')<<"��";
	cin>>b_r;
	if(ddw)	cin>>dw1;
	cout<<"�����������Բ������"<<zh(ctr)<<(ctr=='r'||ctr=='R'?'r':'d')<<"��";
	cin>>r;
	if(ddw)	cin>>dw2;
	if(dw1!=dw2)
	{
		cout<<"��λ�������������λ��һ����";
		goto getd;
	}
	if(ctr=='d'||ctr=='D')	b_r/=2,r/=2;
	strs.str("");
	strs<<(b_r+r)*PI+(b_r-r)*2;
	cout<<"\nC=��(R+r)+2(R-r) �����Բ�����ܳ�C��"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r+r)*PI;
	cout<<"\nL=��(R+r) �����Բ���Ļ���L��"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r*b_r-r*r)*PI/2;
	cout<<"\nS=��(R^2-r^2)/2 �����Բ�������S��"<<strs.str()<<dw1;
	if(ddw)	cout<<"^2"; 
}
void sx()	//���� 
{
	long double r,th;
	bool ddw;
	string dw;
	cout<<"\n�Ƿ�Ҫ����λ��������1��������0��";
	cin>>ddw;
	if(ddw)	cout<<"��ѡ����ǣ�����λ"; 
	else	cout<<"��ѡ����ǣ�������λ";
	cout<<"\n������������εİ뾶r��";
	cin>>r;
	if(ddw)	cin>>dw;
	cout<<"���������Բ����Բ�ĽǦȣ����ýǶ��ƣ���λ���ȣ���";
	cin>>th;
	strs.str("");
	strs<<r*2+r*2*PI/360*th;
	cout<<"\nC=2r+2��r/360*�� ������ε��ܳ�C��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*2*PI/360*th;
	cout<<"\nL=2��r/360*�� ������εĻ���L��"<<strs.str()<<dw;
	strs.str("");
	strs<<r*r*PI/360*th;
	cout<<"\nS=��r^2/360*�� ������ε����S��"<<strs.str()<<dw; 
	if(ddw)	cout<<"^2";
}
void sh()	//�Ȼ� 
{
	long double r,b_r,th;
	bool ddw;
	string dw1,dw2;
	cout<<"\n�Ƿ�Ҫ����λ��������1��������0��";
	cin>>ddw;
	if(ddw)	cout<<"��ѡ����ǣ�����λ"; 
	else	cout<<"��ѡ����ǣ�������λ";
	getd:cout<<"\n����������Ȼ�����뾶R��";
	cin>>b_r;
	if(ddw)	cin>>dw1;
	cout<<"����������Ȼ����ڰ뾶r��";
	cin>>r;
	if(ddw)	cin>>dw2;
	if(dw1!=dw2)
	{
		cout<<"��λ�������������λ��һ����";
		goto getd;
	}
	cout<<"����������Ȼ���Բ�ĽǦȣ����ýǶ��ƣ���";
	cin>>th;
	strs.str("");
	strs<<(b_r-r)*2+(b_r+r)*2*PI/360*th;
	cout<<"\nC=2(R-r)+2��(R+r)/360*�� ����Ȼ����ܳ�C��"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r+r)*2*PI/360*th;
	cout<<"\nL=2��(R+r)/360*�� ����Ȼ��Ļ���L��"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r*b_r-r*r)*PI/360*th;
	cout<<"\nS=��(R^2-r^2)/360*�� ����Ȼ������S��"<<strs.str()<<dw1; 
	if(ddw)	cout<<"^2";
}
void wf()	//�ⷽ��Բ 
{
	char ctr; 
	long double r;
	bool ddw;
	string dw;
	getcharacter:cout<<"\n����֪�����ⷽ��Բͼ�ε�ʲô��\n"
	<<"r.Բ�İ뾶r�������α߳�a��һ�룩\n"
	<<"d.Բ��ֱ��d�������εı߳�a��\n"
	<<"������ѡ��������ĸ����Сд���ɣ���";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D')
	{
		cout<<"�������������...";
		goto getcharacter;
	}
	cout<<"�Ƿ�Ҫ����λ��������1��������0��";
	cin>>ddw;
	if(ddw)	cout<<"��ѡ����ǣ�����λ"; 
	else	cout<<"��ѡ����ǣ�������λ";
	cout<<"\n����������ⷽ��Բͼ����Բ��"<<ctr<<"��";
	cin>>r;
	if(ddw)	cin>>dw;
	if(ctr=='d'||ctr=='D')	r/=2;
	strs.str("");
	strs<<r*r*(4-PI);
	cout<<"S=(4-��)r^2 ����ⷽ��Բͼ������������Բ���м䲿�ֵ����S��"<<strs.str()<<dw;
	if(ddw)	cout<<"^2";
}
void wy()	//��Բ�ڷ� 
{
	char ctr; 
	long double r;
	bool ddw;
	string dw;
	getcharacter:cout<<"\n����֪������Բ�ڷ�ͼ�ε�ʲô��\n"
	<<"r.Բ�İ뾶r�������ζԽ���d��һ�룩\n"
	<<"d.Բ��ֱ��d�������εĶԽ���d��\n"
	<<"������ѡ��������ĸ����Сд���ɣ���";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D')
	{
		cout<<"�������������...";
		goto getcharacter;
	}
	cout<<"�Ƿ�Ҫ����λ��������1��������0��";
	cin>>ddw;
	if(ddw)	cout<<"��ѡ����ǣ�����λ"; 
	else	cout<<"��ѡ����ǣ�������λ";
	cout<<"\n�����������Բ�ڷ�ͼ����Բ��"<<ctr<<"��";
	cin>>r;
	if(ddw)	cin>>dw;
	if(ctr=='d'||ctr=='D')	r/=2;
	strs.str("");
	strs<<r*r*(PI-2);
	cout<<"S=(��-2)r^2 �����Բ�ڷ�ͼ������������Բ���м䲿�ֵ����S��"<<strs.str()<<dw;
	if(ddw)	cout<<"^2";
}
void ctrl()
{
	short s;
	getctrl:cout<<"��Ҫ��ʲô��\n"
	<<"1.Բ\n"
	<<"2.Բ��\n"
	<<"3.��Բ\n"
	<<"4.��Բ��\n"
	<<"5.����\n"
	<<"6.�Ȼ�\n"
	<<"7.�ⷽ��Բ\n" 
	<<"8.��Բ�ڷ�\n"
	<<"��ѡ���������֣���";
	cin>>s;
	system("cls");
	switch(s)
	{
		case 1:
			y();
			break; 
		case 2:
			yh();
			break; 
		case 3:
			by();
			break; 
		case 4:
			byh();
			break; 
		case 5:
			sx();
			break; 
		case 6:
			sh();
			break;
		case 7:
			wf();
			break;
		case 8:
			wy();
			break;
		default:
			cout<<"������������ԡ�\n";
			goto getctrl;
	}
}	//ǰ����Ӧ�ĺ��� 
int main()
{
	system("title=Բ���� V2.5.1 PC��");
	system("color F0");
	char c; 
	setm:cout<<"��������������ʾģʽ��\n1.��ͨģʽ \n2.����ģʽ \n3.ҹ��ģʽ \n4.����ģʽ \n5.����ģʽ\n6.����ģʽ\n" 
	<<"��ѡ���������֣���";
	cin>>c;
	switch(c)
	{
		case '1':break; 
		case '2':system("color 3A");break; 
		case '3':system("color 03");break; 
		case '4':system("color B9");break; 
		case '5':system("color 4E");break; 
		case '6':system("color 0F");break; 
		default:
			cout<<"������������ԡ�\n";
			goto setm;
	}
	system("cls");
	cout<<"Բ���� V2.5.1 PC��\nΪ�����Ҽ����й�Բ�����ݣ�����ӵ�Բ���ʼ��㣬�����๤�������Ƴ�"
	<<"Բ���� V2.5.1 PC�� ���򣬽����ҵ�Բ�������⡣����ȡ3.14��Ĭ�ϱ���6λ��Ч���֣�\n\n"
	<<"Powered by GCC & Dev-C++\n\n";
	system("pause");
	system("cls");
	cout<<"������־��\n"
	<<"1.��������ʾģʽѡ�񡱣����Ի���ͻ����\n"
	<<"2.�����˼��㹫ʽ��ʾ��\n"
	<<"3.�������Э��ΪGNU ͨ�ù������֤��\n"
	<<"����\n\n" 
	<<"���˿��ܻ��ʣ�Ϊʲôͨ�ð治����PC��������������ɫ�������������๤����Ҳû�������"
	<<"��Ϊ�����͸���ɫ����Windows������������ʵ�ֵģ�������ƽ̨���Ƿ�Ҳ�����Ƶ����"
	<<"�����๤������δ��֪����������ʲô�õĽ��飬��ӭ��ϵ���ǡ�\n\n"
	<<"��������Ŀ�Ĺٷ���վ�ǡ�https://github.com/ZhouJiatai/CircleCal����\n\n";
	system("pause");
	system("cls");
	cout<<"��������� GPLv3+ ������Ȩ��\n\n"
	<<"Ҫ�鿴�����Э��Ӣ��ԭ�棬\n�����<https://www.gnu.org/licenses/gpl-3.0.txt>��\n"
	<<"�����Э������ķǹٷ����룬\n�����<https://jxself.org/translations/gpl-3.zh.shtml>��\n\n"
	<<"����1�󰴻س����鿴���Э��Ӣ��ԭ�棬\n"
	<<"����2�󰴻س����鿴���Э������ķǹٷ����룬\n"
	<<"�������������ַ��󰴻س�������ʹ�ó���\n��ѡ��";
	cin>>c;
	switch(c)
	{
		case '1':system("start https://www.gnu.org/licenses/gpl-3.0.txt");break; 
		case '2':system("start https://jxself.org/translations/gpl-3.zh.shtml");break;
	}
	system("cls");
	cout<<"��������ʹ�ñ���������ɵ�һ�к���������๤���ҸŲ�����\n\n";
	fun_ctrl:system("pause");
	system("cls");
	ctrl();
	cout<<"\n\n������ü��������ˣ������Ͻǵġ��˳��������Ҫ�������㣬";
	goto fun_ctrl;
	return 0;
}
