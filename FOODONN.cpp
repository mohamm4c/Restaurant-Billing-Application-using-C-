#include<iostream.h>
#include<fstream.h>
#include<string>
using namespace std;
class Main
{
string s2;
string s3;
string pin;
int budget;
string str,str2,str3,path1,path2,path3,path4,path5;
public:
void Screen1()
{
fstream ifile2;
path2="main/restaurants/Screen1.txt";
char *c2=(char*)path2.c_str();
system("clear");
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"					************Welcome************"<<endl;
cout<<"						    FoodONN"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
ifile2.open(c2);
if(!ifile2)
{
exit(0);
}
while(!ifile2.eof())
{
getline(ifile2,str2);
cout<<str2<<endl;
}
ifile2.close();
cout<<"\n\n"<<endl;
loop1:cout<<"					Enter the Location(500001-25):";
cin>>pin;
if(pin.compare("500001")<0||pin.compare("500025")>0)
{
cout<<"						Invalid PIN"<<endl;
goto loop1;
}
}
void Screen2()
{
loop8:system("clear");
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                 ************Welcome************"<<endl;
cout<<"                                             FoodONN"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
fstream ifile;
path1=(string)"main/restaurants/"+pin+(string)"/"+pin+(string)".txt";
char *c=(char*)path1.c_str();
ifile.open(c);
if(!ifile)
{
cout<<"Error in opening file..!!";
exit(0);
}
while(!ifile.eof())
{
getline(ifile,str);
cout<<str<<endl;
}
ifile.close();
cout<<endl;
cout<<endl;
loop7:cout<<"				Choose the Restaurant:";
cin>>s2;
if(s2.compare("1")<0||s2.compare("2")>0)
{
goto loop7;
}
}
void Screen3()
{
system("clear");
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                 ************Welcome************"<<endl;
cout<<"                                             FoodONN"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"					Restaurant Details"<<endl;
fstream ifile;
path3=(string)"main/restaurants/"+pin+(string)"/"+pin+s2+(string)".txt";
char *c=(char*)path3.c_str();
ifile.open(c);
if(!ifile)
{
cout<<"Error in opening file..!!";
exit(0);
}
while(!ifile.eof())
{
getline(ifile,str);
cout<<str<<endl;
}
ifile.close();
cout<<endl;
cout<<endl;
}
void Screen4()
{
fstream ifile3;
path4="main/restaurants/menu.txt";
char *c3=(char*)path4.c_str();
system("clear");
cout<<endl;
cout<<endl;
cout<<"                                 ************Welcome************"<<endl;
cout<<"                                             FoodONN"<<endl;
cout<<endl;
cout<<endl;
ifile3.open(c3);
if(!ifile3)
{
cout<<"Error in opening file..!!";
exit(0);
}
while(!ifile3.eof())
{
getline(ifile3,str2);
cout<<str2<<endl;
}
ifile3.close();
}
void Screen5()
{
  fstream ifile5;
path5="main/restaurants/menu.txt";
char *c4=(char*)path5.c_str();
system("clear");
cout<<endl;
cout<<endl;
cout<<"                                 ************Welcome************"<<endl;
cout<<"                                             FoodONN"<<endl;
cout<<endl;
cout<<endl;
ifile5.open(c4);
if(!ifile5)
{
cout<<"Error in opening file..!!";
exit(0);
}
while(!ifile5.eof())
{
getline(ifile5,str3);
cout<<str3<<endl;
}
ifile5.close();
  int invoice[50][4];
  int i=0; char more;
loop2:cout<<"                                   Enter the Budget(50-10000):";
cin>>budget;
if(budget>10000)
{
cout<<"                                         Budget exceeded"<<endl;
goto loop2;
}
else if(budget<50)
{
cout<<"                                         Low Budget"<<endl;
goto loop2;
}
//system("clear");
  do {
    cout << "\n\n			Item Number: ";
    cin >> invoice[i][0];
    cout << "			Quantity : ";
    cin >> invoice[i][1];
    invoice[i][2] = getUnitprice(invoice[i][0]);
    invoice[i][3] = invoice[i][1] * invoice[i][2];
    cout << "			1)Add Item to cart			2)Total\n\n ";
loop9:cout<<"			Enter Option: ";
    cin >> more;
    i++;
  }while(more=='1');



  cout<<"	ItemCode|	Quantity|	UnitPrice|	TotalPrice\n\n";
  int tot=0;
  for(int k=0;k<i;k++)

        {
                for(int l=0; l<4; l++)
                {
                    cout <<"	"<< invoice[k][l]  << "\t";
                }
                cout << endl;
                tot = tot + invoice[k][3];
        }
  double tota=tot*1.18;

  cout << "\n\n			Total(inclusive of taxes) : " << tota<<endl;
    if (tota>budget)
{
cout<<"				Total has exceeded Budget"<<endl;
}
  cout << "\n			Press any key to refresh cart\n\n";
char x;
cin>>x;
 // return 0;
}
int getUnitprice(int itemCode){
  int price;
  switch (itemCode)
  {
    case 1: price = 250;
      break;
    case 2: price = 300;
      break;
    case 3: price = 550;
      break;
    case 4: price = 850;
  break;
case 5: price = 850;
  break;
case 6: price = 200;
  break;
case 7: price = 120;
  break;
case 8: price = 140;
  break;
case 9: price = 150;
  break;
case 10: price = 153;
  break;
case 11: price = 100;
  break;
case 12: price = 150;
  break;
case 13: price = 180;
  break;
case 14: price = 150;
  break;
case 15: price = 150;
  break;
case 16: price = 200;
  break;
case 17: price = 220;
  break;
case 18: price = 185;
  break;
case 19: price = 140;
  break;
case 20: price = 210;
  break;
case 21: price = 320;
  break;
 case 22: price = 380;
   break;
 case 23: price = 190;
   break;
 case 24: price = 160;
   break;
 case 25: price = 190;
   break;
 case 26: price = 140;
   break;
 case 27: price = 150;
   break;
 case 28: price = 190;
   break;
 case 29: price = 200;
   break;
 case 30: price = 210;
   break;
 case 31: price = 320;
   break;
 case 32: price = 330;
   break;
 case 33: price = 330;
   break;
 case 34: price = 350;
   break;
 case 35: price = 350;
   break;
 case 36: price = 35;
   break;
 case 37: price = 35;
   break;
 case 38: price = 40;
   break;
 case 39: price = 45;
   break;
 case 40: price = 40;
   break;
 case 41: price = 125;
   break;
 case 42: price = 125;
   break;
 case 43: price = 200;
   break;
 case 44: price = 140;
   break;
 case 45: price = 150;
   break;
 case 46: price = 170;
   break;
 case 47: price = 80;
   break;
 case 48: price = 45;
   break;
 case 49: price = 70;
   break;
 case 50: price = 60;
   break;
    default: price = 0;
      break;
  }
  return price;
}
};

 main()
{
Main m;
string s4,s5;
int i=0;
loop3:m.Screen1();
loop4:m.Screen2();
loop5:m.Screen3();
cout<<"                         1)MENU                      2)Go Back"<<endl;
cout<<"\n\n                                 Enter Option:";
cin>>s4;
if(s4=="1")
{
goto loop6;
}
else if(s4=="2")
{
goto loop3;
}
loop6:m.Screen4();
cout<<"                         1)Add items to Cart                2)Go Back"<<endl;
cout<<"\n\n                                Enter Option:";
cin>>s4;
if(s4=="1")
{
goto loop7;
}
else if(s4=="2")
{
goto loop3;
}
loop7:m.Screen5();
goto loop7;
//cout<<"				1)Go to home			2)EXIT"<<endl;
//loop8:cout<<"				Enter Option:";
//cin>>s5;
//if(s5.compare("1")<0||s5.compare("2")>0)
//{
//goto loop8;
//}
//else if(s5=="1")
//{
//goto loop3;
//}
//else 
//{
//exit(0);
//}
}
