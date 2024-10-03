// /-------------------------------------------\
//|                     name                   |
//|         yousef waleed abobaker yousef      |
//|           يوسف وليد ابوبكر يوسف جعفر       |
//|         (second year) (alhudidah uni)      |
// \-------------------------------------------/
#include<iostream>
#include<string>
#include <Windows.h>
#include<cstdlib>
//#include<stack>
//#include<queue>
//#include<list>
//#include<random>

using namespace std;

struct node {
    int data;
    node *next = NULL;
};
struct mstack {
    int data;
    mstack *last = NULL;
};

//listing functions start
int list_op();
int stack_op();
int queue_op();
//listing functions End

//operations functions start
void Create_Node ();
void Create_List(int, node*&,node*& );
void Create_stack(int);

int list_isempty();
int stack_isempty();
int queue_isempty();

int search_list();
void add_first();
void add_last();
void del_first();
void del_last();
void add_after();
void add_before();

void push();
void pop();

void enqueue();
void dequeue();
//operations functions End

//special functions start
void setColor(int);
int select_op(int,int);
void use_op(int,int);
void create(int,int);
void Print();
//special functions End


node *constructor = NULL, *head = NULL, *tail = NULL, *l_tail = NULL,*ptail=NULL,*qhead=NULL,*qtail=NULL;
mstack  *TOP=NULL,*sconstructor=NULL;

string structers[] {"linked_list","stack","queue"};
int ran[]= {3,6,2,1,4,9};
int  choice,f;

int main() {
system("mode 500");
    setColor(15);
//*********************** selection logic start ***********************//
    int  input,op;
    do {
            setColor(10);

        cout<<"                            #####                                                       \n";Sleep(200);
        cout<<"#####    ##  #####  ##     #     # ##### #####  #    #  ####  ##### #    # #####  ######\n";Sleep(200);
        cout<<"#    #  #  #   #   #  #    #         #   #    # #    # #    #   #   #    # #    # #     \n";Sleep(200);
        cout<<"#    # #    #  #  #    #    #####    #   #    # #    # #        #   #    # #    # ##### \n";Sleep(200);
        cout<<"#    # ######  #  ######         #   #   #####  #    # #        #   #    # #####  #     \n";Sleep(200);
        cout<<"#    # #    #  #  #    #   #     #   #   #   #  #    # #    #   #   #    # #   #  #     \n";Sleep(200);
        cout<<"#####  #    #  #  #    #    #####    #   #    #  ####   ####    #    ####  #    # ######\n";

        Sleep(300);
        setColor(15);

        cout<<" \n  _________ - what you want to use? - _________  ";
        cout<<" \n |---------------------------------------------|";
        cout<<" \n |                                             |";
        cout<<" \n |         1] linked list (dynamic)            |";
        cout<<" \n |                                             |";
        cout<<" \n |         2] stack       (dynamic)            |";
        cout<<" \n |                                             |";
        cout<<" \n |         3] queue       (dynamic)            |";
        cout<<" \n |                                             |";
        cout<<" \n |_____________________________________________|";
        cout<<"\n\n --------------|select|--> ";
        cin>>choice;
        system("cls");
    } while(choice>3 || choice<1);

    do {
        cout<<"\n     ____ do you want to use random "<<structers[choice-1]<<" or you enter it? ___";
        cout<<"\n  |----------------------------------------------------------------|";
        cout<<"\n  |                                                                |";
        cout<<"\n  |                      1] input random number                    |";
        cout<<"\n  |                                                                |";
        cout<<"\n  |                      2] input user number                      |";
        cout<<"\n  |                                                                |";
        //if(f)
      //cout<<"\n  |                         3] last one                                |";
        cout<<"\n  |________________________________________________________________|";
        cout<<"\n\n --------------|select|--> ";
        cin>>input;
        system("cls");
    } while(input>2 || input<1);

//*********************** selection logic END ***********************//

    //create(input for the random or self , choice to select one of structures   );
    if(input!=3)
        create(choice,input);

    if(select_op(op,choice))
        main();

    return 0;
}

int select_op(int op,int choice) {
    int temp;
    do {
        Print();
        cout<<"\n|-_-_-_-";
        setColor(14);
        cout<<"the available operations for "<<structers[choice-1];
        setColor(15);
        cout<<"-_-_-_-|\n";
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
        setColor(12);
        cout<<"      +] ";
        setColor(15);
        cout<<"to use another structure press any key";
        cout<<"\n\n --------------|select|--> ";
        cin>>op;

        if(op==0)
            return 0;
        use_op(op,choice);
        system("cls");

    } while(op > 0 && op <=temp);

}

list_op() {
    cout <<"|                                                      |\n";
    cout <<"|              1] search value list                    |\n";
    cout <<"|                                                      |\n";
    cout <<"|              2] add first value list                 |\n";
    cout <<"|                                                      |\n";
    cout <<"|              3] add last value list                  |\n";
    cout <<"|                                                      |\n";
    cout <<"|              4] del first value list                 |\n";
    cout <<"|                                                      |\n";
    cout <<"|              5] del last value list                  |\n";
    cout <<"|                                                      |\n";
    cout <<"|              6] add after value list                 |\n";
    cout <<"|                                                      |\n";
    cout <<"|              7] add before value list                |\n";
    cout <<"|                                                      |\n";
    cout <<"|              0] to exit the program                  |\n ";
    cout <<"-------------------------------------------------------\n";
    return 7;//return number of available operations
}
stack_op() {
    cout <<"|                                                |\n";
    cout <<"|            1]push to the Stack                 |\n";
    cout <<"|                                                |\n";
    cout <<"|            2]pop from the Stack                |\n";
    cout <<"|                                                |\n";
    cout <<"|            0] to exit the program              |\n ";
    cout <<"-------------------------------------------------\n";
    return 2;//return number of available operations
}
queue_op() {
    cout <<"|                                                |\n";
    cout <<"|             1]add to the Queue                 |\n";
    cout <<"|                                                |\n";
    cout <<"|             2]delete from the Queue            |\n";
    cout <<"|                                                |\n";
    cout <<"|             0] to exit the program             |\n ";
    cout <<"-------------------------------------------------\n";
    return 2;//return number of available operations
}

void use_op(int op,int choice) {
    if(choice==1) {
        //switch(op) to select the operation from the list
        switch(op) {
        case 1:
            search_list();
            break;
        case 2:
            add_first();
            break;
        case 3:
            add_last();
            break;
        case 4:
            del_first();
            break;
        case 5:
            del_last();
            break;
        case 6:
            add_after();
            break;
        case 7:
            add_before();
            break;
        }}
    if(choice==2) {
        //switch(op) to select the operation from the stack
        switch(op) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        }}
    if(choice==3) {
        //switch(op) to select the operation from the queue
        switch(op) {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        }}
}

void create(int choice, int input) {
    switch(choice) {
    case 1:
        Create_List(input,head,tail);
        break;
    case 2:
        Create_stack(input);
        break;
    case 3:
        Create_List(input,qhead,qtail);
        break;
    }
    f=1;
}

void Create_List(int input,node *&head,node *&tail) {
    head = NULL;
    tail = NULL;
    for (int i = 0; i < 5; i++) {
        constructor = new node;
        if(input==1) {
            constructor->data = ran[i];
        } else if(input==2) {
            cout<<"\n enter the value=>";
            cin>> constructor->data;
        }
        constructor->next = NULL;
        if (head == NULL)
            head = tail = constructor;
        else {
            tail->next = constructor;
            tail = constructor;
        }
    }
}

void Create_stack(int input) {
    TOP=NULL;
    for (int i = 0; i < 5; i++) {
        sconstructor = new mstack;
        if(input==1)
            sconstructor->data=ran[i];
        if(input==2) {
            cout<<"\n enter the value =>";
            cin>> sconstructor->data;
        }
        sconstructor->last = NULL;
        if (TOP != NULL)
            sconstructor->last=TOP;
        TOP=sconstructor;

    }
}

int stack_isempty() {
    return   (TOP==NULL);
}
int list_isempty() {
    return   (head==NULL);
}
int queue_isempty() {
    return   (qhead==NULL);
}
//---------------------List operations-------------------------
int search_list() {
    cout<<"please enter the search value => ";
    int x,f=0;
    cin>>x;

    tail=head;
    while(tail!=NULL) {
        if(tail->data==x) {
            cout<<"\n the number is found\n \t";
            system("Color a1");
            f =1;
            break;
        }
        tail=tail->next;
    }
    if(f==0) {
        cout<<"\n the number not found \n \t";
        system("color cf");
    }
   system("pause");
   system("color 0F");
    return 0;
}
void add_first() {
    constructor =new node;
    cout << "       enter value =>";
    cin >> constructor->data;
    constructor->next = head;
    head = constructor;
}
void add_last() {
    constructor =new node;
    cout << "       enter value =>";
    cin >> constructor->data;
    tail=head;
    while(tail->next!=NULL) {
        tail=tail->next;
    }
    constructor->next=NULL;
    tail->next=constructor;
    tail=constructor;
}
void del_first() {
    if(!list_isempty()) {
        node * node;
        node=head;
        head=head->next;
        delete node;

    } else {
        cout<<"\n list is empty - _ - \n\n";
        system("color cf");
        system("pause");
        system("color 0f");
    }
}
void del_last() {
    if(!list_isempty()) {
        tail=head;
        l_tail=NULL;
        while(tail->next!=NULL) {
            l_tail=tail;
            tail=tail->next;
        }

        delete tail;
        if(tail!=head){
        tail=l_tail;
        tail->next=NULL;
        }
    } else {
        cout<<"\n list is empty - _ - \n\n ";
        system("color cf");
        system("pause");
        system("color 0f");
    }
}
void add_after() {
    int x;
    cout<<"add after : ";
    cin>>x;
    tail=head;
    while(tail!=NULL&&tail->data!=x ) {
        tail=tail->next;
    }
    if(tail==NULL){
        cout << "Value not found in the list." << endl;
        system("color cf");
        system("pause");
        system("color 0f");
        return;
    }
    constructor =new node;
    cout << "\n       enter value =>";
    cin >> constructor->data;
    constructor->next=tail->next;
    tail->next=constructor;
}
void add_before() {
    int x;
    cout << "add before: ";
    cin >> x;

    tail = head;
    l_tail = NULL;
    while (tail != NULL && tail->data != x) {
        l_tail = tail;
        tail = tail->next;
    }
    if (tail == NULL) {
        cout << "Value not found in the list." << endl;
        system("color cf");
        system("pause");
        system("color 0f");
        return;
    }
    constructor = new node;
    cout << "\n       enter value => ";
    cin >> constructor->data;
    constructor->next = tail;
    if (l_tail == NULL) {
        head = constructor;
    } else {
        l_tail->next = constructor;
    }
}
//-------------------------------stack operations-------------------------
void push() {
    sconstructor= new mstack;
    cout<<"enter the value\n          value =>";
    cin>>sconstructor->data;
    sconstructor->last=NULL;
    if(TOP!=NULL)
        sconstructor->last=TOP;
    TOP=sconstructor;

}
void pop() {
    if(!stack_isempty()) {
        mstack *node;
        node = TOP;
        TOP=TOP->last;
        delete node;
    } else {
        cout<<"\n stack is empty - _ - \n\n";
        system("color cf");
        system("pause");
        system("color 0f");
    }
}

//-------------------------------queue operations-----------------------
void enqueue() {
    constructor = new node;
    cout<<"enter the value\n          value =>";
    cin>>constructor->data;
    constructor->next = NULL;
    if (qhead == NULL) {
        qhead = qtail = constructor;
    } else {
        qtail->next=constructor;
        qtail=constructor;
    }
}
void dequeue() {
    int num;
    if(!queue_isempty()) {
        node * node;
        node=qhead;
        qhead=qhead->next;
        delete node;

    } else {
        cout<<"\n queue is empty - _ - \n\n ";
         system("color cf");
        system("pause");
        system("color 0f");
    }
}


void Print() {
    cout << "-----------------------------------------------------\n\n";
    cout << "      ******** elements in this "<< structers[choice-1]<<": ********\n\n";
    if(choice==2) {
        sconstructor = new mstack;
        sconstructor = TOP;
        while(sconstructor!=NULL) {
            cout<<"     | "<<sconstructor->data<<" |\n";
            sconstructor = sconstructor->last;
        }
        cout<<"      ___";
        cout << "\n-----------------------------------------------------\n";
        return;
    }
    if(choice==1)
        ptail = head;
    else
        ptail=qhead;
        cout<<"  ";
    while (ptail != NULL) {
        cout <<"| "<<ptail->data <<" |--> ";
        ptail = ptail->next;
    }
    cout<<"NULL";
    cout << "\n-----------------------------------------------------\n";
}
void setColor(int color){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
