#include <iostream>
#define n 5
using namespace std;
int queue[n], front = - 1, rear = - 1;
int i;
void enqueue() {
   
   if (rear == n - 1)
   cout<<"Queue Overflow ";
   else {
        if(front =-1)
        {
        front =0;
        }
      cout<<"Insert the element in queue : "<<endl;
      cin>> queue[i];
      rear++;
      queue[rear] = queue[i];
   }
}
void dequeue() {
   if (front == - 1 ) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
}
void peek()
{
    cout << "the topmost element is  "<<queue[front];
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for ( i = front; i <= rear; i++)
      {
            cout << queue[i] << " ";
      } 
        
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<< "\n";
   cout<<"2) Delete element from queue"<< "\n";
   cout<<"3) Display all the elements of queue"<<"\n";
   cout <<"4) get the topmost elemnt" <<"\n";
   cout<<"4) Exit"<<"\n";
   do {
      cout<<"Enter your choice : ";
      cin>>ch;
      switch (ch) 
      {
         case 1: 
         enqueue();
         break;
         case 2: 
         dequeue();
         break;
         case 3: 
         Display();
         break;
         case 4: 
         cout<<"Exit"<<"\n";
         break;
         default: cout<<"Invalid choice"<<"\n";
        }
   } while(ch!=4);
   return 0;
}