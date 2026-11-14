#include<stdio.h>

struct information{
    int house_no;
    int block;
    char name[100];
    char city[100];

};
void infoinput(struct information person[], struct information rahul[], int n);
void sher(struct information person[],struct information rahul[], int n);

int main(){
    int n;
    printf("enter the no of person :");
    scanf("%d", &n);

struct information person[n];
struct information rahul[n];

infoinput(person,rahul,n);
sher(person,rahul,n);
return 0;
}

void infoinput(struct information person[], struct information  rahul[], int n){
    printf("enter the details of person :");
    for(int i=0; i<n;  i++){
   printf("enter the house no :\n");
    scanf("%d", &person[i].house_no);
    printf("enter the block :\n");
    scanf("%d", &person[i].block);
    printf("enter the name of person :\n");
    scanf(" %s",person[i].name);
    printf("enter the name of city :\n");
    scanf(" %s", person[i].city);

}

printf("enter the details of second perosn :\n");
for(int i=0; i<n; i++){
    printf("enter the house_no : ");
    scanf("%d", &rahul[i].house_no);
}

}
void sher(struct information person[], struct information rahul[], int n){
    for(int i=0; i<n; i++){
        if(person[i].house_no>15){
            printf("house no greather than =%d\n", person[i].house_no*2);
        }
    printf(" house no = %d block =%dname= %scity  %s\n", person[i].house_no, person[i].block, person[i].name, person[i].city );
}
for(int i=0; i<n; i++){
    printf("%d\n", rahul[i].house_no);
}
}