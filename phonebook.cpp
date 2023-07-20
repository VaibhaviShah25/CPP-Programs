#include<iostream>
#include<string.h>
using namespace std;
enum operation{add=1,modify,search_phone,search_city,Delete,all_names,all_contacts};
struct address
{
    int hno,pincode;
    char city[30];
};
struct Phonebook
{
    char name[50];
    int phone;
    address ad;
};
int main()
{
    Phonebook a[50],temp;
    int i,j=0,ph,choice,cnt,pos;
    char n[50],c[30],t[50];
    while(1)
    {
    cout<<"Enter  1 : Add a contact "<<endl;
    cout<<"Enter  2 : Modify a contact "<<endl;
    cout<<"Enter  3 : Search on basis of phone no. "<<endl;
    cout<<"Enter  4 : Search on basis of city "<<endl;
    cout<<"Enter  5 : Delete a contact "<<endl;
    cout<<"Enter  6 : Show all contact names "<<endl;
    cout<<"Enter  7 : Show all detailed contacts"<<endl;
    cout<<"Enter  8 : Exit "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    if(choice == 8)
        break;
    else{
    switch(choice)
    {
    case add :
    {
        cout<<"Enter name , phone no.: "<<endl;
        cin>> a[j].name>>a[j].phone;
        cout<<"Enter house no., city, pincode"<<endl;
        cin>>a[j].ad.hno>>a[j].ad.city>>a[j].ad.pincode;
        j++;
        cout<<"Contact added successfully "<<endl;
        cout<<"-----------------------------------------------"<<endl;
        break;
    }
    case modify:
    {
        cout<<"Enter name to be modified : "<<endl;
        cin>>n;
        cnt = 0;
        for(i=0;i<j;i++)
        {
            if(strcmpi(a[i].name,n) == 0)
            {
                cnt++;
                cout<<"Enter new phone number : ";
                cin>>ph;
                a[i].phone = ph;
                cout<<"Phone number updated successfully "<<endl;
                cout<<"-----------------------------------------------"<<endl;
                break;
            }
        }
        if(cnt == 0)
        {
            cout<<"Name not found!";
            cout<<"-----------------------------------------------"<<endl;
        }

        break;
    }
    case search_phone:
    {
        cnt = 0;
        cout<<"Enter phone number : ";
        cin>>ph;
        for(i=0;i<j;i++)
        {
            if(ph == a[i].phone)
            {
                cnt++;
                cout<<"FOUND!"<<endl;
                cout<<"Name : "<<a[i].name<<endl;
                cout<<"Phone number : "<<a[i].phone<<endl;
                cout<<"Address : "<<a[i].ad.hno<<","<<a[i].ad.city<<","<<a[i].ad.pincode<<endl;
                cout<<"-------------------------------------------------------"<<endl;
                break;
            }
        }
        if(cnt == 0)
        {
            cout<<"Phone no. not found"<<endl;
            cout<<"-------------------------------------------------------"<<endl;
        }

        break;

    }
    case search_city:
    {
        cnt = 0;
        cout<<"Enter city : ";
        cin>>c;
        for(i=0;i<j;i++)
        {
            if(strcmpi(a[i].ad.city,c) == 0)
            {
                cnt++;
                cout<<"FOUND!"<<endl;
                cout<<"Name : "<<a[i].name<<endl;
                cout<<"Phone number : "<<a[i].phone<<endl;
                cout<<"Address : "<<a[i].ad.hno<<","<<a[i].ad.city<<","<<a[i].ad.pincode<<endl;
                cout<<"-------------------------------------------------------"<<endl;
            }
        }
        if(cnt == 0)
        {
            cout<<"No person with given city"<<endl;
            cout<<"-------------------------------------------------------"<<endl;
        }

        break;

    }
    case Delete:
    {
        cnt = 0;
        cout<<"Enter name of the contact to be deleted : ";
        cin>>n;
          for(i=0;i<j;i++)
          {
              if(strcmpi(a[i].name,n) == 0)
              {
                  pos = i;
                  cnt++;
                  break;
              }
          }
          if(cnt != 0)
          {
              for(i=pos;i<j;i++)
          {
             temp = a[i];
              a[i] = a[i+1];
              a[i+1] = temp;
          }
          j--;
          cout<<"Contact Deleted successfully "<<endl;
          cout<<"-------------------------------------------------------"<<endl;
         }
         else if(cnt == 0)
         {
            cout<<"No person found with the given name"<<endl;
            cout<<"-------------------------------------------------------"<<endl;
         }

        break;

          }
    case  all_names:
    {
            for(i=0;i<j;i++)
            {
                cout<<a[i].name<<endl;
            }
            cout<<"-------------------------------------------------------"<<endl;
            break;

    }
    case all_contacts:
    {
            for(i=0;i<j;i++)
            {
                cout<<"Name : "<<a[i].name<<endl;
                cout<<"Phone number : "<<a[i].phone<<endl;
                cout<<"Address : "<<a[i].ad.hno<<","<<a[i].ad.city<<","<<a[i].ad.pincode<<endl;
                cout<<"-------------------------------------------------------"<<endl;
            }
    }
        }
    }
}
return 0;
}
