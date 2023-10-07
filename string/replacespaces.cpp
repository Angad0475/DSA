#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	int n=str.length();
	string temp="";
	for(int i=0;i<n;i++){
		if(str7[i]==' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}