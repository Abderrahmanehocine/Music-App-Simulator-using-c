#include "addNewSong.h"

int countSongs=0; //number of songs || number of nodes


sn* addNewSong(sn *head, sn *temp){
   if(head==NULL || temp->next==head){
      sn* newNode=(sn*)malloc(sizeof(sn));
      printf("\nSinger Name: ");
      scanf("\n");
      scanf("%[^\n]",newNode->singerName);
      printf("Song Name: ");
      scanf("\n");
      scanf("%[^\n]",newNode->songName);
      countSongs++;
      newNode->rank=countSongs;
      if(head == NULL){
         newNode->next=newNode;
         newNode->prev=newNode;
         return newNode;
      }
      newNode->next=head;
      head->prev=newNode;
      temp->next=newNode;
      return temp;
   }// end global if
   temp->next=addNewSong(head,temp->next); // recursion
   return temp;
} // end function

int getCountSongs(){
  return countSongs;
}
