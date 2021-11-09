#include<iostream>

using namespace std;

int main()
{

int i=0, j=0, seatNo;
int seatsAllotted=0;

//10 seats numbered 1 through 10
//0->seat unavailable
//1->seat available

int available[10];

for(i=1; i<=10; i++)
{
    available[i]=1;
}

int choice;

while(1)
{

    cout<<"\n\n1. BOOKING";
    cout<<"\n";

    cout<<"2. CANCELLATION\n";
    cin>>choice;

    switch(choice)
    {

    //BOOKING PART

    case 1:

        int no;

        cout<<"\n\nEnter no. of seats to be booked: ";
        cin>>no;

        if((seatsAllotted+no)>10)
        {
            cout<<"Insufficient no. of seats are available";
        }

        else
        {

            for(j=1; j<=no; j++)
            {
                for(i=1; i<=10; i++)
                {
                    if(available[i]==1)
                    {
                        seatNo=i;
                        available[i]=0;
                        break;
                    }
                }

                cout<<"\nSeat nos. allotted are: ";
                cout<<seatNo;

                seatsAllotted+=1;
            }
        }
        break;

    //CANCELLATION PART
    case 2:

        int cancel;

        cout<<"\n\nEnter the seat nos. to be cancelled: ";
        cin>>cancel;

        available[cancel]=1;
        seatsAllotted-=1;

        break;

    default:

        cout<<"Wrong choice";

    }
}
return 0;
}
