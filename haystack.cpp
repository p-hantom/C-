#include <iostream>
using namespace std;
 char *strStr2(char *haystack, char *needle) {
        if (*needle == '\0')
        return haystack;
    while (*haystack != '\0') {
        if (*haystack == *needle) {
            char *h = haystack;
            char *n = needle;
            while (*h != '\0' && *n != '\0' && *h == *n) {
                h++;
                n++;
            }
            if (*n == '\0')
                return haystack;
        }
        haystack++;
    }
    return NULL;
    }
char *strStr(char *haystack, char *needle){
	if(*needle=='\0'){
		return haystack;
	}
	char *p=haystack,*temp;
	while(*p!='\0'){
		char* p1=p;
		temp=needle;
		while(*p1==*temp&&*temp!='\0'&&*p1!='\0'){
			p1++;
			temp++;
		}
		if(*temp=='\0'){
			haystack=p;
			return haystack;
		}
		p++;
	}
	
	return NULL;
}

int main(){
	//char hay[]="abcdabc",needle[]="dcd";
	char hay[]="ab",needle[]="abc";
	char *p=strStr2(hay,needle);
	if(p==NULL){
		cout<<'1'<<endl;
	}
	else{
		cout<<*p<<endl;
	}
	
	
	return 0;
}
