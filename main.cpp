#include <iostream>

using namespace std;

int main()
{
    char name[30],ch,choice,sub[15];
    int i,j,k,sem,num,cre[15];
    float gpa[8];
    int credit[8];
    cout<<"------CGPA CALCULATOR ------\n";
    cout<<"\nENTER YOUR NAME : ";
    cin.getline(name,30);


    cout<<"\nENTER TILL WHICH SEMESTER DO YOU WISH TO CALCULATE YOUR CGPA (1 TO 8) : ";
    cin>>sem;
    cout<<"\nDO YOU KNOW YOUR GPA (y/n): ";
    cin>>ch;
    if(ch=='n' || ch=='N')
    {
       cout<<"\nARE YOU FROM EEE DEPARTMENT(Y/N) :";
       cin>>choice;
         if(choice=='y' || choice=='Y')
          {

                      /*to find gpa */
                      for(j=0;j<sem;j++)
                      {
                      cout<<"\n ENTER THE NO. OF SUBJECTS TO FIND GPA - "<<j+1<<": ";
                      cin>>num;
                      for(i=0;i<num;i++)
                       {
                        cout<<"\nENTER YOUR GRADE POINT FOR SUBJECT(in lower case)-"<<i+1<<" : ";
                        cin>>sub[i];
                        cout<<"\n ENTER CORRESPONDING CREDIT : ";
                        cin>>cre[i];
                       }

                       float out=0,out1=0;


                       for(i=0;i<num;i++)
                       {
                        out1=out1+cre[i];
                        switch((int)sub[i]-96)
                        {
                        case 1:
                            k=9;
                            break;
                        case 2:
                            k=8;
                            break;
                        case 3:
                            k=7;
                            break;
                        case 4:
                            k=6;
                            break;
                        case 5:
                            k=5;
                            break;
                        case 19:
                            k=10;
                            break;
                        case 21:
                            k=0;
                            break;

                        }
                        out=out+(k*cre[i]);

                       }

                        gpa[j]=out/out1;
                        cout<<"\ngpa-"<<j+1<<" : "<<gpa[j]<<endl;
                      }

           credit[0]=27;
           credit[1]=27;
           credit[2]=23;
           credit[3]=22;
           credit[4]=27;
           credit[5]=20;
           credit[6]=23;
           credit[7]=12;
          }
          else
          {
                       for(j=0;j<sem;j++)
                       {
                       cout<<"\n enter the no. of subjects for gpa-"<<j+1<<":";
                       cin>>num;
                       for(i=0;i<num;i++)
                       {
                        cout<<"\nENTER YOUR GRADE POINT FOR SUBJECT(in lower case)-"<<i+1<<" : ";
                        cin>>sub[i];
                        cout<<"\n        ENTER CORRESPONDING CREDIT : ";
                        cin>>cre[i];
                       }

                       float out=0,out1=0;



                       for(i=0;i<num;i++)
                       {
                        out1=out1+cre[i];
                        switch((int)sub[i]-96)
                        {
                        case 1:
                            k=9;
                            break;
                        case 2:
                            k=8;
                            break;
                        case 3:
                            k=7;
                            break;
                        case 4:
                            k=6;
                            break;
                        case 5:
                            k=5;
                            break;
                        case 19:
                            k=10;
                            break;
                        case 21:
                            k=0;
                            break;

                        }

                        out=out+(k*cre[i]);

                       }

                        gpa[j]=out/out1;
                        cout<<"\ngpa-"<<j+1<<" : "<<gpa[j]<<endl;
                        cout<<"\nENTER CORRESPONDING CREDIT : ";
                        cin>>credit[j];
                       }

           }


    }
    else
    {
       cout<<"\nARE YOU FROM EEE DEPARTMENT(Y/N) :";
       cin>>choice;
       if(choice=='y' || choice=='Y')
       {
           for(j=0;j<sem;j++)
           {
            cout<<"\nENTER YOUR GPA-"<<j+1<<" : ";
            cin>>gpa[j];
           }
           credit[0]=27;
           credit[1]=27;
           credit[2]=23;
           credit[3]=22;
           credit[4]=27;
           credit[5]=20;
           credit[6]=23;
           credit[7]=12;
       }
       else
       {
          for(j=0;j<sem;j++)
           {
            cout<<"\nENTER YOUR GPA-"<<j+1<<" : ";
            cin>>gpa[j];
            cout<<"\nENTER YOUR CREDITS : ";
            cin>>credit[j];
           }
       }
    }





    float result=0.0;
    for(i=0;i<sem;i++)
    {
       result=result+gpa[i]*credit[i];
    }
    int sum=0;
     for(i=0;i<sem;i++)
    {
       sum=sum+credit[i];
    }
    float answer=result/sum;
    cout<<"\n"<<name<<"'s"<<" CGPA : "<<answer<<"\n\n";
    cout<<"----------ALL THE BEST----------\n";
    return 0;
}
