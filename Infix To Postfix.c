#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
char stack[100];
int top1 = -1;
void push(char x){
    stack[++top1] = x;
}
char pop(){
    return stack[top1--];
}
int pr(char x){
    if(x == '+' || x == '-'){
   	 return 1;
    }else if(x == '*' || x == '/'){
   	 return 2;
    }else if(x == '^'){
   	 return 3;
    }else{
   	 return 0;
    }
}
int validation(char str[]){
    int i=0,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
     for(i=0;str[i]!='\0';i++){
   	 if(str[i] == '('){
   		 cnt1++;
   	 }else if(str[i] == ')'){
   		 cnt2++;
   	 }else if(isalnum(str[i])){
   		 cnt3++;
   	 }else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^'){
   		 cnt4++;
   	 }else{
   		 return 0;
   	 }
    }
    if(cnt1 != cnt2){
   	 return 0;
    }
    else if((cnt3 - cnt4) != 1){
   	 return 0;
    }

}
int main(){
    char exp[100];
    char post[100];
    char ch,elm;
    int n,i=0,j=0,val=0;
    printf("Enter infix Expression : ");
    scanf("%s",exp);
    val = validation(exp);
    if(val == 0){
   	 printf("\n\nPlease enter valid expression ......\n\n");
   	 exit(0);
    }

    push('#');
    ch = exp[i];
    while(ch!='\0'){
   	 if(ch == '('){
   		 push(ch);
   	 }else{
   		 if(isalnum(ch)){
   			 post[j++]=ch;
   		 }else{
   			 if(ch == ')'){
   				 while(stack[top1] != '('){
   					 post[j++] = pop();
   				 }
   				 elm = pop();
   			 }else{
   				 while(pr(stack[top1]) >= pr(ch)){
   					 post[j++] = pop();
   				 }
   				 push(ch);
   			 }
   		 }
   	 }
   	 ch = exp[++i];
    }

    while( stack[top1] != '#'){
   	 post[j++]=pop();
    }
    
    post[j]='\0';     	 
    printf("\nPostfix Expression =  %s",post);

    return 0;
}
