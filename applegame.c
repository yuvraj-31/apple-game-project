#include<stdio.h>
int app=21;
int main()
{

    char name[20];
    printf("Enter the player name: ");
    gets(name);
    while(1)
        {

         int b;
         if(app>=0)
         {printf("Remaining apples=%d\n",app);
            b=input();
         }
       if(app<=0)
       {
           printf("sorry %s, you loss this game",name);
           return 0;
       }
       app=app-b;
       int c;
       c=5-b;
       if(c<=0)
       {
         printf("great %s, you win this game",name);
         return 0;
       }
       else
       {
         app=app-c;
       }

    }

    }
   void input()
   {
       printf("Enter your input apples:\n");
      while(1)
      {
          int a;

       scanf("%d",&a);

       if(a>4 || a<1)
       {
           printf("plz enter the valid apple value\n");
       }
       else
       {
           if(app<a && app>=0)
           {
               printf("Plz enter between remaining apple values\n");
           }
            else
           return app-a;
       }
      }
   }
