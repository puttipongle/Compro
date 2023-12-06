#include <stdio.h>

struct MyNode {
 int grade ;
 struct MyNode *next ;
} ;

void ShowAll( struct MyNode *walk ) ;
struct MyNode *AddNode( struct MyNode **walk, int g);
void UpdateNode(struct MyNode *walk, int g);



int main(){
	struct MyNode *start, *now ;
	start = NULL ;
	now = AddNode( &start, 1 ) ; ShowAll( start ) ;
    now = AddNode( &start, 2 ) ; ShowAll( start ) ;
    now = AddNode( &start, 3 ) ; ShowAll( start ) ;
    now = AddNode( &start, 4 ) ; ShowAll( start ) ;
    UpdateNode(now, 100); ShowAll(start);
}

void ShowAll( struct MyNode *walk ) {
 while( walk != NULL ) {
  printf( "%d ", walk->grade ) ;
  walk = walk->next ;
 }//end while
 printf( " " ) ;
}//end function

struct MyNode *AddNode( struct MyNode **walk, int g){
    while( *walk != NULL ){
        walk = &(*walk)->next;
    }

    *walk = new struct MyNode;
    (*walk)->grade = g;
    (*walk)->next = NULL;
    return *walk;
} // end function

// update position 3
void UpdateNode(struct MyNode *walk, int g){
    walk = walk->next;
    walk->grade = g;
}