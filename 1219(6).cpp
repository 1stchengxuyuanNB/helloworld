#include<stdio.h>
int main(){
	struct ScoreType
	{
		int math;
		int eng;
		int phy;
		int sum;
	};
	int n; 
	scanf("%d",&n);
	struct ScoreType stu[n];
	for (int i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].math,&stu[i].eng,&stu[i].phy);
		stu[i].sum=stu[i].math+stu[i].eng+stu[i].phy;
	}
	int max=stu[0].sum;
	for(int j=0;j<n;j++){
		if(stu[j].sum>max){
			max=stu[j].sum;
		}
	}printf("%d",max);
}
