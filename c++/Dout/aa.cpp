#include<iostream>
#include<stdio.h>
using namespace std;

#define HERO 909

union one{
  int a;
  long b;
};

struct Car {
   private : int a;
    int b;
    char *c;
    void one(){printf("one %d",HERO);}
    public:
    Car(){};
    Car(int a, int b,char* c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void setValue(int a,int b,char* c){
      this->a = a;
        this->b = b;
        this->c = c;
    }
    void getValues(){
      printf("%d\n",this->a);
    printf("%d\n",this->b);
    printf("%s\n",this->c);
    }
};

int main(){

  //   int x = 55;
  //   printf("%d \n",x);
  //   scanf("%d",&x);
  //   printf("%d \n",x);
    

    // This is a string littoral "oneTow" which return a const ptr
    char *str = "TOTO" ; // Cant be reinitialize meaning can't reference any other memory location
     str[0] = 's';
    char val[10]  = "oneoeoe";
    printf("%s\n", str);
    // scanf("%s",val);
    // printf("%s \n",val)
    // puts(val); //Print String
    // fgets(val,8,stdin);
    // puts(val);
    // strlen(val);
    // strcpy(str,val);//copy from val past to str
    // strcat(str,val);
    // strcmp(str,val);

    // char c = 'p' ;
    // c = 'u';
    // printf("%c \n",c);
    // scanf("%c",&c);
    // printf("%c \n",c);


    struct Car *car1 = new Car();
    // car1->a = 9909;
    // printf("%d\n",car1->a); // made private in struct
    // printf("%d\n",car1->b);
    // printf("%s\n",car1->c);
    // car1->getValues();
    // car1->setValue(88,909,"kkkoko");
    // car1->getValues();
    // car1->setValue(88,909,"eeoeoe");
    // car1->getValues();


 union one c1;
 c1.a =23;
 c1.b= 800;
 cout<<c1.a<<" "<<c1.b<<endl;
     

}