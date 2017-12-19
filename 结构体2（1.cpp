#include<stdio.h>
#include<string.h>
int main(){
	struct ScoreType
	{
		char name[100];
		int math;
		int eng;
		int sum;
	};
	int n; 
	scanf("%d",&n);
	struct ScoreType stu[n];
	for (int i=0;i<n;i++){
		scanf("%s%d%d",stu[i].name,&stu[i].math,&stu[i].eng);
		stu[i].sum=stu[i].math+stu[i].eng;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(stu[i].sum<stu[j].sum){
				int temp=stu[i].sum;
				stu[i].sum=stu[j].sum;
				stu[j].sum=temp;
				char a[100];
				strcpy(a, stu[i].name);
				strcpy(stu[i].name ,stu[j].name);
				strcpy(stu[j].name,a);
			} 
		} 
	}
	for(int j=0;j<n;j++){
		printf("%s %d\n",stu[j].name,stu[j].sum);
	
	}		
}






