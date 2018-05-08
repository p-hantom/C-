#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

int findString(char stringArray[][100],char *targetString,int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(!strcmp(stringArray[i],targetString)){
			cnt++;
		}
	}
	return cnt;
}

int main(){
	char stringArray[10][100];
	char targetString[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stringArray[i];
	}
	cin>>targetString;
	cout<<findString(stringArray,targetString,n)<<endl;
	
	return 0;
}
