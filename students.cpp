#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	char str1[5][10],str2[5][10],roll_no[5];
// 	int i,count=0;
// 	for(i=0;i<5;i++){
// 		strcpy(str1[i],"ABSENT");
// 		strcpy(str2[i],"ABSENT");
// 	}
// 	while(gets(roll_no)){
// 		if(roll_no[0]=='\0'){
// 			break;
// 		}
// 		if(count>10||roll_no[1]!='Y'||roll_no[2]!='0'||roll_no[3]-'1'>5){
// 			printf("INVALID OPTION");
// 			return 0;
// 		}
// 		if(roll_no[0]!='T'&&roll_no[0]!='S'){
// 			printf("INVALID OPTION");
// 			return 0;
// 		}
// 		if(roll_no[0]=='T'){
// 			strcpy(str1[roll_no[3]-'1'],roll_no);
// 		}
// 		else{
// 			strcpy(str2[roll_no[3]-'1'],roll_no);
// 		}
// 		count++;
// 	}
// 	for(i=0;i<5;i++){
// 		printf("[%s][%s]\n",str1[i],str2[i]);
// 	}
// }
