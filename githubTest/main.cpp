#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
	int main(void){
		int i;
		string ret;
	for(i=0;i<3;i++){
		cout<<"��ʼ��"<<i+1<<"������"<<endl;
		cout<<"��ϲ����������"<<endl;
		cin>>ret;
	if(ret!="yes"){
		continue;
	}
	else{
		cout<<"�Ӹ�΢�Ű�!"<<endl;
	}   break;
	}
	cout<<"��������,����������?"<<endl;
	cin>>ret;
	if(ret=="����"){
		goto happy;
	}
	system("pause");
	return 0;

	happy:
	 cout<<"��������֮��..."<<endl;
	 system("pause");
	 return 0;
	}