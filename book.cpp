#include <iostream>
#include <vector>
#include<string>
using namespace std;
class book
{   public:
    string title;
    string Author;
    int year_publication;
    void display()
    {
         cout<<title<<"  "<<Author<<"  "<<year_publication<<endl;
    }
    book()
    {
        title = "abc";
        Author ="xyz";
    }
    book(string a , string b, int c){
        title = a;
       Author = b;
       year_publication=c;
    }
    void set_data()
    {   cout<<"Enter the title of the book:";
        cin>>title;
        cout<<"Enter the name of the auther:";
        cin>>Author;
    }
    string get_title()
    {
        return title;
    }
    string get_author()
    {
        return Author;
    }
    int year()
    {
        return year_publication;
    }

};
int main() 
{
string title,Author,s;
int a,c;
    int year_publication;
   book *k = new book ;
       
    cout<<"Enter the no. of books"<<endl;
    cin>>a;

  vector<book> vector1 = { };

  for(int i=0;i<a;i++)
  {
      cout<<"Enter book title"<<endl;
        cin>>title;
        cout<<"Enter Author"<<endl;
        cin>>Author;
        cout<<"Year of publication:"<<endl;
        cin>>year_publication;
   vector1.push_back(book(title,Author,year_publication) );
  }
 int i=1;
 while(i>0)
 {
 cout<<"Enter your Choice"<<endl;
    cout<<"1. Add a book"<<endl<<"2. Display books"<<endl<<"3. Search a book"<<endl<<"4. Exit"<<endl;
    cin>>c;
    vector<book>::iterator ptr;
   if(c==1)
   {
    cout<<"Enter book title"<<endl;
        cin>>title;
        cout<<"Enter Author"<<endl;
        cin>>Author;
        cout<<"Year of publication:"<<endl;
        cin>>year_publication;
   vector1.push_back(book(title,Author,year_publication) );

   }
    else if(c==2){
  cout<<"Title  Author  Year of publication"<<endl;
    for (ptr = vector1.begin(); ptr < vector1.end(); ptr++)
        {
        (*ptr).display();
        }
    }
    else if(c==3){
    int b=0;
      cout<<"Enter the book to be search"<<endl;
      cin>>s;
      for(ptr = vector1.begin(); ptr < vector1.end(); ptr++)
      {
          string x=(*ptr).get_title();
          string y=(*ptr).get_author();
          int z=(*ptr).year();
          if(s==x)
          {
              b++;
              cout<<"Yes book is found"<<endl;
              cout<<"Title of book:"<<x<<endl;
              cout<<"Author of book"<<y<<endl;
              cout<<"Year of publication"<<z<<endl;
              break;
          }
         
      }
     if(b==0)
      {
          cout<<"Sorry book doesn't found"<<endl;
      }
    }
    else if(c==4)
    {
        return 0;
    }
    i++;
 }
}