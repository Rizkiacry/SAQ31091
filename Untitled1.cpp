#include <iostream>

using namespace std;

#define MAX 5

int my_queue [MAX] ;
int front = -1;
int rear = -1 ;

bool kosong (){
	return rear ==-1;
}
bool penuh (){
	return rear == MAX -1;
}

void enqueue(int nilai){
	if (penuh()){
		cout << "Queue penuh!! tidak dapat menanbah elemen" << endl;
        return;
	}
	
	if (kosong ()){
		front = 0;
	}
	my_queue [++rear] = nilai ;
	cout << "elemen" << nilai << "berhasil ditambahkan ke queue" << endl;
}

int dequeue (){
	if (kosong()){
		cout << "Queue kosong !! tidak ada elemen untuk dihapus"<< endl;
		return -1;
	} 
	
	
	int nilai = my_queue [front];
	if (front == rear ){
		front = rear = -1;
	}else{
		front++;
	}
	return nilai;
	
}

int peek (){
	if (kosong()){
		cout <<"Queue kosong!! tidak ada elemen depan"<< endl;
		return -1;
	} 
	return my_queue[front];
 } 
 
 /*
 void display (){
 	if (kosong()){
 		cout<< ""
	 }
 }
*/

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout << "Front element is: " << peek() << endl;
    cout << "Dequeued element is: " << dequeue() << endl;
    cout << "Front element is now: " << peek() << endl;
    return 0;
}
