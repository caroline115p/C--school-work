#include <stdio.h>
#include <stdlib.h>

float s_exp(float sub_exp, char op);
float m_exp(float sub_exp, char op);
char get_op();
float get_num();

/*evaluate function*/
int main(){
      char question = 'Y';
        float value;
        while (question == 'Y'){
                printf("Enter the arithmetic expression:");
                float exp = get_num();
              	char op = get_op();
              	value = (s_exp(exp,op));;
                printf("%d",value);
                printf("Would you like to continue?:Y/N");
                scanf("%c",&question);
        }

return 0;
}
/*the whole s_expression is evaluated using recursion*/

float s_exp(float sub_exp, char op){
        float next_num;
        char next_op;
        if(op == '\n'){
        return sub_exp;
        }
        else 
        {
        next_num = get_num();
        next_op = get_op();
        if (op == '+')
        {
        sub_exp = sub_exp +s_exp(next_num,next_op);
        }
        else {
       	sub_exp = sub_exp - s_exp(next_num,next_op);
        }
        return s_exp(next_num, next_op);
}

}

/*the m_expression is evaluated using recursion*/


float m_exp(float sub_exp, char op){
        float next_num;
        char next_op;
        if (op == '+' || op == '-' || op == '\n')
        {
                ungetc(op, stdin);
                return sub_exp;
        }
        else {
            next_num = get_num();
            next_op = get_op();
            if (op == '*')
            {
              next_num = sub_exp * next_num;
            }
              else 
            {
              next_num = sub_exp / next_num;
            }
    
}   
return m_exp(next_num, next_op);
}        
/*get the next operator of the expression*/
          
        
char get_op(){
    char next_op =getchar();
    while (next_op == ' ')
    {
        next_op = getchar();
}
	if(next_op != '+' && next_op != '-' && next_op != '*' && next_op != '/' && next_op != '\n'){
        exit(EXIT_FAILURE);
}
return next_op;}
/*get the next numeric value of the expression*/
float get_num(){
        float next_num;
        scanf("%f",&next_num);
        return next_num;
}



