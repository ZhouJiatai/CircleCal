/*
圆计算 V2.5.1 PC版  版权所有 (C) 黑米粥工作室
本程序采用 GPLv3+ 进行授权。
要查看该许可协议，请访问<https://www.gnu.org/licenses/gpl-3.0.txt>。 
要查看该许可协议第三版的非官方中文翻译，请访问<https://jxself.org/translations/gpl-3.zh.shtml>。 
*/ 
#include <iostream>
#include <string>
#include <sstream> 
#include <cstdlib>
using namespace std;
const float PI=3.14;
stringstream strs;
string zh(char c)	//转中文 
{
	switch(c)
	{
		case 'r':case 'R':return "半径";
		case 'd':case 'D':return "直径";
		case 'C':case 'c':return "周长";
		case 'L':case 'l':return "弧长";
		case 'S':case 's':return "面积";
	}
}
void y()	//圆 
{
	char ctr;
	long double r;
	bool ddw;
	string dw;
	getcharacter:cout<<"\n你已知的是圆的什么？\n"
	<<"r.半径r\n"
	<<"d.直径d\n"
	<<"C.周长C\n"
	<<"请做出选择（输入字母，大小写均可）：";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D'&&ctr!='C'&&ctr!='c')
	{
		cout<<"输入错误！请重试...";
		goto getcharacter;
	}
	cout<<"是否要带单位？是输入1，否输入0：";
	cin>>ddw;
	if(ddw)	cout<<"你选择的是：带单位"; 
	else	cout<<"你选择的是：不带单位";
	cout<<"\n请输入这个圆的"<<zh(ctr)<<ctr<<"：";
	cin>>r;
	if(ddw)	cin>>dw;
	switch(ctr)
	{
		case 'd':case 'D':	r/=2;break;
		case 'c':case 'C':	r/=2*PI;break;
	}
	strs.str("");
	strs<<r;
	cout<<"\n这个圆的半径r是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*2;
	cout<<"\nd=2r 这个圆的直径d是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*2*PI;
	cout<<"\nC=2πr这个圆的周长C是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*r*PI;
	cout<<"\nS=πr^2这个圆的面积S是"<<strs.str()<<dw;
	if(ddw)	cout<<"^2";
}
void yh()	//圆环 
{
	char ctr;
	long double r,b_r;
	bool ddw;
	string dw1,dw2;
	getcharacter:cout<<"\n你已知的是圆环的什么？\n"
	<<"r.外半径R和内半径r\n"
	<<"d.外直径D和内直径d\n"
	<<"请做出选择（输入字母，大小写均可）：";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D')
	{
		cout<<"输入错误！请重试...";
		goto getcharacter;
	}
	cout<<"是否要带单位？是输入1，否输入0：";
	cin>>ddw;
	if(ddw)	cout<<"你选择的是：带单位"; 
	else	cout<<"你选择的是：不带单位";
	getd:cout<<"\n请输入这个圆环的外"<<zh(ctr)<<(ctr=='r'||ctr=='R'?'R':'D')<<"：";
	cin>>b_r;
	if(ddw)	cin>>dw1;
	cout<<"请输入这个圆环的内"<<zh(ctr)<<(ctr=='r'||ctr=='R'?'r':'d')<<"：";
	cin>>r;
	if(ddw)	cin>>dw2;
	if(dw1!=dw2)
	{
		cout<<"单位输入错误，两个单位不一样。";
		goto getd;
	}
	if(ctr=='d'||ctr=='D')	b_r/=2,r/=2;
	strs.str("");
	strs<<(b_r+r)*2*PI;
	cout<<"\nC=2π(R+r) 这个圆环的周长C是"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r*b_r-r*r)*PI;
	cout<<"\nS=π(R^2-r^2) 这个圆环的面积S是"<<strs.str()<<dw1;
	if(ddw)	cout<<"^2";
}
void by()	//半圆 
{
	char ctr;
	long double r;
	bool ddw;
	string dw;
	getcharacter:cout<<"\n你已知的是半圆的什么？\n"
	<<"r.半径r\n"
	<<"d.直径d\n"
	<<"C.周长C\n"
	<<"L.弧长L\n"
	<<"请做出选择（输入字母，大小写均可）：";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D'&&ctr!='C'&&ctr!='c'&&ctr!='L'&&ctr!='l')
	{
		cout<<"输入错误！请重试...";
		goto getcharacter;
	}
	cout<<"是否要带单位？是输入1，否输入0：";
	cin>>ddw;
	if(ddw)	cout<<"你选择的是：带单位"; 
	else	cout<<"你选择的是：不带单位";
	cout<<"\n请输入这个半圆的"<<zh(ctr)<<ctr<<"：";
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
	cout<<"\n这个半圆的半径r是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*2;
	cout<<"\nd=2r 这个半圆的直径d是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*(PI+2);
	cout<<"\nC=(2+π)r 这个半圆的周长C是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*PI;
	cout<<"\nL=πr 这个半圆的棱长L是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*r*PI/2;
	cout<<"\nS=πr^2/2 这个半圆的面积S是"<<strs.str()<<dw;
	if(ddw)	cout<<"^2";
}
void byh()	//半圆环 
{
	char ctr;
	long double r,b_r;
	bool ddw;
	string dw1,dw2;
	getcharacter:cout<<"\n你已知的是半圆环的什么？\n"
	<<"r.外半径R和内半径r\n"
	<<"d.外直径D和内直径d\n"
	<<"请做出选择（输入字母，大小写均可）：";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D')
	{
		cout<<"输入错误！请重试...";
		goto getcharacter;
	}
	cout<<"是否要带单位？是输入1，否输入0：";
	cin>>ddw;
	if(ddw)	cout<<"你选择的是：带单位"; 
	else	cout<<"你选择的是：不带单位";
	getd:cout<<"\n请输入这个半圆环的外"<<zh(ctr)<<(ctr=='r'||ctr=='R'?'R':'D')<<"：";
	cin>>b_r;
	if(ddw)	cin>>dw1;
	cout<<"请输入这个半圆环的内"<<zh(ctr)<<(ctr=='r'||ctr=='R'?'r':'d')<<"：";
	cin>>r;
	if(ddw)	cin>>dw2;
	if(dw1!=dw2)
	{
		cout<<"单位输入错误，两个单位不一样。";
		goto getd;
	}
	if(ctr=='d'||ctr=='D')	b_r/=2,r/=2;
	strs.str("");
	strs<<(b_r+r)*PI+(b_r-r)*2;
	cout<<"\nC=π(R+r)+2(R-r) 这个半圆环的周长C是"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r+r)*PI;
	cout<<"\nL=π(R+r) 这个半圆环的弧长L是"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r*b_r-r*r)*PI/2;
	cout<<"\nS=π(R^2-r^2)/2 这个半圆环的面积S是"<<strs.str()<<dw1;
	if(ddw)	cout<<"^2"; 
}
void sx()	//扇形 
{
	long double r,th;
	bool ddw;
	string dw;
	cout<<"\n是否要带单位？是输入1，否输入0：";
	cin>>ddw;
	if(ddw)	cout<<"你选择的是：带单位"; 
	else	cout<<"你选择的是：不带单位";
	cout<<"\n请输入这个扇形的半径r：";
	cin>>r;
	if(ddw)	cin>>dw;
	cout<<"请输入这个圆环的圆心角θ（采用角度制，单位：度）：";
	cin>>th;
	strs.str("");
	strs<<r*2+r*2*PI/360*th;
	cout<<"\nC=2r+2πr/360*θ 这个扇形的周长C是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*2*PI/360*th;
	cout<<"\nL=2πr/360*θ 这个扇形的弧长L是"<<strs.str()<<dw;
	strs.str("");
	strs<<r*r*PI/360*th;
	cout<<"\nS=πr^2/360*θ 这个扇形的面积S是"<<strs.str()<<dw; 
	if(ddw)	cout<<"^2";
}
void sh()	//扇环 
{
	long double r,b_r,th;
	bool ddw;
	string dw1,dw2;
	cout<<"\n是否要带单位？是输入1，否输入0：";
	cin>>ddw;
	if(ddw)	cout<<"你选择的是：带单位"; 
	else	cout<<"你选择的是：不带单位";
	getd:cout<<"\n请输入这个扇环的外半径R：";
	cin>>b_r;
	if(ddw)	cin>>dw1;
	cout<<"请输入这个扇环的内半径r：";
	cin>>r;
	if(ddw)	cin>>dw2;
	if(dw1!=dw2)
	{
		cout<<"单位输入错误，两个单位不一样。";
		goto getd;
	}
	cout<<"请输入这个扇环的圆心角θ（采用角度制）：";
	cin>>th;
	strs.str("");
	strs<<(b_r-r)*2+(b_r+r)*2*PI/360*th;
	cout<<"\nC=2(R-r)+2π(R+r)/360*θ 这个扇环的周长C是"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r+r)*2*PI/360*th;
	cout<<"\nL=2π(R+r)/360*θ 这个扇环的弧长L是"<<strs.str()<<dw1;
	strs.str("");
	strs<<(b_r*b_r-r*r)*PI/360*th;
	cout<<"\nS=π(R^2-r^2)/360*θ 这个扇环的面积S是"<<strs.str()<<dw1; 
	if(ddw)	cout<<"^2";
}
void wf()	//外方内圆 
{
	char ctr; 
	long double r;
	bool ddw;
	string dw;
	getcharacter:cout<<"\n你已知的是外方内圆图形的什么？\n"
	<<"r.圆的半径r（正方形边长a的一半）\n"
	<<"d.圆的直径d（正方形的边长a）\n"
	<<"请做出选择（输入字母，大小写均可）：";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D')
	{
		cout<<"输入错误！请重试...";
		goto getcharacter;
	}
	cout<<"是否要带单位？是输入1，否输入0：";
	cin>>ddw;
	if(ddw)	cout<<"你选择的是：带单位"; 
	else	cout<<"你选择的是：不带单位";
	cout<<"\n请输入这个外方内圆图形中圆的"<<ctr<<"：";
	cin>>r;
	if(ddw)	cin>>dw;
	if(ctr=='d'||ctr=='D')	r/=2;
	strs.str("");
	strs<<r*r*(4-PI);
	cout<<"S=(4-π)r^2 这个外方内圆图形中正方形与圆形中间部分的面积S是"<<strs.str()<<dw;
	if(ddw)	cout<<"^2";
}
void wy()	//外圆内方 
{
	char ctr; 
	long double r;
	bool ddw;
	string dw;
	getcharacter:cout<<"\n你已知的是外圆内方图形的什么？\n"
	<<"r.圆的半径r（正方形对角线d的一半）\n"
	<<"d.圆的直径d（正方形的对角线d）\n"
	<<"请做出选择（输入字母，大小写均可）：";
	cin>>ctr;
	if(ctr!='r'&&ctr!='R'&&ctr!='d'&&ctr!='D')
	{
		cout<<"输入错误！请重试...";
		goto getcharacter;
	}
	cout<<"是否要带单位？是输入1，否输入0：";
	cin>>ddw;
	if(ddw)	cout<<"你选择的是：带单位"; 
	else	cout<<"你选择的是：不带单位";
	cout<<"\n请输入这个外圆内方图形中圆的"<<ctr<<"：";
	cin>>r;
	if(ddw)	cin>>dw;
	if(ctr=='d'||ctr=='D')	r/=2;
	strs.str("");
	strs<<r*r*(PI-2);
	cout<<"S=(π-2)r^2 这个外圆内方图形中正方形与圆形中间部分的面积S是"<<strs.str()<<dw;
	if(ddw)	cout<<"^2";
}
void ctrl()
{
	short s;
	getctrl:cout<<"你要求什么？\n"
	<<"1.圆\n"
	<<"2.圆环\n"
	<<"3.半圆\n"
	<<"4.半圆环\n"
	<<"5.扇形\n"
	<<"6.扇环\n"
	<<"7.外方内圆\n" 
	<<"8.外圆内方\n"
	<<"请选择（输入数字）：";
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
			cout<<"输入错误，请重试。\n";
			goto getctrl;
	}
}	//前往相应的函数 
int main()
{
	system("title=圆计算 V2.5.1 PC版");
	system("color F0");
	char c; 
	setm:cout<<"本程序有六种显示模式：\n1.普通模式 \n2.护眼模式 \n3.夜间模式 \n4.活泼模式 \n5.明亮模式\n6.经典模式\n" 
	<<"请选择（输入数字）：";
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
			cout<<"输入错误，请重试。\n";
			goto setm;
	}
	system("cls");
	cout<<"圆计算 V2.5.1 PC版\n为方便大家计算有关圆的数据，告别复杂的圆周率计算，黑米粥工作室特推出"
	<<"圆计算 V2.5.1 PC版 程序，解决大家的圆计算难题。（π取3.14，默认保留6位有效数字）\n\n"
	<<"Powered by GCC & Dev-C++\n\n";
	system("pause");
	system("cls");
	cout<<"更新日志：\n"
	<<"1.新增“显示模式选择”，个性化更突出；\n"
	<<"2.增加了计算公式显示；\n"
	<<"3.更改许可协议为GNU 通用公共许可证；\n"
	<<"……\n\n" 
	<<"有人可能会问，为什么通用版不能像PC版那样清屏改颜色。这个问题黑米粥工作室也没法解决，"
	<<"因为清屏和改颜色是用Windows的批处理命令实现的，而其他平台上是否也有类似的命令，"
	<<"黑米粥工作室尚未得知。如果大家有什么好的建议，欢迎联系我们。\n\n"
	<<"本程序项目的官方网站是【https://github.com/ZhouJiatai/CircleCal】。\n\n";
	system("pause");
	system("cls");
	cout<<"本程序采用 GPLv3+ 进行授权。\n\n"
	<<"要查看该许可协议英文原版，\n请访问<https://www.gnu.org/licenses/gpl-3.0.txt>。\n"
	<<"如需该协议的中文非官方翻译，\n请访问<https://jxself.org/translations/gpl-3.zh.shtml>。\n\n"
	<<"输入1后按回车键查看许可协议英文原版，\n"
	<<"输入2后按回车键查看许可协议的中文非官方翻译，\n"
	<<"输入其他任意字符后按回车键继续使用程序。\n请选择：";
	cin>>c;
	switch(c)
	{
		case '1':system("start https://www.gnu.org/licenses/gpl-3.0.txt");break; 
		case '2':system("start https://jxself.org/translations/gpl-3.zh.shtml");break;
	}
	system("cls");
	cout<<"如因擅自使用本程序所造成的一切后果，黑米粥工作室概不负责。\n\n";
	fun_ctrl:system("pause");
	system("cls");
	ctrl();
	cout<<"\n\n如果不用继续计算了，按右上角的×退出；如果还要继续计算，";
	goto fun_ctrl;
	return 0;
}
