#include "generateCode.h"
#include "../addNewSong/addNewSong.h"
#include "../listenToSongs/listenToSongs.h"

extern sn* addNewSong(sn*h,sn*head);
extern int getCountSongs();
extern void music(sn * head);

sn *head=NULL,*temp; 

int generate(){
  int choice;
  retry:
  printf("\n1) Add new song\n"
         "2) Listen to songs\n"
         "3) Create a playlist\n"
         "4) Delete a song\n" 
         "0) exit\n");
  printf("choose a number: "); 
  scanf("%d",&choice); //scan ansewr from the user
  printf("\n\nLoading...\n");
  sleep(1); 
  clrscreen();
  switch(choice){
    case 0:
      temp=head;
      do{
       free(temp);
       temp=temp->next;
      }while(temp == head);
      return 0;
    case 1:
      if(getCountSongs() == 0){
       head=addNewSong(head,head);
       temp=head;
      }
     else{
       temp=addNewSong(temp,head);
       head->prev=temp;
     }
    break;
    case 2:
      music(head);
      sleep(3);
    break;
    default:
      printf("\nPlease enter a correct number\n");
      sleep(1);
      goto retry;
  }
  
 
 /* else if(choice == 3){
  
  }
  else if(choice == 4){
  
  }*/
  return 1;
}