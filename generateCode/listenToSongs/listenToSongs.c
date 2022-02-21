#include "listenToSongs.h"

int choice,ch;
sn *move;


void music(sn * head){
  move=head;
  do{
    printf("%d) %s - %s\n",move->rank,move->songName,move->singerName);
    move=move->next;
  }while(move != head);
  printf("choose a number: ");
  scanf("%d",&choice);
  move=head;
  do{
    if(choice == move->rank){
      printf("\n\nYou are listening to:\n");
      printf("%s - %s\n",move->songName,move->singerName);
      printf("\n1) next\n2) previous\n0) exit\n");
      printf("choose: ");
      scanf("%d",&ch);
      if(ch == 1){
        choice++;
        move=head;
      }
      else if(ch == 2){
        choice--;
        move=head;
      }
    }
    move=move->next;
  }while(ch != 0);
  
}