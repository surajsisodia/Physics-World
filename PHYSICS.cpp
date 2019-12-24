#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream.h>
void practice();
void fundamental();
void conservation();
void formulas();
void scientist();
void convert();
void record();
void exitl();

class book{       char name[20];
		  char author[20];
		  float price;
	     public:
		  void getrecord()
		  {  cout<<"\nEnter the detail";
		     cout<<"\nEnter the name of book : ";
		     gets(name);
		     cout<<"Enter the name of author : ";
		     gets(author);
		     cout<<"Enter the cost of the books : ";
		     cin>>price;
		   }

		  void showrecord()
		  { cout<<". "<<name<<" by "<<author;
		    cout<<"\n\t\t\t  Price : "<<price;
		  }

	      };
void main()
{ clrscr();
  char ch1;
  int ch2;
  cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t     Suraj Sisodia & Yashpal";
  cout<<"\n\n\t\t\t\t    Presents";
  getch();
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t      ---------------------";
  cout<<"\n\t\t\t      ||  Physics World  ||";
  cout<<"\n\t\t\t      ---------------------";
  getch();
  clrscr();
  cout<<"\n\n\n\t\t     Welcome to the world of Physics.\n";
  for(int i=0;i<80;i++)
  {   cout<<"-";  }
  cout<<" Here you will find all your answer related to physics.";
  cout<<"\n\n Interested in physics or not??(Y/N): ";
  enterch1:
  cin>>ch1;
  for(i=0;i<80;i++)
  {   cout<<"-";  }
  if(ch1=='n'||ch1=='N')
  exitl();
  else if(ch1=='y'||ch1=='Y')
  cout<<"\n Ok ... Let's begin:";
  else
 { cout<<"!! Wrong choice.... Enter again: ";
  goto enterch1;
  }
  getch();
  do{   clrscr();
  cout<<"\n\n\n\n\t\t\n==> What do you want to do today:";
  cout<<"\n\t\t\t 1. All the Conservation Laws.";
  cout<<"\n\t\t\t 2. Formula Game.";
  cout<<"\n\t\t\t 3. Our Great Physicists and Mathematicians.";
  cout<<"\n\t\t\t 4. Do some Practice Questions.";
  cout<<"\n\t\t\t 5. Unit Convertor.";
  cout<<"\n\t\t\t 6. Physics Book Record.";
  cout<<"\n\t\t\t 7. Exit";
  cout<<"\n\n Now enter your choice : ";
  cin>>ch2;
  switch(ch2)
  { case 1: conservation();
	    break;
    case 2: formulas();
	    break;
    case 3: scientist();
	    break;
    case 4: practice();
	    break;
    case 5: convert();
	    break;
    case 6: record();
	    break;
    case 7: exitl();
  }

   getch();
  }while(ch2!='8');
   getch();
}

void exitl()
{  clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\t\t\t Thanks for using our program";
   cout<<"\n\n\t\t\t       Hope you enjoyed";
   getch();
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\t\t\t         Remember!!!";
   cout<<"\n\n\t\t\t     Physics is NOT Hard";
   getch();
   exit(0);
}

void conservation()
{ clrscr();
  cout<<"There are mainly four Conservation Laws in physics.";
  cout<<"\n\n1. Law of Conservation of Energy (or Conservation of mass and energy)";
  cout<<"\n     -->This law states that Energy is niether be created";
  cout<<"\n        nor be destroyed. It can be converted into one";
  cout<<"\n        form to another. Originally Law of Conservation ";
  cout<<"\n        of mass exist but due to nuclear reaction it is";
  cout<<"\n        found that energy-mass are interconvertible.";
  getch();
  cout<<"\n\n2. Law of Conservation of charge.";
  cout<<"\n     -->This law states that charge is neither created";
  cout<<"\n        nor be destroyed. But it can be transfered from";
  cout<<"\n        one body to another body.";
  getch();
  cout<<"\n\n3. Law of Conservation of momentum";
  cout<<"\n     -->This law states that net linear momentum of a system";
  cout<<"\n        will remain conserve until or unless any net external";
  cout<<"\n        force is not applied to the system.";
  getch();
  cout<<"\n\n4. Law of Conservation of angular momentum";
  cout<<"\n     -->This law states that net angular momentum of a system";
  cout<<"\n        will remain conserve until or unless any net external";
  cout<<"\n        torque is applied on a body.";

}


void formulas()
{ clrscr();
  int score=0;
  char a1,ch;
  cout<<"\n\n\t\t\t Here is the Formula Game ";
  cout<<"\n\t\t\t * You have to just fill in the blanks\n";
  cout<<"\t\t\t   with correct variable.";
  cout<<"\n\t\t\t   OK !! Lets begin.";
  getch();
  clrscr();
  cout<<"\n\t\t1. v = _ + at   ( first equation of motion)"<<endl;
  cout<<"\t\tAns. ";
  cin>>a1;
  if(a1=='u')
  {   cout<<"\n\t\tYour answer is correct.";
      score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  cout<<"\n\t\tMove on to next question (y/n)?";
  cin>>ch;
  if(ch=='n'||ch=='N')
  goto last;
  cout<<"\n\t\t2.Gravitational Potential Energy = m_h";
  cout<<"\n\t\tAns. ";
  cin>>a1;
  if(a1=='g')
  {    cout<<"\n\t\tYour answer is correct.";
       score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  cout<<"\n\t\tMove on to next question (y/n)?";
  cin>>ch;
  if(ch=='n'||ch=='N')
  goto last;
  cout<<"\n\t\t3. F=_a";
  cout<<"\n\t\tAns. ";
  cin>>a1;
  if(a1=='m')
  {    cout<<"\n\t\tYour answer is correct.";
       score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  cout<<"\n\t\tMove on to next question (y/n)?";
  cin>>ch;
  if(ch=='n'||ch=='N')
  goto last;
  cout<<"\n\t\t4. PV = n_T   (Ideal gas equation)";
  cout<<"\n\t\tAns. ";
  cin>>a1;
  if(a1=='R')
  {    cout<<"\n\t\tYour answer is correct.";
       score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  cout<<"\n\t\tMove on to next question (y/n)?";
  cin>>ch;
  if(ch=='n'||ch=='N')
  goto last;
  cout<<"\n\t\t5. Q = _ + W  (First Law of Thermodynamics)";
  cout<<"\n\t\tAns. ";
  cin>>a1;
  if(a1=='U')
  {    cout<<"\n\t\tYour answer is correct.";
       score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  cout<<"\n\t\tMove on to next question (y/n)?";
  cin>>ch;
  if(ch=='n'||ch=='N')
  goto last;
  cout<<"\n\t\t6. F = _Bl  (Force on current wire in magnetic field)";
  cout<<"\n\t\tAns. ";
  cin>>a1;
  if(a1=='i')
  {    cout<<"\n\t\tYour answer is correct.";
       score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  cout<<"\n\t\tMove on to next question (y/n)?";
  cin>>ch;
  if(ch=='n'||ch=='N')
  goto last;
  cout<<"\n\t\t7. E = _v   (Energy of photon)";
  cout<<"\n\t\tAns. ";
  cin>>a1;
  if(a1=='h')
  {    cout<<"\n\t\tYour answer is correct.";
       score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  cout<<"\n\t\tMove on to next question (y/n)?";
  cin>>ch;
  if(ch=='n'||ch=='N')
  goto last;
  cout<<"\n\t\t8. R = (m_)/(qB)  (Radius of circle in magnetic field)";
  cout<<"\n\t\tAns. ";
  cin>>a1;
  if(a1=='v')
  {    cout<<"\n\t\tYour answer is correct.";
       score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  cout<<"\n\t\tMove on to next question (y/n)?";
  cin>>ch;
  if(ch=='n'||ch=='N')
  goto last;
  cout<<"\n\t\t9. n(_)*n(h) = n(i)*n(i)  (Electron-Hole Relation)";
  cout<<"\n\t\tAns. ";
  cin>>a1;
  if(a1=='g')
  {    cout<<"\n\t\tYour answer is correct.";
       score=score+4;
  }
  else
  {   cout<<"\n\t\tOpps!! Your answer is wrong.";
      score=score-1;
  }
  goto last;

  last:
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\t\t Your Score is : "<<score;
  getch();
}


void scientist()
{int ch;
  clrscr();
  cout<<"Choose your Scientist:";
  cout<<endl<<"\t\t1.Albert Einstein";
  cout<<endl<<"\t\t2.Issac Newton";
  cout<<endl<<"\t\t3.Archimedes";
  cout<<endl<<"\t\t4.Nicholas Tesla";
  cout<<endl<<"\t\t5.Emil Lenz";
  cout<<endl<<"\t\t6.Galileo Galilei";
  cout<<endl<<"\t\t7.Andre-Marie Ampere";
  cout<<endl<<"\t\t8.James Clerk Maxwell";
  cout<<endl<<"\t\t9.Michael Faraday";
  cout<<endl<<"\t\t10.Daniel Bernoulli";
  cout<<endl<<"Enter your choice:";
  cin>>ch;
  clrscr();
  switch(ch)
  { case 1: cout<<"\n\t\t\t           Albert Einstien\n";
	    cout<<"\t\t\t --------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |    14 March 1879    |\n";
	    cout<<"\t\t\t|    Country     |        Germany      |\n";
	    cout<<"\t\t\t|     Died       |     18 April 1955   |\n";
	    cout<<"\t\t\t|   Education    |     Swiss Federal   |\n";
	    cout<<"\t\t\t|                |   Polytechnic (BA)  |\n";
	    cout<<"\t\t\t|                |     University of   |\n";
	    cout<<"\t\t\t|                |     Zurich (Ph.D)   |\n";
	    cout<<"\t\t\t|   Known for    |  General relativity |\n";
	    cout<<"\t\t\t|                | Photoelectric effect|\n";
	    cout<<"\t\t\t|                |   Brownian motion   |\n";
	    cout<<"\t\t\t|                |          BEC        |\n";
	    cout<<"\t\t\t|                | Gravitational Wave  |\n";
	    cout<<"\t\t\t|                | Unified field theory|\n";
	    cout<<"\t\t\t|                |  Energy-Mass Equi.  |\n";
	    cout<<"\t\t\t|     Awards     |    Barnard Medal    |\n";
	    cout<<"\t\t\t|                |     Nobel Prize     |\n";
	    cout<<"\t\t\t|                |   Matteucci Medal   |\n";
	    cout<<"\t\t\t|                |      ForMemRS       |\n";
	    cout<<"\t\t\t|                |    Copley Medal     |\n";
	    cout<<"\t\t\t|                |   Max Plank Medal   |\n";
	    cout<<"\t\t\t|                |Times Person of cent.|\n";
	    cout<<"\t\t\t --------------------------------------";
	    break;
    case 2: cout<<"\n\n\n\n\n\t\t\t          Sir Issac Newton\n";
	    cout<<"\t\t\t --------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |   4 January 1643    |\n";
	    cout<<"\t\t\t|    Country     |        England      |\n";
	    cout<<"\t\t\t|     Died       |     31 March 1727   |\n";
	    cout<<"\t\t\t|   Education    |   Trinity College   |\n";
	    cout<<"\t\t\t|                |      Cambridge      |\n";
	    cout<<"\t\t\t|   Known for    | Newtonian Mechanics |\n";
	    cout<<"\t\t\t|                |     Gravitation     |\n";
	    cout<<"\t\t\t|                |       Calculas      |\n";
	    cout<<"\t\t\t|                |    Laws of Motion   |\n";
	    cout<<"\t\t\t|                |        Optics       |\n";
	    cout<<"\t\t\t|                |   Binomoal series   |\n";
	    cout<<"\t\t\t|     Awards     |         FRS         |\n";
	    cout<<"\t\t\t|                |   Knight Bachelor   |\n";
	    cout<<"\t\t\t --------------------------------------";
	    break;
    case 3: cout<<"\n\t\t\t            Archimedes\n";
	    cout<<"\t\t\t --------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |        287 BC       |\n";
	    cout<<"\t\t\t|    Country     |        Greece       |\n";
	    cout<<"\t\t\t|     Died       |        212 BC       |\n";
	    cout<<"\t\t\t|    Known for   | Archimedes Principle|\n";
	    cout<<"\t\t\t|                |  Archimedes' screw  |\n";
	    cout<<"\t\t\t|                |     Hydrostatics    |\n";
	    cout<<"\t\t\t|                |        Levers       |\n";
	    cout<<"\t\t\t|                |    Infinitesimals   |\n";
	    cout<<"\t\t\t|                | Neusels construction|\n";
	    cout<<"\t\t\t --------------------------------------";
	    break;
    case 4: cout<<"\n\n\n\t\t\t             Nicolas Tesla\n";
	    cout<<"\t\t\t --------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |     10 July 1856    |\n";
	    cout<<"\t\t\t|    Country     |        Austria      |\n";
	    cout<<"\t\t\t|      Died      |    7 January 1943   |\n";
	    cout<<"\t\t\t|    Known for   |       AC Motor      |\n";
	    cout<<"\t\t\t|                |   Induction motor   |\n";
	    cout<<"\t\t\t|                |     Plasma globe    |\n";
	    cout<<"\t\t\t|                |      Tesla coil     |\n";
	    cout<<"\t\t\t|                |       Torpedo       |\n";
	    cout<<"\t\t\t|     Awards     |     Cresson Medal   |\n";
	    cout<<"\t\t\t|                |Order of Price Danilo|\n";
	    cout<<"\t\t\t|                |   John Scott Medal  |\n";
	    cout<<"\t\t\t|                |  Order of St. Sava  |\n";
	    cout<<"\t\t\t --------------------------------------";
   case 5: cout<<"\n\n\n\n\n\t\t\t             Emil Lenz\n";
	    cout<<"\t\t\t ----------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |   12 February 1804 |\n";
	    cout<<"\t\t\t|    Country     |       Russia       |\n";
	    cout<<"\t\t\t|     Died  	  |   10 February 1865 |\n";
	    cout<<"\t\t\t|   Known for    |     Lenz's Law     |\n";
	    cout<<"\t\t\t|                |    Joule's Law     |\n";
	    cout<<"\t\t\t|                |   (Joule-Lenz Law) |\n";
	    cout<<"\t\t\t|-------------------------------------|\n";
	    break;
    case 6: cout<<"\n\n\n\n\t\t\t         Galileo Galilei\n";
	    cout<<"\t\t\t -------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |  15 february 1564  |\n";
	    cout<<"\t\t\t|    Country     |       Italy        |\n";
	    cout<<"\t\t\t|     Died       |  8 January 1642    |\n";
	    cout<<"\t\t\t|  Known for     |     Kinematics     |\n";
	    cout<<"\t\t\t|                |     Dynamics       |\n";
	    cout<<"\t\t\t|                |    Astronomy       |\n";
	    cout<<"\t\t\t|                |    Telescope       |\n";
	    cout<<"\t\t\t|                |  Observational     |\n";
	    cout<<"\t\t\t -------------------------------------";
	    break;
    case 7: cout<<"\t\t\t           Andre-Marie Ampere\n";
	    cout<<"\t\t\t -------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |  20 January 1775   |\n";
	    cout<<"\t\t\t|   Country      |      France        |\n";
	    cout<<"\t\t\t|     Died       |  10 June 1836      |\n";
	    cout<<"\t\t\t|  Known for     |  Ampere's Circuital|\n";
	    cout<<"\t\t\t|                |        Law         |\n";
	    cout<<"\t\t\t|                |  Ampere's Force    |\n";
	    cout<<"\t\t\t|                |       Law          |\n";
	    cout<<"\t\t\t|                |  Avogadro Ampere's |\n";
	    cout<<"\t\t\t|                |     Hypothesis     |\n";
	    cout<<"\t\t\t -------------------------------------\n";
	    break;
    case 8: cout<<"\n\n\n\t\t\t         James Clerk Maxwell\n";
	    cout<<"\t\t\t -------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |    13 june 1831    |\n";
	    cout<<"\t\t\t|   Country      |      Scotland      |\n";
	    cout<<"\t\t\t|     Died       |  5 November 1879   |\n";
	    cout<<"\t\t\t|  Known for     | Maxwell's Equation |\n";
	    cout<<"\t\t\t|                | Maxwell's Relations|\n";
	    cout<<"\t\t\t|                |   Maxwell's Coil   |\n";
	    cout<<"\t\t\t|                | Maxwell's Theorem  |\n";
	    cout<<"\t\t\t|                |  Maxwell's Discs   |\n";
	    cout<<"\t\t\t -------------------------------------\n";
	    break;
    case 9: cout<<"\n\n\n\t\t\t           Michael Faraday\n";
	    cout<<"\t\t\t ------------------------------------- \n";
	    cout<<"\t\t\t| Date of Birth  |    13 june 1831    |\n";
	    cout<<"\t\t\t|   Country      |      Scotland      |\n";
	    cout<<"\t\t\t|     Died       |  5 November 1879   |\n";
	    cout<<"\t\t\t|  Known for     | Maxwell's Equation |\n";
	    cout<<"\t\t\t|                | Maxwell's Relations|\n";
	    cout<<"\t\t\t|                |   Maxwell's Coil   |\n";
	    cout<<"\t\t\t|                | Maxwell's Theorem  |\n";
	    cout<<"\t\t\t|                |  Maxwell's Discs   |\n";
	    cout<<"\t\t\t -------------------------------------\n";

	    break;
  case 10:  cout<<"\n\t\t\t           Daniel Bernoulli\n";
	    cout<<"\t\t\t -------------------------------------\n";
	    cout<<"\t\t\t| Date of Birth  |  8 November 1700  |\n";
	    cout<<"\t\t\t|    Country     |    Netherlands    |\n";
	    cout<<"\t\t\t|      Died      |  17 March 1782    |\n";
	    cout<<"\t\t\t|  Known for     |    Bernoulii's    |\n";
	    cout<<"\t\t\t|                |     Principle     |\n";
	    cout<<"\t\t\t|                |  Early Kinetic    |\n";
	    cout<<"\t\t\t|                |  Theory of gases  |\n";
	    cout<<"\t\t\t|   Education    |  University of    |\n";
	    cout<<"\t\t\t|                |       Basel       |\n";
	    cout<<"\t\t\t|                |    Heidelberg     |\n";
	    cout<<"\t\t\t|                |    University     |\n";
	    cout<<"\t\t\t ------------------------------------\n";
	    break;

}

}
void convert()
{ clrscr();
  int convertch, massch;
  float masskg_g,massg_kg, masskg_pd, masspd_kg,masso_g, massg_o,speed_ch,spd_ms=0,spd_km=0;
  float forcech,forcen,forced,enrgch,enrge,enrgj;
  float lnthch,lnthnm,lnthum,lnthcm,lnthpm,lntham,lnthm,lnthmm;
  cout<<"\n\t\tSelect the type of unit you want to convert.";
  cout<<"\n\t\t\t 1. Mass";
  cout<<"\n\t\t\t 2. Speed or Velocity";
  cout<<"\n\t\t\t 3. Force";
  cout<<"\n\t\t\t 4. Energy";
  cout<<"\n\t\t\t 5. Lenth";
  cout<<"\n\n\t\t\t Enter your choice : ";
  cin>>convertch;
  clrscr();
  switch(convertch)
  { case 1: cout<<"\n\n\n\n\t\t\t\t 1. Kg -> g";
	    cout<<"\n\t\t\t\t 2. kg -> pounds";
	    cout<<"\n\t\t\t\t 3. g -> ounces";
	    cout<<"\n\n\t\t\t\t Enter your choice : ";
	    cin>>massch;
	    if(massch==1)
	    { cout<<"\t\t\tEnter mass(in kg) : ";
	      cin>>masskg_g;
	      massg_kg=masskg_g*1000;
	      cout<<"\n\t\t\t Mass(in g) is : "<<massg_kg;
	    }
	    else if(massch==2)
	    { cout<<"\t\t\t Enter mass(in kg)  : ";
	     cin>>masskg_pd;
	     masspd_kg=2.205*masskg_pd;
	     cout<<"\t\t\t Mass(in pounds) is : "<<masspd_kg;
	     }
	    else if(massch==3)
	    { cout<<"\t\t\t Enter mass(in g) :";
	      cin>>massg_o;
	      masso_g=0.0353*massg_o;
	      cout<<"\t\t\t Mass(in ounce) :"<<masso_g;
	    }
	    break;

    case 2: cout<<"\n\n\n\t\t\t 1. m/s -> km/h";
	    cout<<"\n\t\t\t 2. km/h -> m/s";
	    cout<<"\n\t\t\t 3. km/h -> miles/h";
	    cout<<endl<<"\t\t\tEnter your choice:";
	    cin>>speed_ch;
	    if(speed_ch==1)
	    { cout<<"\t\t\tEnter speed(in m/s):";
	      cin>>spd_ms;
	      spd_ms=spd_ms*3.6;
	      cout<<endl<<"\t\t\tSpeed in km/h is:"<<spd_ms;
	      }
	    else if(speed_ch==2)
	    { cout<<"\t\t\tEnter speed in km/h:";
	      cin>>spd_km;
	      spd_km=(spd_km*5)/18;
	      cout<<endl<<"\t\t\tSpeed in m/s is:"<<spd_km;
	      }
	    else if(speed_ch==3)
	    { cout<<"\t\t\tEnter the speed in Km/h:";
	      cin>>spd_km;
	      spd_km=spd_km/1.609;
	      cout<<endl<<"\t\t\tSpeed in miles/h is:"<<spd_km;
	      }
	      break;

   case 3 :  cout<<"\n\n\n\t\t\t1. Newton --> Dyne";
	     cout<<"\n\t\t\t2. Dyne   --> Newton    ";
	     cin>>forcech;
	     if(forcech==1)
	     { cout<<"\t\t\tEnter force (in Newton):- ";
	       cin>>forcen;
	       forced=forcen*100000;
	       cout<<"\t\t\tForce (in Dyne) is :- "<<forced;
	     }
	     else if(forcech==2)
	     { cout<<"\t\t\tEnter force (in Dyne):- ";
	       cin>>forced;
	       forcen=forced/100000;
	       cout<<"\t\t\tForce (in Newton) is :- :"<<forcen;
	     }
	     else
	     cout<<"\n\t\t\tYou entered wrong choice!!!";
	     break;

   case 4 :  cout<<"\n\n\n\t\t\t1. Joule --> Erg";
	     cout<<"\n\t\t\t2. Erg   --> Joule   ";
	     cin>>enrgch;
	     if(enrgch==1)
	     { cout<<"\t\t\tEnter energy (in Joule) :- ";
	       cin>>enrgj;
	       enrge=enrgj*10000000;
	       cout<<"\t\t\tEnergy (in Erg) is :- "<<enrge;
	     }
	     else if(enrgch==2)
	     { cout<<"\t\t\tEnter energy (in Erg) :- ";
	       cin>>enrge;
	       enrgj=enrge/10000000;
	       cout<<"\t\t\tEnrgy (in Joule) is :- "<<enrgj;
	     }
	     else
	     cout<<"\n\t\t\tYou entered wrong choice!!!";
	     break;

   case 5:   cout<<"\n\t\t\t1. metre --> cm";
	     cout<<"\n\t\t\t2. metre --> mm";
	     cout<<"\n\t\t\t3. metre --> micrometre";
	     cout<<"\n\t\t\t4. metre --> nanometre";
	     cout<<"\n\t\t\t5. metre --> angstrome";
	     cout<<"\n\t\t\t6. metre --> picometre    ";
	     cin>>lnthch;
	     if(lnthch==1)
	     { cout<<"\t\t\tEnter length (in metre) :- ";
	       cin>>lnthm;
	       lnthcm=lnthm/100;
	       cout<<"\t\t\tLength (in cm) is :- "<<lnthcm;
	     }
	     else if(lnthch==2)
	     { cout<<"\t\t\tEnter length (in metre) :- ";
	       cin>>lnthm;
	       lnthmm=lnthm/1000;
	       cout<<"\t\t\tLength (in micrometer) is :- "<<lnthmm;
	     }
	     else if(lnthch==3)
	     { cout<<"\t\t\tEnter length (in metre) :- ";
	       cin>>lnthm;
	       lnthum=lnthm/1000000;
	       cout<<"\t\t\tLength (in micrometer) is :- "<<lnthum;
	     }
	     else if(lnthch==4)
	     { cout<<"\t\t\tEnter length (in metre) :- ";
	       cin>>lnthm;
	       lnthnm=lnthm/1000000000;
	       cout<<"\t\t\tLength (in nanometer) is :- "<<lnthnm;
	     }
	     else if(lnthch==5)
	     { cout<<"\t\t\tEnter length (in metre) :- ";
	       cin>>lnthm;
	       lntham=lnthm/10000000000;
	       cout<<"\t\t\tLength (in angstrome) is :- "<<lntham;
	     }
	     else if(lnthch==6)
	     { cout<<"\t\t\tEnter length (in metre) :- ";
	       cin>>lnthm;
	       lnthpm=lnthm/1000000000000;
	       cout<<"\t\t\tLength (in picometer) is :- "<<lnthpm;
	     }
 }
}

void practice()
{    clrscr();
     int ch, ans1,ans2,ans3,ans4,ans5,ans6;

    cout << "Please choose your topic for which you want to practice for:-";
    cout << "\n\t\t1. Mechanics.";
    cout << "\n\t\t2. Energetics.";
    cout << "\n\t\t3. Elctrostatics.";
    cout << "\n\t\t4. Magnetostatics.";
    cout << "\n\t\t5. Optics.";
    cout << "\n\t\t6. Modern Physics.";
    cout << "\n\n\t Enter your choice:-";
    cin >> ch;

switch (ch)
{  case 1: cout<<"Que 1: A ball is dropped from a height. If it takes 0.200 s to cross the last 6.00 m \n  ";
	   cout<<" before hitting th ground, find the height from which it was dropped. Take g= 10 m/s2.\n Ans : ";
	   cin>>ans1;
	   if (ans1 == 48)
	   cout << "\nYour answer is CORRECT.\n";
	   else
	   cout << "\nYour answer is WRONG. The correct answer is 48 m.\n";
	   break;

  case 2:  cout<< "\n Que 1: Calculate the change in internal energy of a gas kept in a rigid container when\n";
	   cout << "100 J of heat is supplied to it.\n Ans : ";
	   cin >> ans2;
	   if (ans2 == 100)
	   cout << "\nYour answer is CORRECT.";
	   else
	   cout << "\nYour answer is INCORRECT. The correct answer is 100 J.";
	   break;

  case 3:  cout << "\n Que 2: A uniform electric field of 10 N/C exists in the vertically downward direction. \n";
	   cout << "Find the increase in the electric potential as one goes up through a height of 50 cm.\n Ans : ";
	   cin >> ans3;
	   if(ans3==5)
	   cout<<"\nYour answer is CORRECT.";
	   else
	   cout << "\nYour answer is INCORRECT. The correct answer is 5 V.\n";
	   break;

  case 4:  cout << "\n Que 1: A straight , long wire carriers a current of 20 A. Another wire carrying equal current\n";
	   cout << "is placed parrallel to it. If the force acting on a length of 10 cm of the second wire is 0.00002 N\n";
	   cout << "what is the separation (in cm) between them ?\n Ans : ";
	   cin >> ans4;
	   if(ans4==40)
	   cout<< "\nYour answer is CORRECT.";
	   else
	   cout << "\nYour answer is INCORRECT. The correct answer is 40 cm.\n";
	   break;

  case 5:  cout << "\nQue 1 : Find the angle of minimum deviation for an equilateral prism made of the material of refractive index\n";
	   cout << " 1.732. What is the angle of incidence for this deviation ?\n Ans : ";
	   cin >> ans5;
	   if(ans5==60)
	   cout << "\nYour answer is CORRECT.";
	   else
	   cout << "\nYour answer is INCORRECT. The correct answer is 60 deg.\n";
	   break;

  case 6:  cout << "\n Que 1: The work function of a photoelectric material is 4.0 eV. Find its thresold wavelength(in nm).\n Ans : ";
	   cin >> ans6;
	   if(ans6==310)
	   cout << "\nYour answer is CORRECT.";
	   else
	   cout << "\nYour answer is INCORRECT. The correct answer is 310 nm.\n";
	   break;
 }
}

void record()
{ clrscr();
  fstream file;
  int ch,i=0 ;
  file.open("books.dat",ios::binary|ios::app);
  char ch2,ch1;
  book a[10];
  do{
      a[i].getrecord();
      file.write((char *) &a[i], sizeof(book));
      cout<<"\nDo you want to see existing record (y/n) ?";
      cin>>ch1;
      if(ch1=='y'||ch1=='Y')
      {  for(int j=0;j<(i+1);j++)
	 {  file.read((char *) &a[j], sizeof(book));
	    cout<<"\n\n\t\t\t"<<j+1;
	    a[j].showrecord();
	 }
      }

      cout<<"\n Do you want to add more new record :- ";
      cin>>ch2;
      i++;
    }while(ch2=='Y'||ch2=='y');

file.close();
getch();
}