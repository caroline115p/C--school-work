
#include <stdio.h>
#include <string.h>

/*code for the seven segment*/
int main(void){
  char num[10000];
  int i;
  const char segments[10][3][3]=
  {{{' ','_',' '},{'|',' ','|'},{'|','_','|'}},
  {{' ',' ',' '},{' ',' ','|'},{' ',' ','|'}},
  {{' ','_',' '},{' ','_','|'},{'|','_',' '}},
  {{' ','_',' '},{' ','_','|'},{' ','_','|'}},
  {{' ',' ',' '},{'|','_','|'},{' ',' ','|'}},
  {{' ','_',' '},{'|','_',' '},{' ','_','|'}},
  {{' ','_',' '},{'|','_',' '},{'|','_','|'}},
  {{' ','_',' '},{' ',' ','|'},{' ',' ','|'}},
  {{' ','_',' '},{'|','_','|'},{'|','_','|'}},
  {{' ','_',' '},{'|','_','|'},{' ','_','|'}}};
	/* we have to ask if the user want to keep continue the prgoram using Y/N*/
  char question = 'Y';
  while (question == 'Y'){
    printf("Enter an integer:");
    scanf(" %s", &num);
	/* we have to keep mind the sign of the number + or -*/
    if(num[0] == '-'){
      printf("   ");
      for ( i = 1; i < strlen(num); i++){
          printf ("%c%c%c", segments[num[i] - '0'][0][0], segments[num[i] - '0'][0][1], segments[num[i] - '0'][0][2]);
      }
      printf("\n");

      printf(" _ ");
      for ( i = 1; i < strlen(num); i++){
          printf ("%c%c%c", segments[num[i] - '0'][1][0], segments[num[i] - '0'][1][1], segments[num[i] - '0'][1][2]);
      }
      printf("\n");

      printf("   ");
      for ( i = 1; i < strlen(num); i++){
          printf ("%c%c%c", segments[num[i] - '0'][2][0], segments[num[i] - '0'][2][1], segments[num[i] - '0'][2][2]);
      }
      printf("\n");
    }else{
      for ( i = 0; i < strlen(num); i++){
          printf ("%c%c%c", segments[num[i] - '0'][0][0], segments[num[i] - '0'][0][1], segments[num[i] - '0'][0][2]);
      }
      printf("\n");

      for ( i = 0; i < strlen(num); i++){
          printf ("%c%c%c", segments[num[i] - '0'][1][0], segments[num[i] - '0'][1][1], segments[num[i] - '0'][1][2]);
      }
      printf("\n");

      for ( i = 0; i < strlen(num); i++){
          printf ("%c%c%c", segments[num[i] - '0'][2][0], segments[num[i] - '0'][2][1], segments[num[i] - '0'][2][2]);
      }
      printf("\n");
    }
/*Asking the question*/
    printf("Do you want to continue? Y or N");
    scanf(" %c", &question);
  } 

}
