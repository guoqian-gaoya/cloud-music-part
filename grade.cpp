#include<stdio.h>

char ScoreGrade(double score);
int  main(){
	
	char grade;
	double score;
	
	printf("请输入一个成绩：");
	
	scanf("%lf", &score);
	
	char ScoreGrade(double score);
	
	grade = ScoreGrade(score);
	
	printf("成绩%.1lf的等级是：%c\n" , score , grade);
	
	return 0;
} 

char ScoreGrade(double score){
	char grade;

	switch((int)score / 10){
		case 10 : 
		case 9 : grade = 'A';break;
		case 8 : 
		case 7 : grade = 'B';break;
		case 6 : grade = 'C';break;
		default : grade = 'D';
	}
	return grade;
} 
