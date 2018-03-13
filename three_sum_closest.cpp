
/*
链接：https://www.nowcoder.com/questionTerminal/291a866d7c904563876b373b0b157dde
来源：牛客网

Similar to 3 Sum problem, use 3 pointers to point current element, 
next element and the last element. If the sum is less than target,
 it means we have to add a larger element so next element move to the next. 
 If the sum is greater, it means we have to add a smaller element so last element 
 move to the second last element. Keep doing this until the end. 
 Each time compare the difference between sum and target, 
 if it is less than minimum difference so far, 
then replace result with it, otherwise keep iterating.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int> &num,int target) {
	int n = num.size();
    int result = num[0] + num[1] + num[n-1];
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
        }
    }
    return result;
}
vector<vector<int> > fourSum_WithRepeat(vector<int> &num, int target) {
    vector<vector<int> > total;
        
    int n = num.size();
    if(n<4)  return total;
    
    sort(num.begin(),num.end());
    int j=n-1;
    for(int i=0;i<j-2;i++)
    {
    	 for(;j>=i+2;j--)
    	 {
    	 
	        int start = i + 1;
	        int end = j - 1;
	        while(start < end)
	        {
	            int sum = num[i] + num[start] + num[end]+ num[j];
	            
	            if(sum == target)
	            {
	            	vector<int> v(4);
	            	v[0]=num[i];
	            	v[1]=num[start];
	            	v[2]=num[end];
	            	v[3]=num[j];
	            	total.push_back(v);
	            	//cout<<num[i] <<","<< num[start]  <<","<< num[end] <<","<<num[j]<<endl;
	            	start++;
	            	end--;
	            }
	            else if(sum < target){
	            	start++;
	            }
	            else{
	            	end--;
	            }
	      }
		}
    }
    
	return total;
}
int main(){
	int a[]={-3,-1,0,2,4,5};//{1, 0, -1, 0, -2, 2};//{-1,2,1,-4};
	int target = 0;
	int len = sizeof(a)/sizeof(int);
	vector<int> v(len);
	for(int i=0;i<len;i++){
		v[i]=a[i];
	}
	int result=threeSumClosest(v,target);
	//cout<<result<<endl; 
	fourSum_WithRepeat(v,target);
	return 0;
}
