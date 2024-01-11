#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
void displaybill(int billno);
class product
{
public:
    int pid;
    char name[50];
    int price;
public:
    void accept()
    {
        fflush(stdin);
        cout<<"Enter product name : ";
        gets(name);
        cout<<"Enter product id : ";
        cin>>pid;
        cout<<"Enter product price : ";
        cin>>price;
    }
    void display()
    {
        cout<<"Product id     : "<<pid<<endl;
        cout<<"Product Name   : "<<name<<endl;
        cout<<"Product Price  : "<<price<<endl;
    }
};
product pobj;
class bill
{
public:
    int billno;
    char date[20];
    int pid;
    char name[50];
    int price;
    void accept()
    {
        cout<<"Enter bill no : ";
        cin>>billno;
        cout<<"Enter date of bill : ";
        cin>>date;
    }
    void display(int srno)
    {
        cout<<"\\t"<<srno;
        cout<<"\\t"<<pid;
        cout<<"\\t\\t"<<name;
        for(int i=1;i<=30-strlen(name);i++)
        {
            cout<<" ";
        }
        cout<<"\\t"<<price<<endl;
    }

};
bill bobj;
void generatebill()
{
    bobj.accept();
    int scanid;
    int total=0;
    fstream rd,wr;
    rd.open("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt",ios::in);
    if(!rd)
    {
        cout<<"Error opening file "<<endl;
    }
    else
    {
        int n;
        rd.seekg(0,ios::end);
        n = rd.tellg()/sizeof(pobj);
        rd.seekg(0,ios::beg);
        while(scanid!=0)
        {
            cout<<"Enter scan id (0 for exit) : ";
            cin>>scanid;
            if(scanid==0)
            {
                break;
            }
            else
            {
                int flag =0;
                for(int i=1; i<=n; i++)
                {
                    rd.read((char*)&pobj,sizeof(pobj));
                    if(pobj.pid==scanid)
                    {
                        pobj.display();
                        flag =1;
                        bobj.pid = pobj.pid;
                        strcpy(bobj.name,pobj.name);
                        bobj.price=pobj.price;
                        total += pobj.price;
                        cout<<"Total Amount "<<total<<endl;
                        cout<<"Product added to bill"<<endl;
                        break;
                    }
                }
                rd.seekg(0,ios::beg);
                if(flag==1)
                {
                    wr.open("C:\\Users\\Shivangi\\Desktop\\cpp\\Bill.txt",ios::app);
                    wr.write((char*)&bobj,sizeof(bobj));
                    wr.close();
                }
                else
                {
                    cout<<"Product not found "<<endl;
                }
            }

        }
        rd.close();
        cout<<"bill generated "<<endl;
        displaybill(bobj.billno);
    }
}
void displaybill(int billno)
{
  cout<<"\\t\\t\\tWelcome To MY Shop"<<endl;
  cout<<"\\t\\t\\tBill No. "<<billno<<endl;
  fstream rd;
  rd.open("C:\\Users\\Shivangi\\Desktop\\cpp\\Bill.txt",ios::in);
  if(!rd)
  {
      cout<<"Error opening file "<<endl;
  }
  else
  {
      int n;
      rd.seekg(0,ios::end);
      n = rd.tellg()/sizeof(bobj);
      rd.seekg(0,ios::beg);
      int srno=0;
      int total=0;
      cout<<"\\tSr.no\\tProduct id\\tProduct Name\\t\\t\\tPrice "<<endl;
      for(int i=1;i<=n;i++)
      {
          rd.read((char*)&bobj,sizeof(bobj));
          if(bobj.billno==billno)
          {
              srno++;
              bobj.display(srno);
              total+=bobj.price;
          }
      }
      cout<<"\\t\\tTotal Bill "<<total<<endl;
      cout<<"\\t\\t\\tThanks for shopping"<<endl;
      rd.close();
  }
}
void addproduct()
{
    fstream wr;
    wr.open("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt",ios::app);
    if(!wr)
    {
        cout<<"Error opening file "<<endl;
    }
    else
    {
        pobj.accept();
        wr.write((char*)&pobj,sizeof(pobj));
        wr.close();
        cout<<"Product Added "<<endl;
    }
}
void showallproducts()
{
    fstream rd;
    rd.open("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt",ios::in);
    if(!rd)
    {
        cout<<"Error opening file"<<endl;
    }
    else
    {
        int n;
        rd.seekg(0,ios::end);
        n = rd.tellg()/sizeof(pobj);
        rd.seekg(0,ios::beg);
        for(int i=1; i<=n; i++)
        {
            rd.read((char*)&pobj,sizeof(pobj));
            pobj.display();
            cout<<"--------------------------"<<endl;
        }
        rd.close();
    }
}
void searchproduct()
{
    fstream rd;
    rd.open("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt",ios::in);
    if(!rd)
    {
        cout<<"Error opening file"<<endl;
    }
    else
    {
        int id; //id to search
        cout<<"Enter product id to search : ";
        cin>>id;
        int flag=0;

        int n;
        rd.seekg(0,ios::end);
        n = rd.tellg()/sizeof(pobj);
        rd.seekg(0,ios::beg);
        for(int i=1; i<=n; i++)
        {
            rd.read((char*)&pobj,sizeof(pobj));
            if(pobj.pid == id)
            {
                cout<<"Product Information "<<endl;
                pobj.display();
                cout<<"--------------------------"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Product not found "<<endl;
        }
        rd.close();
    }
}
void deleteproduct()
{
    fstream rd,wr;
    rd.open("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt",ios::in);
    wr.open("c:\\\\myfiles\\\\temp.txt",ios::app);
    if(!rd || !wr)
    {
        cout<<"Error opening files"<<endl;
    }
    else
    {
        int id;
        cout<<"Enter product id to delete ";
        cin>>id;
        int n;
        rd.seekg(0,ios::end);
        n = rd.tellg()/sizeof(pobj);
        rd.seekg(0,ios::beg);
        int flag =0;
        for(int i=1; i<=n; i++)
        {
            rd.read((char*)&pobj,sizeof(pobj));
            if(pobj.pid == id)
            {
                cout<<"Following product deleted "<<endl;
                pobj.display();
                flag = 1;
            }
            else
            {
                wr.write((char*)&pobj,sizeof(pobj));
            }
        }
        if(flag==0)
        {
            cout<<"Product not found "<<endl;
        }
        rd.close();
        wr.close();
        remove("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt");
        //rename("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt");
    }
}
void updateproduct()
{
    fstream rd,wr;
    rd.open("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt",ios::in);
    wr.open("C:\\Users\\Shivangi\\Desktop\\cpp\\tempo.txt",ios::app);
    if(!rd || !wr)
    {
        cout<<"Error opening files"<<endl;
    }
    else
    {
        int id;
        cout<<"Enter product id to update ";
        cin>>id;
        int n;
        rd.seekg(0,ios::end);
        n = rd.tellg()/sizeof(pobj);
        rd.seekg(0,ios::beg);
        int flag =0;
        for(int i=1; i<=n; i++)
        {
            rd.read((char*)&pobj,sizeof(pobj));
            if(pobj.pid == id)
            {
                pobj.display();
                cout<<"Enter new product information "<<endl;
                pobj.accept();
                wr.write((char*)&pobj,sizeof(pobj));
                flag = 1;
                cout<<"Product updated success "<<endl;
            }
            else
            {
                wr.write((char*)&pobj,sizeof(pobj));
            }
        }
        if(flag==0)
        {
            cout<<"Product not found "<<endl;
        }
        rd.close();
        wr.close();
        remove("C:\\Users\\Shivangi\\Desktop\\cpp\\Products.txt");
        //rename("c:\\\\myfiles\\\\temp.txt","c:\\\\myfiles\\\\products.txt");
    }
}
void dailysale()
{
    char date[20];
    cout<<"Enter date : ";
    cin>>date;
    fstream rd("C:\\Users\\Shivangi\\Desktop\\cpp\\Bill.txt",ios::in);
    if(!rd)
    {
        cout<<"Error opening file "<<endl;
    }
    else
    {
        int n;
        rd.seekg(0,ios::end);
        n= rd.tellg()/sizeof(bobj);
        rd.seekg(0,ios::beg);
        int total = 0;
        int srno=1;
        cout<<"\\t\\t\\tDate of sale "<<date<<endl;
        cout<<"\\tSr.no\\tProduct id\\tProduct Name\\t\\t\\tPrice "<<endl;
        for(int i=1;i<=n;i++)
        {
            rd.read((char*)&bobj,sizeof(bobj));
            if(strcmp(bobj.date,date)==0)
            {
                bobj.display(srno);
                srno++;
                total += bobj.price;
            }
        }
        cout<<"\\t\\t\\t\\t\\tTotal Sale "<<total<<endl;
        rd.close();
    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<endl<<"1. Add Product "<<endl;
        cout<<"2.View All Products "<<endl;
        cout<<"3.Update Product "<<endl;
        cout<<"4.Search Product "<<endl;
        cout<<"5.Delete Product "<<endl;
        cout<<"6.Generate Bill "<<endl;
        cout<<"7.Daily Sale "<<endl;
        cout<<"8.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            addproduct();
            break;
        case 2:
            showallproducts();
            break;
        case 3:
            updateproduct();
            break;
        case 4:
            searchproduct();
            break;
        case 5:
            deleteproduct();
            break;
        case 6:
            generatebill();
            break;
        case 7:
            dailysale();
            break;
        case 8:
            exit(0);
        default:
            cout<<"Invalid choice "<<endl;
        }
    }
}



