#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int threeSumClosest(int *a,int target){
	int i,j,k;
	int sum=0,min=abs(target-a[0]-a[1]-a[2]);
	int sum1,cnt=0;
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len-1;j++){
			for(k=j+1;k<len;k++){
				sum=a[i]+a[j]+a[k];
				int temp=abs(sum-target);
				if(temp<min){
					min=temp;
					sum1=sum;
				}
				cnt++;
			}
		}
	}
	cout<<"f2:cnt "<<cnt<<endl;
	return sum;
}

int f3(vector<int> &num, int target) {
        int n = num.size();
        int result = num[0] + num[1] + num[n-1],cnt=0;
        sort(num.begin(),num.end());
        for(int i=0;i<n-2;i++)
        {
            int start = i + 1;
            int end = n - 1;
            while(start < end)
            {
                int sum = num[i] + num[start] + num[end];
                if(sum < target)
                    start++;
                else
                    end--;
                 
                if(abs(sum-target) < abs(result-target))
                    result = sum;
                cnt++;
            }
        }
        cout<<"f3:cnt "<<cnt<<endl;
        return result;
    }

int f2(vector<int> &a,int target){
	int i,j,k;
	int sum=a[0]+a[1]+a[2],min=abs(target-a[0]-a[1]-a[2]);
	int sum1=sum,cnt=0;
	int len=a.size();
	for(i=0;i<len-2;i++){
		for(j=i+1;j<len-1;j++){
			for(k=j+1;k<len;k++){
				sum=a[i]+a[j]+a[k];
				//cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" sum:"<<sum<<endl;
				int temp=abs(sum-target);
				if(temp<min){
					min=temp;
					sum1=sum;
				}
				cnt++;
			}
		}
	}
	cout<<"f2:cnt "<<cnt<<endl;
	return sum1;
}

int main(){
	int aa[]={1,2,-1,4},target=1;
	vector<int> a;
	a.push_back(1);
	a.push_back(1);
	a.push_back(1);
	a.push_back(-1);
	a.push_back(2);
	a.push_back(-4);
//	int i;
//	for(i=0;i<a.size();i++){
//		cout<<a[i]<<endl;
//	}
	cout<<f2(a,target)<<endl;
	cout<<f3(a,target)<<endl;
	
	return 0;
}
