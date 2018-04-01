#include <stdio.h> 
#include <string.h>
#include <iostream>
using namespace std;

int run(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		return 1;
	}
	return 0;
}

int y_day(int y){//y年有几天 
	if(run(y)){
		return 366;
	}
	return 365;
}

int m_day(int y,int m){//y年第m月有几天 
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		return 31;
	}
	else if(m==4||m==6||m==9||m==11){
		return 30;
	}
	if(run(y)){
		return 29;
	}
	return 28;
}

int main(){
	int y=2017,m=11,d=11,i,cnt=0;
	scanf("%d-%d-%d",&y,&m,&d);
//	cout<<y<<" "<<m<<" "<<d<<endl;
//	if(d==0){
//		scanf("%d",&d);
//	}
	//printf("%d %d",m,d);
	for(i=1900;i<y;i++){
		cnt+=y_day(i);
	} 
	for(i=1;i<m;i++){
		cnt+=m_day(y,i);
	}
	cnt+=d;
	
	int x=cnt%7;
	switch(x){
		case 1:printf("Monday\n");break;
		case 2:printf("Tuesday\n");break;
		case 3:printf("Wednesday\n");break;
		case 4:printf("Thursday\n");break;
		case 5:printf("Friday\n");break;
		case 6:printf("Saturday\n");break;
		case 0:printf("Sunday\n");break;
	}
	
	return 0;
}
