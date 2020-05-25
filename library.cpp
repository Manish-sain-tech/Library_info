#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
std :: string id;
std :: string category;
std :: string title;
std :: string author;
std:: string note;
 int choise;
std :: cout<<"enter your choise"<<endl<<"0-exit program"<<endl<<"1-list all book"<<endl<<"2-add new book by id"<<endl<<"4-search book by id"<<endl;
std :: cin>>choise;
switch(choise)
{
	case 0:

		break;
case 1:
ifstream file_("E:\\book.txt");
if(file_.is_open())
{
while(file_>> id >> category >> title >> author>>note)
{
std :: cout<<"id:"<<id<<endl<<"category:"<<category<<endl<<"title:"<<title<<endl<<"author:"<<author<<endl<<"note:"<<note<<endl;

}
}
else
{
std ::cout<<"file can not open";
}
file_.close();
break;
/*case 3:

ifstream file_("E:\\book.txt",ios::in,ios::out);
if(file_.is_open())
{
while(file_ >> line >> category >> title >> author>>note)
{
	std :: cout<<"enter the id for new book"<<endl;
std ::	cin>>id;
	if(line==id){

std :: cout<<"book is already exist of this id"<<endl;
goto done;}
std :: cout<<"enter the category [1-Arts,2-Language,3-Computers,4-Novels,5-Others]"<<endl;
std::cin>>category;
std :: cout<<"enter title:"<<endl;
std::cin>>title;
std :: cout<<"enter author name:"<<author<<endl;
std::cin>>author;
std :: cout<<"enter note:"<<endl;
std::cin>>note;
file_<<id<<category<<title<<author<<note;
goto done;
}
}
}
else
{
std ::cout<<"file can not open";
}
file_.close();*/
case 4:
std :: cout<<"enter book id"<<endl;
std :: cin>>id;
 ifstream file_("E:\\book.txt");
if(file_.is_open())
{
while(file_ >> id >> category >> title >> author>>note)
{
if(id==id)
{
std :: cout<<"id:"<<id<<endl<<"category:"<<category<<endl<<"title:"<<title<<endl<<"author:"<<author<<"note:"<<note<<endl;
}
}
file_.close();
}
else
{
std ::cout<<"file can not open";
}
break;
//default:
//	std ::cout<<"invaillid choise";
//	break;
}
std :: cin.get();
}
