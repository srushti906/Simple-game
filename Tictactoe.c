

#include <iostream>
#include <time.h>
using namespace std;

int main()
{ srand ( time(NULL) );
  int top=0,flag=0,top1=0,down=0,b[9],mode;
  char a[3][3];
  cout<<"\t\t\t\t\t\t\tGIVE US IN WHICH MODE DO YOU WANT TO PLAY!"<<endl;
  cout<<"\t\t\t\t\t\t\tPRESS 1 TO PLAY ALONE"<<endl;
  cout<<"\t\t\t\t\t\t\tPRESS 2 TO PLAY WITH FRIENDS"<<endl<<endl;
  cout<<"\t\t\t\t\t\t\tGIVE MODE: ";
  cin>>mode;
  while(mode!=1&&mode!=2)
  {
      cout<<"\t\t\t\t\t\t\tGIVE CORRECT MODE :";
      cin>>mode;
  }
  
 cout<<"\t\t\t\t\t\t\t";cout<<"PRESS NUMBER TO PUT AS BLOW."<<endl<<endl;
 
 cout<<"\t\t\t\t\t\t\t\t"; cout<<"| 1 | 2 | 3 |\n";
 cout<<"\t\t\t\t\t\t\t\t"; cout<<"-------------"<<endl;
  cout<<"\t\t\t\t\t\t\t\t";cout<<"| 4 | 5 | 6 |\n";
  cout<<"\t\t\t\t\t\t\t\t";cout<<"-------------"<<endl;
 cout<<"\t\t\t\t\t\t\t\t"; cout<<"| 7 | 8 | 9 |\n";
 
 cout<<endl<<endl;
 int n;
 for(int i=0;i<3;i++)
 {
     for(int j=0;j<3;j++)
     a[i][j]=' ';
 }
 
 
 for(int i=0;i<3;i++)
 {
     for(int j=0;j<3;j++)
     {
         if(top%2==0)
         {
            cout<<"\t\t\t\t\t\t\t"; cout<<"player 1's time to play"<<endl;
             cout<<"\t\t\t\t\t\t\t"; cout<<"give us number :";
             cin>>n;
             b[top]=n;
             for(int i=0;i<top;i++)
             {while(n==b[i])
             {cout<<"\t\t\t\t\t\t\t";cout<<"GIVE ANOTHER VALUE OF N:";
             cin>>n;
              cout<<endl;
             }
                 
             }while(n>9||n<0)
             {
              cout<<"\t\t\t\t\t\t\t";cout<<"GIVE ANOTHER VALUE OF N:";
             cin>>n;
              cout<<endl;  
             }
          switch(n)
          {case 1:a[0][0]='O';
                    break;
             case 2:a[0][1]='O';
                    break;
                    
            case 3:a[0][2]='O';
                    break;
            
            case 4:a[1][0]='O';
                    break;
            case 5:a[1][1]='O';
                    break;
            case 6:a[1][2]='O';
                    break;
            case 7:a[2][0]='O';
                    break;
            case 8:a[2][1]='O';
                    break;
            case 9:a[2][2]='O';
                    break;
          }
                cout<<endl;
             for(int i=0;i<3;i++)
             {cout<<"\t\t\t\t\t\t\t\t| ";
                 for(int j=0;j<3;j++)
                 {cout<<a[i][j]<<" | ";}
                cout<<endl<<"\t\t\t\t\t\t\t\t-------------"<<endl;
             }
 
             
         }
         else
         {if(mode==2)
              {cout<<"\t\t\t\t\t\t\t";cout<<"player 2's time to play"<<endl;;
                      cout<<"\t\t\t\t\t\t\t";cout<<"give us number :";
                     cin>>n;
                     b[top]=n;
                     for(int i=0;i<top;i++)
                     {while(n==b[i])
                         {
                             cout<<"\t\t\t\t\t\t\tGIVE ANOTHER VALUE OF N:";
                             cin>>n;
                             cout<<endl;
                         }
                     }
             
              }
              else
              {cout<<"\t\t\t\t\t\t\t";cout<<"computer's time to play"<<endl;;
                  n=rand()%10;
                  b[top]=n;
                     for(int i=0;i<top;i++)
                     {while(n==b[i])
                         {
                             n=rand()%10;
                             cout<<endl;
                         }
                     }
              }
             
             while(n>9||n<0)
             {
             cout<<"\t\t\t\t\t\t\tGIVE ANOTHER VALUE OF N:";
             cin>>n;
              cout<<endl;  
             }
             switch(n)
          {case 1:a[0][0]='X';
                    break;
             case 2:a[0][1]='X';
                    break;
                    
            case 3:a[0][2]='X';
                    break;
            
            case 4:a[1][0]='X';
                    break;
            case 5:a[1][1]='X';
                    break;
            case 6:a[1][2]='X';
                    break;
            case 7:a[2][0]='X';
                    break;
            case 8:a[2][1]='X';
                    break;
            case 9:a[2][2]='X';
                    break;
          }
             cout<<endl;
             for(int i=0;i<3;i++)
             {cout<<"\t\t\t\t\t\t\t\t| ";
                 for(int j=0;j<3;j++)
                 {cout<<a[i][j]<<" | ";}
                 cout<<endl<<"\t\t\t\t\t\t\t\t-------------"<<endl;
             }
 
         }
         for(int i=0;i<3;i++)
         {top1=0;down=0;
             for(int j=1;j<3;j++)
             {
                 if(a[i][j-1]==a[i][j]&&a[i][j]!=' ')
                 top1++;
                  if(a[j-1][i]==a[j][i]&&a[j][i]!=' ')
                 down++;
                  if(top1==2||down==2)
                  {
                      flag=1;
                      break;
                  }
             }
             if(flag==1)
             break;
         }
         if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[1][1]!=' ')
         flag=1;
          if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[1][1]!=' ')
         flag=1;
         if(flag==1)
             break;
             top++;
      }
      if(flag==1)
             break;
 }
 
 if(flag==1)
 {if(top%2!=0&&mode==1)
 cout<<"\t\t\t\t\t\t\tCOMPUTER WINS"<<endl;
  else if(top%2==0)
  cout<<"\t\t\t\t\t\t\tPLAYER 1 WON"<<endl;
  else
  cout<<"\t\t\t\t\t\t\tPLAYER 2 WON"<<endl;
 }
 else
cout<<"\t\t\t\t\t\t\tBETTER LUCK NEXT TIME";
 
    return 0;
}
