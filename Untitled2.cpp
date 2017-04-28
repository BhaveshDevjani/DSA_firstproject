#include<iostream>
#include<string.h>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
	
	char name[10];
	int ascii[10];
	int nonabs[10];
	int neg[10];
	int preorder[10];
	int inorder[10];
	int k1,k2,k3,k4;
	vector<int> encry;
	cin>>name;
	for(int i=0;i<10;i++)
	{
		ascii[i]=int(name[i]);
	}
	for(int i=0;i<strlen(name);i++)
	cout<<ascii[i]<<endl;
	for(int i=0;i<(strlen(name)-1);i++){
	
	neg[i]=abs(ascii[i]-ascii[i+1]);
	nonabs[i]=(ascii[i]-ascii[i+1]);
	cout<<neg[i]<<endl;}
	int G=neg[0];
	for(int i=0;i<strlen(name);i++)
	{
		if(G<neg[i])
		G=neg[i];
	}
	cout<<G;
	for(int i=0;i<strlen(name);i++)
	{
		nonabs[i]=G-nonabs[i]+k1;
		preorder[i]=preorder[i]+k2;
		inorder[i]=inorder[i]+k3;
	}
	int N=strlen(name)+k4;
	G=G+k4;
	
	return 0;
	
}
