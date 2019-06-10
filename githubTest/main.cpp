#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
	int main(void){
		int i;
		string ret;
	for(i=0;i<3;i++){
		cout<<"开始第"<<i+1<<"次相亲"<<endl;
		cout<<"你喜欢打王者吗"<<endl;
		cin>>ret;
	if(ret!="yes"){
		continue;
	}
	else{
		cout<<"加个微信吧!"<<endl;
	}   break;
	}
	cout<<"我中意你,你中意我吗?"<<endl;
	cin>>ret;
	if(ret=="中意"){
		goto happy;
	}
	system("pause");
	return 0;

	happy:
	 cout<<"开启甜蜜之旅..."<<endl;
	 system("pause");
	 return 0;
	}