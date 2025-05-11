
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdio.h>
#include<windows.h>
using namespace std;
void logo()
{

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t________________________________________________________________________________________________\n";
cout<<"\t\t\t\t\t|    _______________________________________________________________________________________    |\n";
cout<<"\t\t\t\t\t|   |                                           		                            |   |\n";
cout<<"\t\t\t\t\t|   |                                           		                            |   |\n";
cout<<"\t\t\t\t\t|   |                                           		                            |   |\n";
cout<<"\t\t\t\t\t|   |                                           		                            |   |\n";
cout<<"\t\t\t\t\t|   |                     ************************************************                  |   |\n";
cout<<"\t\t\t\t\t|   |                     * ******************************************** *                  |   |\n";
cout<<"\t\t\t\t\t|   |                     * *            WELCOME TO                    * *                  |   |\n";
cout<<"\t\t\t\t\t|   |                     * *               A.R.Z                      * *                  |   |\n";
cout<<"\t\t\t\t\t|   |                     * *         Hospital Managment System        * *                  |   |\n";
cout<<"\t\t\t\t\t|   |                     * ******************************************** *                  |   |\n";
cout<<"\t\t\t\t\t|   |                     ************************************************                  |   |\n";
cout<<"\t\t\t\t\t|   |                                                                                       |   |\n";
cout<<"\t\t\t\t\t|   |                                                                                       |   |\n";
cout<<"\t\t\t\t\t|   |                                                                                       |   |\n";
cout<<"\t\t\t\t\t|   |                                                                                       |   |\n";
cout<<"\t\t\t\t\t|   |_______________________________________________________________________________________|   |\n";
cout<<"\t\t\t\t\t|_______________________________________________________________________________________________|\n\n\n\n\t\t\t\t\t";
    getch();
    
	cout<<"\n\n\n\t\t\t\t\t";
    cout<<"\t\t\t\n\t\t\t\t\t\tPlease Wait.....\n";
	cout<<"\n\n\t\t\t\t\t\t";
	cout<<"Loading";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	Sleep(500);
 	cout<<".";
 	system("cls");
}
template<class A>
int checklogin(A aa,ifstream &b,const string n,const string p)
{
   int flag=1;
	A obj1;
	//b>>obj1;
	while(!b.eof())
	{
	b>>obj1;
		if(n==obj1.getname())
		{
		if(p==obj1.getpno())
		{
			flag=0;
			break;
		}
		}
	}
	return flag;  
}

template<class sw>
void update(sw obj,ofstream& temp,ifstream& file,const string &p)
{
	sw obj2;
	file>>obj2;
	while(!file.eof())
	{
		if(p==obj2.getpno())
		{
			cout<<obj2;
			cout<<"\n Enter the updated data ";
			cin>>obj2;
		}
		temp<<obj2;
		file>>obj2;	
	}
}
template <class a>
void readspecific(a obj,ifstream &b,const string &p)
{
	b>>obj;
	while(!b.eof())
	{
		if(p==obj.getpno())
		{
			cout<<obj;
			break;
		}
		b>>obj;
	}
}
template<class ss>
void deleterecord(ss obj,ifstream &file,ofstream &temp,const string &p)
{
	ss obj2;
	while(
	file>>obj2)
	{
	if(p==obj2.getpno())
		{
		cout<<obj2;
		continue;
		}//
		temp<<obj2;
		file>>obj2;
	
	}}
template<class s>
void write(s ss,ofstream &of)
{
	of<<ss;

}
template<class p>
void read(p ss,ifstream &i)
{
	string line;
	while(!i.eof())
{
	getline(i,line);
	cout<<line<<endl;
	}
	getch();
	}
template<class ss>
int pinno(ss s,ifstream &of, const string &p)
{
	s.setpinno(p);
	int flag=1;
	of>>s;
	while(!of.eof())
	{
		//of>>pb;
	
		if(p==s.getpno())
		{
			
	    flag= 0;
	}	
		
		of>>s;
		
	}
	
	return flag;
}
template<class pp>
void updatee(pp obj,ofstream& a,ifstream& b,const string &p)
{
pp obj2;
string medicinee;
cout<<"\n Enter the medicine::";
cin>>medicinee;
b>>obj2;
while(!b.eof())
	{
		if(p==obj2.getpno())
		{
		cout<<obj2;
		 obj2.setmedicine(medicinee);
		}
		a<<obj2;
		b>>obj2;	
	}
}	
class date
{
	protected:
	int month,year,day;
	public:
	friend ostream & operator <<(ostream &in,const date &d)
		{
			in<< d.day<<" "<<d.month<<" "<<d.year;
			return in;
		}
		friend istream & operator >>(istream &in, date &d)
		{
			cout<<"\n Enter days:";
			in>> d.day;
			cout<<"\n Enter month:";
			in>>d.month;
			cout<<"\n Enter year:";
			in>>d.year;
			return in;
		}
		friend ofstream & operator <<(ofstream &in,const date &d);
		friend ifstream & operator >>(ifstream &in, date &d);
      int getmonth()
      {
    return month;
	  }
	  int getyear()
	  {
	  	return year;
	  }
	  int getday()const
	  {
	  	return day;
	  }
	 void setdate(int a,int b,int c)
	 {
	 	day=a;
	 	month=b;
	 	year=c;
      }	
};
 ofstream & operator <<(ofstream &in,const date &d)
 {
 	in<< d.day<<" "<<d.month<<" "<<d.year<<endl;
 	return in;
 }
ifstream & operator >>(ifstream& in, date& d)
{
	
	in>>d.day;
	in>>d.month;
	in>>d.year;
	return in;
}
class person
{
	protected:
	string name,adress;
	int age;
	date d;
	public:
		void inputdata()
		{
		      cout<<"\n Enter  name ";
				cin>>name;
				cout<<"\n Enter adress ";
				cin>>adress;
				cout<<"\n Enter  age ";
				cin>>age;
				cout<<"\n Enter Date of Birth ";
				cin>>d;		
		}
		string getname()
		{
			return name;
		}
	virtual void writedata()=0;
	virtual void readdata()=0;
	virtual void searchdata()=0;
	virtual void updatedata()=0;
	virtual void deletedata()=0;
};
class patient:public person
{
	protected:
	string pno,symptoms,medicine;
	public:
	patient():person()
	{
		medicine="Nill";
	}
	string getpno()
	{
		return pno;
	}
	void setpinno(string p)
	{
		pno=p;
	}
	virtual void precribemedicine()=0;
	void setmedicine(string p)
	{
		medicine=p;
	}
	string getmedicine()
	{
		return medicine;
	}
};
class Indoor:public patient
{
	string wardno,bedno;
	date doa,dod;
	public:
	Indoor():patient()
	{
		dod.setdate(0,0,0);
	}
	void dset()
	{
		dod.setdate(1,1,1);
	}
	void writedata()
	{
		Indoor I;
		cin>>I;
		ofstream a("indoor.txt",ios::app);
		write(I,a);
		a.close();
	}
	void readdata()
	{
		cout<<"PinNo\tname\t  DOB    \tage\tadress\tSymptoms\twardno\tbedno\tDOA \tmedicine"<<endl;
		Indoor I;
		ifstream a("indoor.txt",ios::in);
		read(I,a);
		a.close();
		
	}
		void searchdata()
	{
		
		string p;
		Indoor I;
		lab:
		system("cls");
		cout<<"\n Enter pin no to search data::";
		cin>>p;
		ifstream a("indoor.txt",ios::in);
		if(pinno(I,a,p))
		{
			cout<<"\n Not found ";
			getch();
			goto lab;
		}
		else
		{
			a.close();
			ifstream c("indoor.txt",ios::in);
			readspecific(I,c,p);
			c.close();
		}
	}
		void searchdischarge()
	{
		
		string p;
		Indoor I;
		I.dset();
		lab:
		system("cls");
		cout<<"\n Enter pin no to search data";
		cin>>p;
		ifstream a("discharge.txt",ios::in);
		if(pinno(I,a,p))
		{
			cout<<"\n Not found ";
			getch();
			goto lab;
		}
		else
		{
			a.close();
			ifstream c("discharge.txt",ios::in);
			readspecific(I,c,p);
			c.close();
		}
	}
	void updateischarge()
	{
	Indoor I;
	string p;
	lab:
		system("cls");
	cout<<"\n Enter pinno of patient to update ::";
	cin>>p;
	ifstream a("discharge.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))
	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("discharge.txt",ios::in);
	update(I,b,c,p);
	c.close();
	}
	b.close();
	remove("discharge.txt");
	rename("new.txt","discharge.txt");
	}
	void updatedata()
	{
	Indoor I;
	string p;
	lab:
		system("cls");
	cout<<"\n Enter pinno of patient to update ::";
	cin>>p;
	ifstream a("indoor.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))
	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("indoor.txt",ios::in);
	update(I,b,c,p);
	c.close();
	}
	b.close();
	remove("indoor.txt");
	rename("new.txt","indoor.txt");
	}
	void readdischarge()
	{
	Indoor I;
	cout<<"PinNo\tname  \tDOB     \tage\tadress\tSymptoms\t \tDOA\tmedicine\t  DOD"<<endl;
		ifstream a("discharge.txt",ios::in);
		read(I,a);
		a.close();	
	}
void writedischarge()
{
	string pin;
	Indoor I;
	lab:
	system("cls");
	cout<<"\n Enter pno number of patient to discharge::";
	cin>>pin;
	ifstream d("indoor.txt",ios::in);
	ofstream b("new.txt",ios::out);
	ofstream c("discharge.txt",ios::app);
	if(pinno(I,d,pin))
	{
		cout<<"\n invalid input ";
		getch();
		goto lab;
	}
	else
	{
	d.close();	
	ifstream a("indoor.txt",ios::in);
	a>>I;
	while(!a.eof())
	{
	if(pin!=I.pno)
		{
				b<<I;
		}
		else
		{
			cout<<I;
			cout<<"\n Enter patient date of discharge::";
			cin>>dod;
		I.setdischarge(dod);
		c<<I;	
		}
		a>>I;
	}
	a.close();
	b.close();
	c.close();
	remove("indoor.txt");
	rename("new.txt","indoor.txt");}}
	void setdischarge(const date &d)
	{
	dod=d;	
	}
	void precribemedicine()
	{
	Indoor I;
	string p;
	lab:
	system("cls");
	cout<<"\n Enter pinno of patient to precribe Medicine ::";
	cin>>p;
	ifstream a("indoor.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("indoor.txt",ios::in);
	updatee(I,b,c,p);
	c.close();
	}
	b.close();
	remove("indoor.txt");
	rename("new.txt","indoor.txt");
	}
	void deletedata()
	{
	Indoor I;
	string p;
	lab:
	system("cls");
	cout<<"\n Enter pinno of patient to delete ::";
	cin>>p;
	ifstream a("indoor.txt",ios::in);
	ofstream b("new.txt",ios::out);
	if (pinno(I,a,p))
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("indoor.txt",ios::in);
	deleterecord(I,c,b,p);
	c.close();
	}
	b.close();
	remove("indoor.txt");
	rename("new.txt","indoor.txt");
	}
		void deletedischarge()
	{
	
	Indoor I;
	string p;
	lab:
	system("cls");
	cout<<"\n Enter pinno of patient to delete ::";
	cin>>p;
	ifstream a("discharge.txt",ios::in);
	ofstream b("new.txt",ios::out);
	if (pinno(I,a,p))
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("discharge.txt",ios::in);
	deleterecord(I,c,b,p);
	c.close();
	}
	b.close();
	remove("discharge.txt");
	rename("new.txt","discharge.txt");
	}
	int checkdate ()const
	{
		if(dod.getday()==0)
		return 1;
		else
		return 0;
	}
	friend ostream & operator <<(ostream &in,const Indoor &d)
		{

if (d.checkdate())
{
cout<<"PinNo\tname  \tDOB    \tage\tadress\tSymptoms\twardno\tbedno\tDOA   \tmedicine"<<endl;
in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<"\t "<<d.symptoms<<"\t"<<d.wardno<<"\t"<<d.bedno<<"\t"<<d.doa<<"\t"<<d.medicine<<endl;	
}
else
{
cout<<"PinNo\tname \tDOB    \tage\tadress\tSymptoms \tDOA   \tmedicine\t   DOD"<<endl;
in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<"\t "<<d.symptoms<<"\t"<<d.doa<<"\t"<<d.medicine<<"\t"<<d.dod<<endl;
}
		return in;
	}
	
	friend istream & operator >>(istream &in, Indoor &d)
		{
		d.inputdata();
	  cout<<"Enter pin no of patient"<<endl;
	  in>>d.pno;
	   cout<<"Enter Symptoms "<<endl;
	  in>>d.symptoms;
	  cout<<"\n Enter patient date of admission ::";
	  cin>>d.doa;
	  cout<<"\n Enter patient Bed No ::";
	  cin>>d.bedno;
	  cout<<"\n Enter patient Wardno ::";
	  cin>>d.wardno;
		return in;
		}
		friend ofstream & operator <<(ofstream &a,const Indoor &d);
		friend ifstream & operator >>(ifstream &in, Indoor &d);	
};
 ofstream & operator <<(ofstream &in,const Indoor &d)
 {
if (d.checkdate())
{

in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<"\t "<<d.symptoms<<"\t"<<d.wardno<<"\t"<<d.bedno<<"\t"<<d.doa<<"\t"<<d.medicine<<endl;	
}
else
{

in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<"\t "<<d.symptoms<<"\t"<<d.doa<<"\t"<<d.medicine<<"\t"<<d.dod<<endl;
}
 	return in;
 }
ifstream & operator >>(ifstream &in, Indoor &d)
{	
if (d.dod.getday()!=0)
    {
     in>>d.pno;
     in>>d.name;
     in>>d.d;
     in>>d.age;
     in>>d.adress;
     in>>d.symptoms;
     in>>d.doa;
     in>>d.medicine;
     in>>d.dod;
	}
	else
	{
	 in>>d.pno;
     in>>d.name;
     in>>d.d;
     in>>d.age;
     in>>d.adress;
     in>>d.symptoms;
     in>>d.wardno;
     in>>d.bedno;
     in>>d.doa;
     in>>d.medicine;
	}
	return in;
}
class outdoor:public patient
{
	public:
	void writedata()
	{
		outdoor I;
		cin>>I;
		ofstream a("outdoor.txt",ios::app);
		write(I,a);
		a.close();
	}
	void readdata()
	{
	cout<<"PinNo\tname\tDOB   \tage\tadress\tSymptoms\tmedicine"<<endl;
		outdoor I;
		ifstream a("outdoor.txt",ios::in);
		read(I,a);
		a.close();
	}
	void precribemedicine()
	{
	outdoor I;
	string p;
	lab:
		system("cls");
	cout<<"\n Enter pinno of patient to precribe Medicine ::";
	cin>>p;
	ifstream a("outdoor.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("outdoor.txt",ios::in);
	updatee(I,b,c,p);
	c.close();
	}
	b.close();
	remove("outdoor.txt");
	rename("new.txt","outdoor.txt");
	}
		void searchdata()
	{
		string p;
		outdoor I;
		lab:
		system("cls");
		cout<<"\n Enter pin no to search data";
		cin>>p;
		ifstream a("outdoor.txt",ios::in);
		if(pinno(I,a,p))
		{
			cout<<"\n Not found ";
			getch();
			goto lab;
		}
		else
		{
			a.close();
			ifstream c("outdoor.txt",ios::in);
			readspecific(I,c,p);
			c.close();
		}
	}
	void updatedata()
	{
	outdoor I;
	string p;
	lab:
	system("cls");
	cout<<"\n Enter pinno of patient to update ::";
	cin>>p;
	ifstream a("outdoor.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))
	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("outdoor.txt",ios::in);
	update(I,b,c,p);
	c.close();
	}
	b.close();
	remove("outdoor.txt");
	rename("new.txt","outdoor.txt");
	}
	void deletedata()
	{
	outdoor I;
	string p;
	lab:
		system("cls");
	cout<<"\n Enter pinno of patient to delete ::";
	cin>>p;
	ifstream a("outdoor.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))
	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("outdoor.txt",ios::in);
	deleterecord(I,c,b,p);
	c.close();
	}
	b.close();
	remove("outdoor.txt");
	rename("new.txt","outdoor.txt");
	}
	friend ostream & operator <<(ostream &in,const outdoor &d)
		{
	cout<<"PinNo  \tDOB    \tage\tadress\tSymptoms\tmedicine"<<endl;
in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<"\t "<<d.symptoms<<"\t"<<d.medicine<<endl;
		return in;
		}
	
	friend istream & operator >>(istream &in, outdoor &d)
		{
		d.inputdata();
	  cout<<"Enter pin no of patient"<<endl;
	  in>>d.pno;
	   cout<<"Enter Symptoms "<<endl;
	  in>>d.symptoms;
		return in;
		}
		friend ofstream & operator <<(ofstream &a,const outdoor &d);
		friend ifstream & operator >>(ifstream &in, outdoor &d);	
};
 ofstream & operator <<(ofstream &in,const outdoor &d)
 {
in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<"\t "<<d.symptoms<<"\t"<<d.medicine<<endl;
 	return in;
 }
ifstream & operator >>(ifstream &in, outdoor &d)
{	
//cout<<"PinNo\tname\tDateofbirth\tage\tadress\tSymptoms\twardno\tbedno\tdoa"<<endl;
     in>>d.pno;
     in>>d.name;
     in>>d.d;
     in>>d.age;
     in>>d.adress;
     in>>d.symptoms;
     in>>d.medicine;
	return in;
}
class receptionist:public person
{
string pno;
string grade;

	public:
	
		
		string getpno()
		{
			return pno;
	}
	
void writedata()
{
	receptionist R;
	cin>>R;
	ofstream a("receptionist.txt",ios::app);
	write(R,a);
	a.close();
}
	
	void readdata()
    {
    cout<<"\npinno\tname\tDOB \tadress\tage\tgrade"<<endl;
    	receptionist R;
    	ifstream r("receptionist.txt",ios::in);
    	read(R,r);
    	r.close();	
	}
	void searchdata()
	{
		string p;
		receptionist I;
		lab:
			system("cls");
		cout<<"\n Enter pin no to search data";
		cin>>p;
		ifstream a("receptionist.txt",ios::in);
		if(pinno(I,a,p))
		{
			cout<<p;
			cout<<"\n Not found ";
			getch();
			goto lab;
		}
		else
		{
			a.close();
			ifstream c("receptionist.txt",ios::in);
			readspecific(I,c,p);
			c.close();
		}
	}
	friend istream & operator >>(istream &in, receptionist &d)
		{
		d.inputdata();
	  cout<<"\n Enter pin no of Receptionist"<<endl;
	  in>>d.pno;
	   cout<<"\n Enter Grade "<<endl;
	  in>>d.grade;
	    return in;
		}
		friend ostream & operator <<(ostream &in,const receptionist &b)
		{
		cout<<"\tpinno\tname\tDOB \tadress\tage\tgrade"<<endl;
		in<<b.pno<<"\t"<<b.name<<"\t"<<b.d<<"\t"<<b.adress<<"\t"<<b.age<<"\t"<<b.grade<<endl;
		return in;
		}
	int login()
	{
	receptionist  A;
	lab:
    system("cls");
	//cin.ignore();
	cout<<"\n Enter your name ::";
	cin>>name;
	cout<<"\n Enter your Pin No :: ";
	cin>>pno;
	ifstream a("receptionist.txt",ios::in);
	if(checklogin(A,a,name,pno))
	{
		cout<<"\n invalid input Try again ::";
		Sleep(1000);
		goto lab;
	}
	else
	{
		int flag;
		flag=logo();
		return flag;
	}}
int logo()
{
  lb:
 system("cls");
  int c;
cout<<"\n Enter\n:: 1 to deal with Indoor Patient::\n:: 2 to deal with Outdoor patient::\n:: \n:: 3 to exist ::";
cout<<"\n Enter your choice ::";
 cin>>c;
 switch(c)
{
      case 1:
    {
	if(indoordata())
	goto lb;
     }
	case 2:
	{
  if(outdoordata())
  goto lb;
    }
  
	case 3:
	{
	return 1;
	}
 default:
	{
		cout<<"\n invalid input ::";
		getch();
		goto lb;
	}
}}
int discharged()
   {
   	Indoor * I;
  I=new Indoor();
   	  int c;
  system("cls");
	l:
cout<<"\n What you want to do:: \n  1 to Discharge patient::\n 2 to read data of all pstients::\n 3 to update data of an patient::\n 4 to delete data of an patient::\n 5 to search patient  \n 6 to return privious::";
cout<<"\n Enter your choice :: ";
	    cin>>c;
     switch(c)
     {
     	case 1:
     {
     	system("cls");
	  I->writedischarge();
	  getch();
	  discharged();
     	break;
     }
     case 2:
     	{
     	system("cls");
     	I->readdischarge();
     	getch();
     	discharged();
     	break;
		 }
		case 3:
		{
			system("cls");
		I->updateischarge();
		getch();
		discharged();
			break;
		}
		case 4:
		{
			system("cls");
			I->deletedischarge();
			getch();
			discharged();
			break;
		}
		case 5:
		{
			system ("cls");
			I->dset();
		I->searchdischarge();
			getch();
		discharged();
			break;
		}
		case 6:
		{
			return 1;
		}
		default:
		{
			cout<<"\n invalid input ::";
			goto l;
	    }
	 }}
	int indoordata()
   {
   	Indoor * I;
  I=new Indoor();
   	  int c;
	l:
	 system("cls");
cout<<"\n What you want to do:: \n  Enter 1 for Admitted patient::\n 2 for Discharged patient ::\n 3 to Return previous::";
cout<<"\n Enter your choice :: ";
	    cin>>c;
     switch(c)
     {
     	case 1:
     {
     	system("cls");
	  if(admitted())
	goto l;
     	break;
     }
     case 2:
     	{
     	system("cls");
     	if(discharged())
     	goto l;
     	break;
		 }
		case 3:
		{
			return 1;
		}
		default:
		{
			cout<<"\n invalid input ::";
			goto l;
	    }
	 }}
	 int admitted()
   {
   	Indoor * I;
  I=new Indoor();
   	  int c;
  system("cls");
	l:
cout<<"\n What you want to do:: \n  1 to enter data of new patient::\n 2 to read data of all patients::\n 3 to update data of an patient::\n 4 to delete data of an patient::\n 5 to search patient  \n 6 to return privious::";
cout<<"\n Enter your choice :: ";
	    cin>>c;
     switch(c)
     {
     	case 1:
     {
     	system("cls");
	  I->writedata();
	  getch();
	  admitted();
     	break;
     }
     case 2:
     	{
     	system("cls");
     	I->readdata();
     	getch();
     	indoordata();
     	break;
		 }
		case 3:
		{
			system("cls");
		I->updatedata();
		getch();
		indoordata();
			break;
		}
		case 4:
		{
			system("cls");
			I->deletedata();
			getch();
			indoordata();
			break;
		}
		case 5:
		{
			system ("cls");
		I->	searchdata();
			getch();
		indoordata();
			break;
		}
		case 6:
		{
			return 1;
		}
		default:
		{
			cout<<"\n invalid input ::";
			goto l;
	    }
	 }}
int outdoordata()
   {
   	outdoor *d;
   	d = new outdoor();
   	
   	  int c;
	l:
	system("cls");
cout<<"\n What you want to do:: \n  1 to enter data of new patient::\n 2 to read data of all patients::\n 3 to update data of an patient::\n 4 to delete data of an patient ::\n 5 to search patient :: \n 6 to return privious ::";
cout<<"\n Enter your choice :: ";
	    cin>>c;
     switch(c)
     {
     	case 1:
     {
     	system("cls");
	  d->writedata();
	  getch();
	  outdoordata();
     	break;
     }
     case 2:
     	{
     	system("cls");
     	d->readdata();
     	getch();
     	outdoordata();
     	break;
		 }
		case 3:
		{
			system("cls");
		d->updatedata();
		getch();
		outdoordata();
			break;
		}
		case 4:
		{
			system("cls");
			d->deletedata();
			getch();
			outdoordata();
			break;
		}
		case 5:
		{
			system ("cls");
			d->searchdata();
			getch();
			outdoordata();
			break;
		}
		
		case 6:
		{
			return 1;
		}
		default:
		{
			cout<<"\n invalid input ::";
			getch();
			goto l;
	    }
	 }}
void updatedata()
{
	receptionist R;
	string p;
	lab:
		system("cls");
	cout<<"\n Enter pinno of receptionist to update ::";
	cin>>p;
	ifstream a("receptionist.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(R,a,p))
	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
		a.close();
	ifstream c("receptionist.txt",ios::in);
	update(R,b,c,p);
	c.close();
	}
	b.close();
	remove("receptionist.txt");
	rename("new.txt","receptionist.txt");
	}
	void setpinno(string a)
	{
		pno= a;
	}
	void deletedata()
	{
	receptionist w;
	string e;
	lab:
		system("cls");
	cout<<"\n Enter pinno of receptionist to delete ::";
	cin>>e;
	ifstream a("receptionist.txt",ios::in);
	ofstream b("new.txt",ios::out);
	if (pinno(w,a,e))
	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("receptionist.txt",ios::in);
	deleterecord(w,c,b,e);
	c.close();
	}
	b.close();
	remove("receptionist.txt");
	rename("new.txt","receptionist.txt");	
	}
	 	friend ofstream & operator <<(ofstream &in,const receptionist &a);
		friend ifstream & operator >>(ifstream &in, receptionist &s);	
};

 ofstream & operator <<(ofstream &in,const receptionist &a)
 {
 	in<<a.pno<<"\t"<<a.name<<"\t"<<a.d<<"\t"<<a.adress<<"\t"<<a.age<<"\t"<<a.grade<<endl;
 	return in;
 }
ifstream  & operator >>(ifstream &b, receptionist &s)
{
        b>>s.pno;
		b>>s.name;
		b>>s.d;
		b>>s.adress;
		b>>s.age;
		b>>s.grade;	
	return b;
}
class doctor:public person
{
	string pno,spz,exp;
	Indoor I;
	outdoor a;
	public:
		public:
	 string getpno()
	{
		return pno;
	}
	void setpinno(string p)
	{
		pno=p;
	}
	void writedata()
	{
		doctor I;
		cin>>I;
		ofstream a("doctor.txt",ios::app);
		write(I,a);
		a.close();
	}
	void readdata()
	{
		cout<<"PinNo\tName \tDOB \tAGE\tadress\tSPZ\tEXP"<<endl;
		doctor I;
		ifstream a("doctor.txt",ios::in);
		read(I,a);
		a.close();		
	}
	 void searchdata()
	{
		string p;
		doctor I;
		lab:
			system("cls");
		cout<<"\n Enter pin no to search data ::";
		cin>>p;
		ifstream a("doctor.txt",ios::in);
		if(pinno(I,a,p))
		{
			cout<<"\n Not found ";
			getch();
			goto lab;
		}
		else
		{
			a.close();
			ifstream c("doctor.txt",ios::in);
			readspecific(I,c,p);
			c.close();
		}
	}
	void updatedata()
	{
	doctor I;
	string p;
	lab:
	system("cls");
	cout<<"\n Enter pinno of Doctor to update ::";
	cin>>p;
	ifstream a("doctor.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("doctor.txt",ios::in);
	update(I,b,c,p);
	c.close();
	}
	b.close();
	remove("doctor.txt");
	rename("new.txt","doctor.txt");
	}
int login()
	{
	doctor  A;
	lab:
	system("cls");
	//cin.ignore();
	cout<<"\n Enter your name ::";
	cin>>name;
	cout<<"\n Enter your Pin No :: ";
	cin>>pno;
	ifstream a("doctor.txt",ios::in);
	if(checklogin(A,a,name,pno))
	{
		cout<<"\n invalid input Try again ::";
		Sleep(1000);
		goto lab;
	}
	else
	{
	if(logo())
	return 1;
	}	
	}
	int  logo()
{
  lb:
system("cls");
  int c;
cout<<"\n Enter\n:: 1 to deal with Indoor Patient::\n:: 2 to deal with Outdoor patient::\n:: \n:: 3 to exist ::";
cout<<" \n :: Enter your choice ::";
cin>>c;
//while(c!='3')
{
switch(c)
{
    case 1:
    {
    if(	indoordata())
    goto lb;
	}
    case 2:
    {
		if(outdoordata())
		goto lb;
    }  
    	case 3:
    	{
    		return 1;
		}
      default:
    {
    	cout<<"\n :: invalid input ::";
    	goto lb;
	}
}}}
int indoordata()
   {
   	  int c;
	l:
	system("cls");
cout<<"\n What you want to do:: \n  1 to precribe Medicine ::\n 2 to search patient Data:: \n 3 to return privious::";
cout<<"\n Enter your choice :: ";
	    cin>>c;
     switch(c)
     {
     	case 1:
     {
     	system("cls");
	  I.precribemedicine();
	  	  	  getch();
	  	  	  indoordata();
     	break;
     }
     case 2:
     	{
     	system("cls");
     	I.readdata();
     	getch();
     	indoordata();
     	break;
		 }
		case 3:
		{
			return 1;
		}
		
		default:
		{
			cout<<"\n invalid input ::";
			goto l;
	    }
	 }}
int outdoordata()
   {
   	  int c;
	l:
	system("cls");
cout<<"\n What you want to do:: \n  1 to precribe medicine::\n 2 to search patient::\n 3 to return previous::";
cout<<"\n Enter your choice :: ";
	    cin>>c;
     switch(c)
     {
     	case 1:
     {
     	system("cls");
	  a.precribemedicine();
	  getch();
	  outdoordata();
     	break;
     }
     case 2:
     	{
     	system("cls");
     	a.searchdata();
     	getch();
     	outdoordata();
     	break;
		 }
		case 3:
		{
			return 1;
		}
		
		default:
		{
			cout<<"\n invalid input ::";
			goto l;
	    }
	 }}
	void deletedata()
	{
	doctor I;
	string p;
	lab:
	system("cls");
	cout<<"\n Enter pinno of patient to delete ::";
	cin>>p;
	ifstream a("doctor.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))
	{
		cout<<"\n not found ";
		getch();
		goto lab;	
	}
   	else
	{
	a.close();
	ifstream c("doctor.txt",ios::in);
	deleterecord(I,c,b,p);
	c.close();
	}
	b.close();
	remove("doctor.txt");
	rename("new.txt","doctor.txt");
	}
	friend ostream & operator <<(ostream &in,const doctor &d)
		{
	cout<<"PinNo\tName\tDOB \tAGE\tadress\tSPZ\tEXP"<<endl;
in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<"\t"<<d.spz<<"\t"<<d.exp<<endl;
		return in;
		}
	friend istream & operator >>(istream &in, doctor &d)
		{
	d.inputdata();
	  cout<<"\nEnter pin no of Doctor"<<endl;
	  in>>d.pno;
	   cout<<"Enter Speciliazation "<<endl;
	  in>>d.spz;
	  cout<<" Enter Experience "<<endl;
	  cin>>d.exp;
		return in;
		}
		friend ofstream & operator <<(ofstream &a,const doctor &d);
		friend ifstream & operator >>(ifstream &in, doctor &d);	
};
 ofstream & operator <<(ofstream &in,const doctor &d)
 {
in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<"\t"<<d.spz<<"\t"<<d.exp<<endl;
 	return in;
 }
ifstream & operator >>(ifstream &in, doctor &d)
{	

     in>>d.pno;
     in>>d.name;
     in>>d.d;
     in>>d.age;
     in>>d.adress;
     in>>d.spz;
     in>>d.exp;
	return in;
}
class admin:public person
{
	string pno;
	receptionist *ptr;
	doctor *ptrr;
		public:
	 admin():person()
	 {
	 	ptr=new receptionist();
	 	ptrr=new doctor();
	 }
	 string getpno()
	{
		return pno;
	}
	void login()
	{
	admin  A;
	lab:
    system("cls");
	//cin.ignore();
	cout<<"\n Enter your name ::";
	cin>>name;
	cout<<"\n Enter your Pin No :: ";
	cin>>pno;
	ifstream a("admin.txt",ios::in);
	if(checklogin(A,a,name,pno))
	{
		cout<<"\n invalid input Try again ::";
		Sleep(1000);
		goto lab;
	}
    else
    {
    	logoo();
	}
	}
	void show()
    {
	int ch;
	lb:
	system("cls");
    cout<<"\n Enter\n:: 1 to login Admin::\n:: 2 to login Receptionist::\n:: 3 to login Doctor::\n:: 4 to exist ::";
     cin>>ch;
    while(ch!='4')
  {
    switch(ch)
     {
      case 1:
   login();
   case 2:
   	{
	   if(ptr->login())
	   show();
      }
   	case 3:
   		{
	   if(ptrr->login())
	   show();
      }
    case 4:
    	{
    		exit(0);
		}
	   
   default:
   	cout<<"\n Invalid input::";
   	getch();
   	goto lb;	
	}}}	
   void admindata()
   {
   	  int c;
   	admin a;
	   l:
	 system("cls");
cout<<"\n What you want to do:: \n  1 to enter data of new Admin::\n 2 to read data of all Admins::\n 3 to update data of an Admin::\n 4 to delete data of an Admin::\n 5 to search admin \n 6 to return previous";
cout<<"\n Enter your choice :: ";
	    cin>>c;
     switch(c)
     {
     	case 1:
     {
    system("cls");
	  a.writedata();
	  getch();
	  admindata();
     	break;
     }
     case 2:
     	{
     	system("cls");
     a.	readdata();
     	getch();
     	admindata();
     	break;
		 }
		case 3:
		{
			system("cls");
			a.updatedata();
			getch();
			admindata();
			break;
		}
		case 4:
		{
			system("cls");
		a.	deletedata();
			getch();
			admindata();
			break;
		}
		case 5:
		{
			system("cls");
		a.	searchdata();
			getch();
			admindata();
			break;
		}
		case 6:
		{
			system("cls");
			logoo();
			getch();
		}
		default:
		{
			cout<<"\n invalid input ::";
			getch();
			goto l;
	    }
	 }}
	void receptionis()
{
	int c;
	l:
   system("cls");
cout<<"\n What you want to do:: \n  1 to enter data of new Receptionist::\n 2 to read data of all Recptionist::\n 3 to update data of an Receptionist::\n 4 to delete data of an Receptionist::\n 5 to search Receptionist ::\n 6 to Return previous::";
cout<<"\n Enter your choice :: ";
	cin>>c;
     switch(c)
     {
     	case 1:
     {
    system("cls");
	 ptr-> writedata();
	 getch();
	 receptionis();
     	break;
     }
     case 2:
     {
	system("cls");
     ptr->readdata();
     getch();
     receptionis();
     	break;
		 }
		case 3:
		{
	   system("cls");
		ptr->updatedata();
		getch();
		receptionis();
			break;
		}
		case 4:
		{
		system("cls");
		ptr->deletedata();
		getch();
		receptionis();
			break;
		}
		case 5:
		{
			system("cls");
			ptr->searchdata();
			getch();
			receptionis();
			break;
		}
		case 6:
		{
			logoo();
		}
		default:
		{
			cout<<"\n invalid input ::";
			getch();
			goto l;
	    }
	 }}
void doctordata()
{
	int c;
	l:
	 system("cls");
cout<<"\n What you want to do:: \n  1 to enter data of new Doctor::\n 2 to read data of all Doctors::\n 3 to update data of an Doctor::\n 4 to delete data of an Doctor::\n 5 to search Doctor::\n 6 to Return previous::";
cout<<"\n Enter your choice :: ";
	cin>>c;
     switch(c)
     {
     	case 1:
     {
    	system("cls");
	 ptrr-> writedata();
	   getch();
	   doctordata();
     	break;
     }
     case 2:
     	{
     	system("cls");
     ptrr->readdata();
      getch();
       doctordata();
     	break;
		 }
		case 3:
		{
		system("cls");
		ptrr->updatedata();
		 getch();
		  doctordata();
			break;
		}
		case 4:
		{
		system("cls");
		ptrr->deletedata();
		 getch();
		  doctordata();
			break;
		}
		case 5:
		{
			system("cls");
			ptrr->searchdata();
			 getch();
			  doctordata();
			break;
		}
		case 6:
		{
			logoo();
		}
		default:
		{
			cout<<"\n invalid input ::";
			 getch();
			goto l;
	    }
	 }}

	void setpinno(string p)
	{
		pno=p;
	}
	void writedata()
	{
		admin I;
		cin>>I;
		ofstream a("admin.txt",ios::app);
		write(I,a);
		a.close();
	}
	void readdata()
	{
		cout<<"PinNo\tname\tDateofbirth\tage\tadress"<<endl;
		admin I;
		ifstream a("admin.txt",ios::in);
		read(I,a);
		a.close();
		
	}
		void searchdata(){
		string p;
		admin I;
		lab:
		system("cls");
		cout<<"\n Enter pin no to search data";
		cin>>p;
		ifstream a("admin.txt",ios::in);
		if(pinno(I,a,p))
		{
			cout<<"\n Not found ";
			getch();
			goto lab;
		}
		else
		{
			a.close();
			ifstream c("admin.txt",ios::in);
			cout<<"PinNo\tname\tDateofbirth\tage\tadress"<<endl;
			readspecific(I,c,p);
			c.close();
		}
	}
	void updatedata()
	{
	admin I;
	string p;
	lab:
	system("cls");
	cout<<"\n Enter pinno of Admin to update ::";
	cin>>p;
	ifstream a("admin.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))
	
	{
		cout<<"\n not found ";
		getch();
		goto lab;
		
	}
   	else
	{
	a.close();
	ifstream c("admin.txt",ios::in);
	cout<<"PinNo\tname\tDateofbirth\tage\tadress"<<endl;
	update(I,b,c,p);
	c.close();
	}
	b.close();
	remove("admin.txt");
	rename("new.txt","admin.txt");
	}
void logoo()
{
  lb:
system("cls");
  int c;
cout<<"\n Enter\n:: 1 to deal with admin data::\n:: 2 to deal with Receptionist data::\n:: 3 to deal with Doctor data::\n:: 4 to return to main  ::";
cout<<" \n :: Enter your choice ::";
cin>>c;
switch(c)
{
    case 1:
    	admindata();
    case 2:
    	receptionis();
    	case 3:
     doctordata();
     case 4:
     {
    show();
	  }
      default:
    {
    	cout<<"\n :: invalid input ::";
    	goto lb;
	}
}}
	void deletedata()
	{
	admin I;
	string p;
	lab:
	system("cls");
	cout<<"\n Enter pinno of Admin to delete ::";
	cin>>p;
	ifstream a("admin.txt",ios::in);
	ofstream b("new.txt",ios::app);
	if (pinno(I,a,p))
	{
		cout<<"\n not found ";
		getch();
		goto lab;	
	}
   	else
	{
	a.close();
	ifstream c("admin.txt",ios::in);
	cout<<"PinNo\tname\tDateofbirth\tage\tadress"<<endl;
	deleterecord(I,c,b,p);
	c.close();
	b.close();
	remove("admin.txt");
	rename("new.txt","admin.txt");
	}
	
	}
	friend ostream & operator <<(ostream &in,const admin &d)
		{
in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<endl;
		return in;
		}
	
	friend istream & operator >>(istream &in, admin &d)
		{
	d.inputdata();
	  cout<<"\nEnter pin no of Admin"<<endl;
	  in>>d.pno;
	return in;
		}
		friend ofstream & operator <<(ofstream &a,const admin &d);
		friend ifstream & operator >>(ifstream &in, admin &d);	
};
 ofstream & operator <<(ofstream &in,const admin &d)
 {
in<<d.pno<<"\t"<<d.name<<"\t"<<d.d<<"\t"<<d.age<<"\t"<<d.adress<<endl;
 	return in;
 };
ifstream & operator >>(ifstream &in, admin &d)
{	
     in>>d.pno;
     in>>d.name;
     in>>d.d;
     in>>d.age;
     in>>d.adress;
	return in;	
}

int main()
{
	admin aa;
	system("color F0");
	logo();
	aa.show();	     
}
