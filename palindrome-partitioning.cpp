#include <iostream>
#include <vector>
#include <string>
using namespace std;
//substr用法： 
//  std::string str="We think in generalities, but we live in details.";
//                                           // (quoting Alfred N. Whitehead)
//
//  std::string str2 = str.substr (3,5);     // "think" 3:pos;5:len
//
//  std::size_t pos = str.find("live");      // position of "live" in str
//
//  std::string str3 = str.substr (pos);     // get from "live" to the end

//pop_back()用法：
//Removes the last element in the vector, effectively reducing the container size by one. 

void dfs(string s,vector<string>&path,vector<vector<string> > & res){
	if(s.size()<1){
		res.push_back(path);
		return;
	}
	for(int i=0;i<s.size();i++){
		int begin=0,end=i;//a way to judge if it's a palindrome 
		while(begin<end){
			if(s[begin]==s[end]){
				begin++;
				end--;
			}
			else{				
				break;
			}			
		}
		if(begin>=end){
			path.push_back(s.substr(0,i+1));//len=i+1 , not i!
			dfs(s.substr(i+1),path,res);
			path.pop_back();
		}
	}
}

vector<vector<string> > partition(string s){
	vector<vector<string> > res;
	vector<string> path;
	dfs(s,path,res);
	return res; 
}

int main(){
	
	return 0;
}
