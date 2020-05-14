#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50

struct admin{
    char name[max];
    char email[max];
    char address[max];
    int contact;
    struct admin *next;
}*head=NULL;

struct student{
    char name[max];
    char id[max];
    char dept[max];
    int contact;
    //char blood group[max];
    struct student *next;
}*head2=NULL;

struct teacher{
    char name[max];
    char email[max];
    char address[max];
    int contact;
    struct teacher *next;
}*head3=NULL;

void add_admin()
{
    if(head==NULL)
        {
        struct admin *new_admin, *current;
	    int i, number;

        printf("Enter quantity of contract you want to add: ");
	    scanf("%d", &number);

	for (i = 0; i < number; i++)
        {
		new_admin = (struct admin*)malloc(sizeof(struct admin));
		printf("\n\nEnter info of admin no. %d\n\n", i + 1);
        printf("Enter name : ");
        scanf(" %[^\n]", new_admin->name);
        printf("Enter email address : ");
        scanf(" %[^\n]", new_admin->email);
        printf("Enter address : ");
        scanf(" %[^\n]", new_admin->address);
        printf("Enter contract no: ");
        scanf("%d", &new_admin->contact);
		new_admin->next = NULL;
		if (head == NULL)
        {
			head = new_admin;
			current = new_admin;
		}
		else
		{
			current->next = new_admin;
			current = new_admin;
		}

	}
	printf("\n%d number of admin(s) has been created successfully\n\n", number);
    }
    else
    {
	struct admin *new_admin,*current;
	int x;
	printf("Enter the number of admins you want to add: ");
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		new_admin = (struct admin*)malloc(sizeof(struct admin));
		printf("\n\nEnter info of new admin no. %d\n\n", i + 1);
        printf("Enter name : ");
        scanf(" %[^\n]", new_admin->name);
        printf("Enter email address : ");
        scanf(" %[^\n]", new_admin->email);
        printf("Enter address : ");
        scanf(" %[^\n]", new_admin->address);
        printf("Enter contract no: ");
        scanf("%d", &new_admin->contact);
		new_admin->next = NULL;

		if (i == 0) {
				current = head;
			while (current->next != NULL) {
				current = current->next;
			}
		}
		current->next = new_admin;
		current = new_admin;
	}
}

}


void display_admin() {
	struct admin* current;
	int i=1;
	printf("\n>>>Admins to display<<<\n\n");
	if (head == NULL) {
		printf("No admin has been added\n");
		return;
	}
	else {
		current = head;
		while (current != NULL) {
            printf("\nAdmin no. %d>>>\n\n",i);
			printf("Name : %s\n", current->name);
			printf("Email : %s\n", current->email);
			printf("Address : %s\n", current->address);
			printf("Phone Number : %d\n", current->contact);
			current = current->next;
		i++;
		}
		printf("\n\n");
	}
}

void search_admin(){
    struct admin *current;
    int x=0;
    char name[max];
    printf("Enter Name: ");
    getchar();
    gets(name);
    current=head;
    while(current!=NULL){
        if(strcmp(name,current->name)==0){

			printf("Name : %s\n", current->name);
			printf("Email : %s\n", current->email);
			printf("Address : %s\n", current->address);
			printf("Phone Number : %d\n", current->contact);
			x++;
        }
        current=current->next;
    }
    if(x==0){
        printf("\n\n-->No Result<--\n\n");
    }

}

void delete_admin()
{
    struct admin *current, *temp;
    int i,count = 0,pos=0;
    char name[max];
    printf("\nEnter name: ");
    scanf(" %[^\n]",name);

        current = head;
        while(current->next!=NULL){
                count++;
                if(strcmp(name,current->name)==0){
                    pos=count;
                    break;
                }
            current=current->next;
        }

        if(current == head)
        {
            head = current->next;

            printf("Contact removed successfully\n");

        }
        else if(current->next == NULL){

            current = head;
            for(i=1;i<=pos-2;i++){
                current = current->next;
            }
            current->next = NULL;

            printf("Contact removed successfully\n");

        }
        else{

            temp = current->next;
            current = head;

            for(i=1;i<=pos-2;i++){
                current = current->next;
            }

            current->next = temp;

            printf("Contact removed successfully\n");

        }
    }

    void add_student() {
    if(head2==NULL){
        struct student *new_student,  *current;
	int i, number;

	printf("Enter quantity of contract you want to add: ");
	scanf("%d", &number);

	for (i = 0; i < number; i++) {
		new_student = (struct student*)malloc(sizeof(struct student));
		printf("\n\nEnter info of student no. %d\n\n", i + 1);
        printf("Enter name : ");
        scanf(" %[^\n]", new_student->name);
         printf("Enter id : ");
        scanf(" %[^\n]", new_student->id);
         printf("Enter dept : ");
        scanf(" %[^\n]", new_student->dept);
        printf("Enter contact no: ");
        scanf("%d", &new_student->contact);
        //printf("Enter blood group: ");
        //scanf("%[^\n]", &new_student->blood group);
		new_student->next = NULL;
		if (head2 == NULL) {
			head2 = new_student;
			current = new_student;
		}
		else {
			current->next = new_student;
			current = new_student;
		}

	}
	printf("\n%d number of student(s) has been created successfully\n\n", number);
    }
    else{
	struct student *new_student,*current;
	int x;
	printf("Enter the number of student you want to add: ");
	scanf("%d", &x);
	for (int i = 0; i <x; i++) {
		new_student = (struct student*)malloc(sizeof(struct student));
		printf("\n\nEnter info of new student no. %d\n\n", i+1);


		 printf("Enter name : ");
        scanf(" %[^\n]", new_student->name);
         printf("Enter id : ");
        scanf(" %[^\n]", new_student->id);
         printf("Enter dept : ");
        scanf(" %[^\n]", new_student->dept);
        printf("Enter contact no: ");
        scanf("%d", &new_student->contact);
        //printf("Enter blood group: ");
        //scanf("%[^\n]", &new_student->blood group);

		new_student->next = NULL;

		if (i == 0) {
				current = head2;
			while (current->next != NULL) {
				current = current->next;
			}
		}
		current->next = new_student;
		current = new_student;
	}
}

}

void display_student() {
	struct student *current;
	int i=1;
	printf("\n>>>students to display<<<\n\n");
	if (head2 == NULL) {
		printf("No student has been added\n");
		return;
	}
	else {
		current = head2;
		while (current != NULL) {
            printf("\nstudent no. %d>>>\n\n",i);
			printf("Name : %s\n", current->name);
			printf("id : %s\n", current->id);
			printf("depertment : %s\n", current->dept);
		    printf("Phone Number : %d\n", current->contact);
			//printf("blood group : %s\n", current->blood group);

			current = current->next;
		i++;
		}
		printf("\n\n");
	}
}

void search_student(){
    struct student *current;
    int x=0;
    char name[max];
    printf("Enter Name: ");
    getchar();
    gets(name);
    current=head2;
    while(current!=NULL){
        if(strcmp(name,current->name)==0){
            printf("Name : %s\n", current->name);
			printf("id : %s\n", current->id);
			printf("depertment : %s\n", current->dept);
			printf("Phone Number : %d\n", current->contact);
			//printf("blood group : %s\n", current->blood group);


			x++;
        }
        current=current->next;
    }
    if(x==0){
        printf("\n\n-->No Result<--\n\n");
    }

}

void delete_student()
{
    struct student *current, *temp;
    int i,count = 0,pos=0;
    char name[max];
    printf("\nEnter name: ");
    scanf(" %[^\n]",name);

        current = head2;
        while(current->next!=NULL){
                count++;
                if(strcmp(name,current->name)==0){
                    pos=count;
                    break;
                }
            current=current->next;
        }

        if(current == head2)
        {
            head2 = current->next;

            printf("Contact removed successfully\n");

        }
        else if(current->next == NULL){

            current = head2;
            for(i=1;i<=pos-2;i++){
                current = current->next;
            }
            current->next = NULL;

            printf("Contact removed successfully\n");

        }
        else{

            temp = current->next;
            current = head2;

            for(i=1;i<=pos-2;i++){
                current = current->next;
            }

            current->next = temp;

            printf("Contact removed successfully\n");

        }
    }


void add_teacher()
{
    if(head3==NULL)
        {
        struct teacher *new_teacher, *current;
	    int i, number;

        printf("Enter quantity of contract you want to add: ");
	    scanf("%d", &number);

	for (i = 0; i < number; i++)
        {
		new_teacher = (struct teacher*)malloc(sizeof(struct teacher));
		printf("\n\nEnter info of teacher no. %d\n\n", i + 1);
        printf("Enter name : ");
        scanf(" %[^\n]", new_teacher->name);
        printf("Enter email address : ");
        scanf(" %[^\n]", new_teacher->email);
        printf("Enter address : ");
        scanf(" %[^\n]", new_teacher->address);
        printf("Enter contract no: ");
        scanf("%d", &new_teacher->contact);
		new_teacher->next = NULL;
		if (head3 == NULL)
        {
			head3 = new_teacher;
			current = new_teacher;
		}
		else
		{
			current->next = new_teacher;
			current = new_teacher;
		}

	}
	printf("\n%d number of teacher(s) has been created successfully\n\n", number);
    }
    else
    {
	struct teacher *new_teacher,*current;
	int x;
	printf("Enter the number of teachers you want to add: ");
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		new_teacher = (struct teacher*)malloc(sizeof(struct teacher));
		printf("\n\nEnter info of new teacher no. %d\n\n", i + 1);
        printf("Enter name : ");
        scanf(" %[^\n]", new_teacher->name);
        printf("Enter email address : ");
        scanf(" %[^\n]", new_teacher->email);
        printf("Enter address : ");
        scanf(" %[^\n]", new_teacher->address);
        printf("Enter contract no: ");
        scanf("%d", &new_teacher->contact);
		new_teacher->next = NULL;

		if (i == 0) {
				current = head3;
			while (current->next != NULL) {
				current = current->next;
			}
		}
		current->next = new_teacher;
		current = new_teacher;
	}
}

}


void display_teacher() {
	struct teacher *current;
	int i=1;
	printf("\n>>>Teachers to display<<<\n\n");
	if (head3 == NULL) {
		printf("No teacher has been added\n");
		return;
	}
	else {
		current = head3;
		while (current != NULL) {
            printf("\nTeacher no. %d>>>\n\n",i);
			printf("Name : %s\n", current->name);
			printf("Email : %s\n", current->email);
			printf("Address : %s\n", current->address);
			printf("Phone Number : %d\n", current->contact);
			current = current->next;
		i++;
		}
		printf("\n\n");
	}
}

void search_teacher(){
    struct teacher *current;
    int x=0;
    char name[max];
    printf("Enter Name: ");
    getchar();
    gets(name);
    current=head3;
    while(current!=NULL){
        if(strcmp(name,current->name)==0){

			printf("Name : %s\n", current->name);
			printf("Email : %s\n", current->email);
			printf("Address : %s\n", current->address);
			printf("Phone Number : %d\n", current->contact);
			x++;
        }
        current=current->next;
    }
    if(x==0){
        printf("\n\n-->No Result<--\n\n");
    }

}
void delete_teacher()
{
    struct teacher *current, *temp;
    int i,count = 0,pos=0;
    char name[max];
    printf("\nEnter name: ");
    scanf(" %[^\n]",name);

        current = head3;
        while(current->next!=NULL){
                count++;
                if(strcmp(name,current->name)==0){
                    pos=count;
                    break;
                }
            current=current->next;
        }

        if(current == head3)
        {
            head3 = current->next;

            printf("Contact removed successfully\n");

        }
        else if(current->next == NULL){

            current = head3;
            for(i=1;i<=pos-2;i++){
                current = current->next;
            }
            current->next = NULL;

            printf("Contact removed successfully\n");

        }
        else{

            temp = current->next;
            current = head3;

            for(i=1;i<=pos-2;i++){
                current = current->next;
            }

            current->next = temp;

            printf("Contact removed successfully\n");

        }
    }
    void admin_manage(){
        int x,y;
    printf("\n\n>>>>>>A D M I N<<<<<<\n\n");
    do{
    printf("Enter 1 to ADD\nEnter 2 to DELETE\nEnter 3 to SEARCH\nEnter 4 to VIEW\nEnter 5 to Back Home\nYour Choice: ");
    scanf("%d",&x);
    if(x==1){
        add_admin();
        admin_manage();
    }
    else if(x==2){
        delete_admin();
        admin_manage();
    }
    else if(x==3){
        search_admin();
        admin_manage();
    }
    else if(x==4){
        display_admin();
        admin_manage();
    }
    else if(x==5){
        main();
    }

    else{
        printf("Wrong input\n");
        admin_manage();
    }
    }while(y!=1);


    }

    void student_manage(){
             int x,y;
    printf("\n\n>>>>>>S T U D E N T<<<<<<\n\n");
    do{
    printf("Enter 1 to ADD\nEnter 2 to DELETE\nEnter 3 to SEARCH\nEnter 4 to VIEW\nEnter 5 to Back Home\nYour Choice: ");
    scanf("%d",&x);
    if(x==1){
        add_student();
        student_manage();
    }
    else if(x==2){
        delete_student();
        student_manage();
    }
    else if(x==3){
        search_teacher();
        student_manage();
    }
    else if(x==4){
        display_student();
        student_manage();
    }
    else if(x==5){
        main();
    }
    else{
        printf("Wrong input\n");
        student_manage();
    }
    }while(y!=1);

    }

    void teacher_manage(){
        int x,y;
    printf("\n\n>>>>>>T E A C H E R<<<<<<\n\n");
    do{
    printf("Enter 1 to ADD\nEnter 2 to DELETE\nEnter 3 to SEARCH\nEnter 4 to VIEW\nEnter 5 to Back Home\nYour Choice: ");
    scanf("%d",&x);
    if(x==1){
        add_teacher();
        teacher_manage();
    }
    else if(x==2){
        delete_teacher();
        teacher_manage();
    }
    else if(x==3){
        search_teacher();
        teacher_manage();
    }
    else if(x==4){
        display_teacher();
        teacher_manage();
    }
    else if(x==5){
        main();
    }

    else{
        printf("Wrong input\n");
        main();
    }
    }while(y!=1);

    }


    void main(){
        printf("\n\n>>>>>>STUDENT MANAGEMENT SYSTEM<<<<<<\n\n");
        int p,q;
        while(1){
            printf("\n1 for Admin\n2 for Student\n3 fot Teacher\n4 to exit\n      Choice: ");
            scanf("%d",&p);
            if(p==1){
               admin_manage();
            }
            else if(p==2){
               student_manage();
            }
            else if(p==3){
                teacher_manage();
            }
            else if(p==4){
                break;
            }
            else{
                printf("Wrong Choice\n");
                main();
            }

        }

    }
