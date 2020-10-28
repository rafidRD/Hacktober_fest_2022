#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct empl{
      int id;
      char name[100];
      float salary;
    };

void search_name(struct empl [],int , char []);
void search_id(struct empl [],int ,int );
void modify(struct empl [],int,int);
void displayall(struct empl [] ,int );
void display(struct empl [], int ,float );
void maxsal(struct empl [],int);


int main()
{
    int n,id,size,i;
    float sal=0;
    struct empl s[100];
    char ename[100];
    printf("\nEnter number of employees");
    scanf("%d",&size);
    printf("\nEnter employee details");
    for(i=0;i<size;i++){
        scanf("%d %s %f",&s[i].id,&s[i].name,&s[i].salary);
    }
    printf("\n");
   while(1){
        
        printf("\n1.Search by name");
        printf("\n2.Search by id");
        printf("\n3.Modify");
        printf("\n4.Display All");
        printf("\n5.Display all employee having salary greater than ");
        printf("\n6.Display employee having maximum salary");
        printf("\n7.Exit");
        
        printf("\nEnter a choice");
        scanf("%d",&n);
    
        switch(n){
            
            case 1:
            printf("\nEnter employee name");
            scanf("%s",ename);
            search_name(s,size,ename);
            break;
            
            case 2:
            printf("\nEnter employee id");
            scanf("%d",&id);
            search_id(s,size,id);
            break;
            
            case 3:
            printf("\nEnter employee id ");
            scanf("%d",&id);
            modify(s,id,size);
            break;
            
            case 4:
            displayall(s,size);
            break;
            
            case 5:
            printf("\nEnter salary");
            scanf("%f",&sal);
            display(s,size,sal);
            break;
            
            case 6:
            maxsal(s,size);
            break;
            
            case 7: exit(0);
            break;
            
            default: printf("\nInvalid choice");
        }
}
 return 0;
}
void search_name(struct empl a[],int s, char b[]){
    int i=0,flag=0;
    while(i<s){
        if(strcmp(a[i].name,b)==0){
            printf("\nID   \tName    \tSalary");
            printf("\n%d %s %f",a[i].id,a[i].name,a[i].salary);
            flag=1;
        }
        i++;
        }
        if(flag==0)
        printf("\nNo detail found");
}

void search_id(struct empl a[],int s,int id){
    int i=0,flag=0;
    while(i<s){
        if(a[i].id==id){
            printf("\nID   \tName     \tSalary");
            printf("\n%d %s %f",a[i].id,a[i].name,a[i].salary);
            flag=1;
        }
        i++;
        }
        if(flag==0)
        printf("\nNo detail found");
}
void modify(struct empl a[],int id,int s){
     int i=0,flag=0;
    while(i<s){
        if(a[i].id==id){
            printf("\nID   \tName     \tSalary");
            scanf("\n%d %s %f",&a[i].id,&a[i].name,&a[i].salary);
            flag=1;
        }
        i++;
        }
        if(flag==0)
        printf("\nNo detail found");
}

void displayall(struct empl a[],int s){   
    int i=0;
    printf("\nID   \tName     \tSalary");
    while(i<s){
        printf("\n%d %s %f",a[i].id,a[i].name,a[i].salary);
        i++;
    }
}

void display(struct empl a[],int s,float sal){   
    int i=0,flag=0;
    printf("\nID    \tName    \tSalary");
    while(i<s){
        if(a[i].salary>sal){
        printf("\n%d %s %f",a[i].id,a[i].name,a[i].salary);
        flag=0;
        }
        i++;
        }
        if(flag==1)
        printf("\nNo detail found");
}
void maxsal(struct empl a[],int s){   
    int i=1,n=0;
    int lar=a[0].salary;
    printf("\nID    \tName    \tSalary");
    while(i<s){
        if(a[i].salary>lar){
        lar=a[i].salary;
        n=i;
        }
        i++;
    }
    printf("\n%d %s %f",a[n].id,a[n].name,a[n].salary);
}

   
