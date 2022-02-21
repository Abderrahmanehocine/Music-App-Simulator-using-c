#include "addNewSong.h"

int countSongs=0;
sn* rev;

sn* addNewSong(sn *temp,sn*head){
   if(temp==NULL){
     temp=(sn*)malloc(sizeof(sn));
      printf("\nSinger Name: ");
      scanf("\n");
      scanf("%[^\n]",temp->singerName);
      printf("Song Name: ");
      scanf("\n");
     scanf("%[^\n]",temp->songName);
     countSongs++;
     temp->next=temp;
     temp->prev=temp->next;
   }
   else{
     rev=temp;
     temp->next=(sn*)malloc(sizeof(sn));
     temp=temp->next;
     printf("\nSinger Name: ");
     scanf("\n");
     scanf("%[^\n]",temp->singerName);
     printf("Song Name: ");
     scanf("\n");
     scanf("%[^\n]",temp->songName);
     countSongs++;
     temp->next=head;
     temp->prev=rev;
   }
   temp->rank=countSongs;
  return temp;
}

int getCountSongs(){
  return countSongs;
}