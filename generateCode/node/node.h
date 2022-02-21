#ifndef NODE_H
#define NODE_H

#define sn struct node

sn{
  char songName[30];
  char singerName[30];
  int rank;
  sn *next,*prev;
};

#endif