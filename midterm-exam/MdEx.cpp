#include <stdio.h>

struct MyNode {
 int grade ;
 struct MyNode *next ;
} ;

void ShowAll( struct MyNode *walk ) ;
struct MyNode *AddNode( struct MyNode **walk, int g);
void Update(struct MyNode *walk, int g, int s);
void ShowBack(struct MyNode **walk);
void Swap(struct MyNode **walk , int a , int b);


int main(){
	struct MyNode *start, *now ;
	start = NULL ;
	now = AddNode( &start, 1 ) ; 
    now = AddNode( &start, 2 ) ; 
    now = AddNode( &start, 3 ) ;
    now = AddNode( &start, 4 ) ; ShowAll( start );
    Update(start, 3, 99); ShowAll(start);
//    Update(start, 3, 50); ShowAll(start);
    ShowBack(&start); ShowAll(start);
    Swap(&start, 2, 4);ShowAll(start);
//    Swap(&start, 1, 3);ShowAll(start);
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


void Update(struct MyNode *walk, int g, int s){
	while( walk->next != NULL ){
		if(walk->grade == g){
			walk->grade = s;
     }
        walk = walk->next;
    }//end while
}// end function

void ShowBack(struct MyNode **walk){
	MyNode *cur = *walk;
	MyNode *next = NULL;
	MyNode *prev = NULL;
	
	while( cur != NULL){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}//end while
	*walk = prev;
}// end function

void Swap(struct MyNode **walk , int a , int b){
	MyNode *curr = *walk;
	MyNode *prev = NULL, *nodeA = NULL, *nodeB = NULL, *prevA = NULL ,*prevB = NULL;
	
	if( a == b ){
		printf(" a = b Not Swap: ");
		return ;
	}
	
	while(curr != NULL){
		if(curr->grade == a){
			nodeA = curr;
			prevA = prev;
		}else if(curr->grade == b){
			nodeB = curr;
			prevB = prev;
		}
		prev = curr;
		curr = curr->next;
	}//end while
	
	if(prevA != NULL){
		prevA->next = nodeB;
	}else{
		*walk = nodeB;
	}//end if
	
	if(prevB != NULL){
		prevB->next = nodeA;
	}else{
		*walk = nodeA;
	}//end if
	
	MyNode *temp = nodeA->next;
	nodeA->next = nodeB->next;
	nodeB->next = temp;
	
}// end function
