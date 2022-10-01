#include<iostream>
using namespace std;

const int MAX_SIZE=4;

class Queue
{
 private:
  int  front;
  int  end;
  string arr[MAX_SIZE];

  public:
  Queue()
  {
     front=-1;
     end=-1;
  }
  void Enqueue( string name )
  {
     if(end==MAX_SIZE-1)
     {
        cout<<"FULL"<<endl;
     }
     else
     {
        if(front==end && front==-1)
        {
            end=front=0;
            arr[end]=name;
        }
        else
        {
            end++;
            arr[end]=name;

        }
     }
  }

  string Dequeue()
  {
    if(front>end || front==-1)
    {

        return "EMPTY";
    }
    else
    {

        string data=arr[front];
        front++;
        if(front>end)
        {
            front=end=-1;
        }
        return data;


    }
  }

  void showAlldata()
  {
    if(front>end || end==-1)
    {
        cout<<"EMPTY"<<endl;
    }
    else{

    for(int i=front;i<=end;i++)
    {
        cout<<arr[i]<<endl;
    }
    }
  }
};

int menu()
{
    cout<<"1. ENQUEUE"<<endl;
    cout<<"2. DEQUEUE"<<endl;
    cout<<"3. ShowAllData"<<endl;
    int opt;
    cin>>opt;
    return opt;
}
string NameInput()
{
        cout<<"Enter the student name"<<endl;
        string name;
        cin>>name;
        return name;
}
main()
{
    Queue s;
    while(true)
    {
    int opt=menu();
    if(opt==1)
    {
        string name=NameInput();
        s.Enqueue(name);

    }
    else if(opt==2)
    {
     string data=s.Dequeue();
     cout<<data<<endl;
    }
    else if(opt==3)
    {
        s.showAlldata();
    }
    }
    
}