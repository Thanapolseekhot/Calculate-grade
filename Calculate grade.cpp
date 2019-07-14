#include <iostream>
using namespace std;
int main()
{
    int s1,s2,s3 ,Md,Fn;
	float  total,T;
	cout<< ("======================quizz=================\n") ;
    cout<<("enter score1(10)  :");
	cin>> s1;
	cout<<("enter score2(10) :");
	cin>>s2;
	cout<<("enter score3(10) :");
	cin>> s3;
	cout<<("total = ") << (s1+s2+s3)/3; 
    cout<<("\n=====================Mid-terem======================\n");
	cout<< ("enter you score midterm(45) : ");
	cin>> Md ;
	cout<<("=====================Final======================\n");
	cout<<("enter you score Final(45) : ");
	cin>> Fn ;
	T=(s1+s2+s3)/3;
	total = T+Md+Fn;
	cout<< ("total  = ") << (T+Md+Fn) ;
	if (total >= 80)
    cout << ("\nyou are grade A\n") ;
	else if (total <=79 && total >=75)
	cout<<("\nyou are grade b+\n");
	else if (total <=74 && total >=70)
	cout<<("\nyou are grade b\n");
	else if (total <=69 && total >=65)
	cout<<("\nyou are grade c+\n");
	else if (total <=64 && total >=60)
	cout<<("\nyou are grade c\n");
	else if (total <=59 && total >=55)
	cout<<("\nyou are grade D+\n");
	else if (total <=54 && total >=50)
	cout<<("\nyou are grade D\n");
	else if (total <=49 )
	cout<<("\nyou are grade F\n");
	return(0);
}