#include<iostream>
#include<stack>
#include<queue>
#include<list>
#include<cstdlib>
#include<string>

using namespace std;


        list<int> mlist;
        stack<int> mstack;
        queue<int> mqueue;

        int list_op();
        int stack_op();
        int queue_op();

       void select_op(int);
   //    void create(int,int);

    int op;
 string structers[] {"linked_list","stack","queue"};

int main() {
    //***** selection logic start *****//
    int  input,choice;
    do{
    cout<<" what you want to use ? \n\n 1] linked list \n 2] stack \n 3] queue\n select from 1 to 3\n\n   select => ";
    cin>>choice;
    //clear();
    }while(choice>3 || choice<1);

    do{
    cout<<"\n do you want to use random "<<structers[choice-1]<<" or you enter it ?\n \n for random : 1 \n for enter   : 2\n   select => ";
    cin>>input;
    //clear();
    }while(input>2 || input<1);

    //***** selection logic End *****//

    //create(input for the random or self , choice to select one of structures   );
    //create(choice,input);

    select_op(choice);


return 0;

}
/*
void create(int choice , int input){
    switch(choice){
        case 1:
            if(input==1)
                 // create list with random
        // create list with user

        case 2:
            if(input==1)
                   // create stack with random
        // create stack with user

          case 3:
            if(input==1)
                   // create queue with random
        // create queue with user
    }
}
*/
void print(){
    cout<<" ******************************* \n";


}
void select_op(int choice){
    int temp;
     do{
         print();
    cout<<"the available operations for "<<structers[choice-1]<<"\n";

    switch(choice) {
    case 1:
        temp = list_op();
        break;
    case 2:
       temp = stack_op();
        break;
    case 3:
       temp = queue_op();
        break;
    };

    cout<<"select => ";
    cin>>op;

    }while(op > 0 && op < temp);

}


list_op(){
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";

    return 3;//return number of available operations
}

stack_op(){

    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";

    return 9;//return number of available operations
}

queue_op(){
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";
    cout<<"1] \n";

    return 9;//return number of available operations
}
