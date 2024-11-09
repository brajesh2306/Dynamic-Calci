#include<iostream>
using namespace std;
class calci
{
        int a,b,sum=0;
        int ch,c;
        char ca,braj;
public:
        void getdata();
        void calculatedata();
};


void calci::calculatedata()
{

  do{
                getdata();
        cout<<"CHOOSE THE FOLLOWING OPTION"<<endl;
        cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulas"<<endl;
        cin>>ch;
        if(ch==1)
        {
                sum=a+b;
                cout<<"THE SUM OF "<<a<<" and "<<b<<" is: "<<sum<<endl;
                cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'"<<endl;
                cin>>ca;
         do{

                if(ca=='y')
                   {
                            cout<<"CHOOSE THE FOLLOWING OPTION"<<endl;
                            cout<<"1.Addition\n2.Subtraction\n3.Multiplycation\n4.Division\n5.Modulas"<<endl;
                            cin>>ch;
                         if(ch==1)
                        {
                             cout<<"ENTER THE THIRD NO"<<endl;
                             cin>>c;
                             cout<<"THE SUM OF "<<sum<<" and "<<c<<" is ";
                             sum=sum+c;
                             cout<<sum<<endl;
                        }
                        else if(ch==2)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                             cin>>c;
                               cout<<"ENTER THE THIRD NO"<<endl;
                               cin>>c;
                               cout<<"THE SUB OF "<<sum<<" and "<<c<<" is ";
                               sum=sum-c;
                               cout<<sum<<endl;
                        }
                        else if(ch==3)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE multiply OF "<<sum<<" and "<<c<<" is ";
                               sum=sum*c;
                               cout<<sum<<endl;
                        }
                        else if(ch==4)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE division OF "<<sum<<" and "<<c<<" is ";
                               sum=sum/c;
                               cout<<sum<<endl;
                        }
                        else if(ch==5)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE modulus OF "<<sum<<" and "<<c<<" is ";
                               sum=sum%c;
                               cout<<sum<<endl;
                        }
                        else
                                cout<<"YOU ENTERED THE WRONG INPUT"<<endl;
                }
                        cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'"<<endl;
                        cin>>ca;
          }while(ca=='y');
        }
        else if(ch==2)
        {
                sum=a-b;
                cout<<"THE SUB OF "<<a<<" and "<<b<<" is: "<<sum<<endl;
                cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'"<<endl;
                cin>>ca;
         do{

                if(ca=='y')
                   {
                            cout<<"CHOOSE THE FOLLOWING OPTION"<<endl;
                            cout<<"1.Addition\n2.Subtraction\n3.Multiplycation\n4.Division\n5.Modulas"<<endl;
                            cin>>ch;
                         if(ch==1)
                        {
                             cout<<"ENTER THE THIRD NO"<<endl;
                             cin>>c;
                             cout<<"THE SUM OF "<<sum<<" and "<<c<<" is ";
                             sum=sum+c;
                             cout<<sum<<endl;
                        }
                        else if(ch==2)
                        {
                               cout<<"ENTER THE THIRD NO"<<endl;
                               cin>>c;
                               cout<<"THE SUB OF "<<sum<<" and "<<c<<" is ";
                               sum=sum-c;
                               cout<<sum<<endl;
                        }
                        else if(ch==3)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE multiply OF "<<sum<<" and "<<c<<" is ";
                               sum=sum*c;
                               cout<<sum<<endl;
                        }
                        else if(ch==4)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE division OF "<<sum<<" and "<<c<<" is ";
                               sum=sum/c;
                               cout<<sum<<endl;
                        }
                        else if(ch==5)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE modulus OF "<<sum<<" and "<<c<<" is ";
                               sum=sum%c;
                               cout<<sum<<endl;
                        }
                        else
                                cout<<"YOU ENTERED THE WRONG INPUT"<<endl;
                }
                        cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'"<<endl;
                        cin>>ca;
          }while(ca=='y');
        }
        else if(ch==3)
        {
                sum=a*b;
                cout<<"THE multiply OF "<<a<<" and "<<b<<" is: "<<sum<<endl;
                cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'"<<endl;
                cin>>ca;
         do{

                if(ca=='y')
                   {
                            cout<<"CHOOSE THE FOLLOWING OPTION"<<endl;
                            cout<<"1.Addition\n2.Subtraction\n3.Multiplycation\n4.Division\n5.Modulas"<<endl;
                            cin>>ch;
                         if(ch==1)
                        {
                             cout<<"ENTER THE THIRD NO"<<endl;
                             cin>>c;
                             cout<<"THE SUM OF "<<sum<<" and "<<c<<" is ";
                             sum=sum+c;
                             cout<<sum<<endl;
                        }
                        else if(ch==2)
                        {
                               cout<<"ENTER THE THIRD NO"<<endl;
                               cin>>c;
                               cout<<"THE SUB OF "<<sum<<" and "<<c<<" is ";
                               sum=sum-c;
                               cout<<sum<<endl;
                        }
                        else if(ch==3)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE multiply OF "<<sum<<" and "<<c<<" is ";
                               sum=sum*c;
                               cout<<sum<<endl;
                        }
                        else if(ch==4)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE division OF "<<sum<<" and "<<c<<" is ";
                               sum=sum/c;
                               cout<<sum<<endl;
                        }
                        else if(ch==5)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE modulus OF "<<sum<<" and "<<c<<" is ";
                               sum=sum%c;
                               cout<<sum<<endl;
                        }
                        else
                                cout<<"YOU ENTERED THE WRONG INPUT"<<endl;
                }
                        cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'"<<endl;
                        cin>>ca;
          }while(ca=='y');
        }
        else if(ch==4)
        {
                sum=a/b;
                cout<<"THE division OF "<<a<<" and "<<b<<" is: "<<sum<<endl;
                cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'brajesh 1"<<endl;
                cin>>ca;
         do{

                if(ca=='y')
                   {
                            cout<<"CHOOSE THE FOLLOWING OPTION"<<endl;
                            cout<<"1.Addition\n2.Subtraction\n3.Multiplycation\n4.Division\n5.Modulas"<<endl;
                            cin>>ch;
                         if(ch==1)
                        {
                             cout<<"ENTER THE THIRD NO"<<endl;
                             cin>>c;
                             cout<<"THE SUM OF "<<sum<<" and "<<c<<" is ";
                             sum=sum+c;
                             cout<<sum<<endl;
                        }
                        else if(ch==2)
                        {
                               cout<<"ENTER THE THIRD NO"<<endl;
                               cin>>c;
                               cout<<"THE SUB OF "<<sum<<" and "<<c<<" is ";
                               sum=sum-c;
                               cout<<sum<<endl;
                        }
                        else if(ch==3)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE multiply OF "<<sum<<" and "<<c<<" is ";
                               sum=sum*c;
                               cout<<sum<<endl;
                        }
                        else if(ch==4)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE division OF "<<sum<<" and "<<c<<" is ";
                               sum=sum/c;
                               cout<<sum<<endl;
                        }
                        else if(ch==5)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE modulus OF "<<sum<<" and "<<c<<" is ";
                               sum=sum%c;
                               cout<<sum<<endl;
                        }
                        else
                                cout<<"YOU ENTERED THE WRONG INPUT"<<endl;
                }
        cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'brajesh"<<endl;
        cin>>ca;
          }while(ca=='y');
        }
        else if(ch==5)
        {
                sum=a%b;
                cout<<"THE modulus OF "<<a<<" and "<<b<<" is: "<<sum<<endl;
                cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y'"<<endl;
                cin>>ca;
         do{

                if(ca=='y')
                   {
                            cout<<"CHOOSE THE FOLLOWING OPTION"<<endl;
                            cout<<"1.Addition\n2.Subtraction\n3.Multiplycation\n4.Division\n5.Modulas"<<endl;
                            cin>>ch;
                         if(ch==1)
                        {
                             cout<<"ENTER THE THIRD NO"<<endl;
                             cin>>c;
                             cout<<"THE SUM OF "<<sum<<" and "<<c<<" is ";
                             sum=sum+c;
                             cout<<sum<<endl;
                        }
                        else if(ch==2)
                        {
                               cout<<"ENTER THE THIRD NO"<<endl;
                               cin>>c;
                               cout<<"THE SUB OF "<<sum<<" and "<<c<<" is ";
                               sum=sum-c;
                               cout<<sum<<endl;
                        }
                        else if(ch==3)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE multiply OF "<<sum<<" and "<<c<<" is ";
                               sum=sum*c;
                               cout<<sum<<endl;
                        }
                        else if(ch==4)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE division OF "<<sum<<" and "<<c<<" is ";
                               sum=sum/c;
                               cout<<sum<<endl;
                        }
                        else if(ch==5)
                        {
                                cout<<"ENTER THE THIRD NO"<<endl;
                                cin>>c;
                               cout<<"THE modulus OF "<<sum<<" and "<<c<<" is ";
                               sum=sum%c;
                               cout<<sum<<endl;
                        }
                        else
                                cout<<"YOU ENTERED THE WRONG INPUT"<<endl;
                }
                        cout<<"DO YOU WANT TO CONTINUE IF YES THEN PRESS 'y' "<<endl;
                        cin>>ca;
          }while(ca=='y');
        }
        cout<<"DO YOU WANT TO RESET THE VALUES OR RESTART IF YES THEN PRESS 'y'"<<endl;
        cin>>braj;
  }while(braj=='y');
  cout<<"\t\t\t\tTHANKS FOR USING\n\t\t\t\tUSE AGAIN"<<endl;
}
void calci::getdata()
{
        cout<<"ENTER THE TWO NOS: "<<endl;
        cin>>a>>b;

}
int main()
{
        calci s;
        s.calculatedata();
        return 0;
}
