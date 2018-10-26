/*
Smple storyline (Short story, English)
ALGORITHM:
2 options per situation (a,b)

*/
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <limits>
using namespace std;

void clearScreen(int x) {
    //this is a function that clears the screen and when called inside int main then it will execute whatever it is inside of this function
     system ("cls");
    Sleep(x);
}

void spacelines() { 

    cout<< endl;
    cout<< endl;
    cout<< endl;
    cout<< endl;
}

void play_music()
{
	//this is a function that playsound and when called inside int main then it will play the sound.
	
	PlaySound(TEXT ("typing.wav") , NULL,SND_LOOP|SND_ASYNC);
}
void playmusic()
{
	//this is a function that playsound and when called inside int main then it will play the sound.
	
	PlaySound(TEXT ("breathing.wav") , NULL,SND_LOOP|SND_ASYNC);
}

void Type(const char * p)
{
	//this is a function that display the output in typing form and when called inside int main then it will execute.
	if (NULL == p)
	return;
	
	while(*p)
	{
		printf("%c\xDB", *p++);
		::Sleep(30);
		printf("\b \b");
		::Sleep(30);	
	}
	::Sleep(300);
}
  WORD GetConsoleTextAttribute (HANDLE hCon)
{
  CONSOLE_SCREEN_BUFFER_INFO con_info;
  GetConsoleScreenBufferInfo(hCon, &con_info);
  return con_info.wAttributes;
}
int main( int argc , const char * arg[])
{
	
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  const int saved_colors = GetConsoleTextAttribute(hConsole);
  SetConsoleTextAttribute(hConsole, saved_colors);
	
    char choice;
    string y;
   
    //1st Scene
    playmusic();
    spacelines(); //this is a function that we created above the int main and this is how you call it. 
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout <<"\t\t\t Enter your preferred name: " ;
    cin>> y;
    spacelines();
    cout << "\t\t\t\t\t\t\t\t Welcome!  " << y << endl;
    spacelines();
    play_music();
    Type ("\t\t\t[ Establishing Connection ] [...........] [ Connecting ......... ...] \n\n" );
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    Type("\t\t\tNoah:\n\n");
	Type ("\t\t\tHello? Is the anyone there ? Can anyone read me? \n\n ") ;
	
       
    spacelines();
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "\t\t\t" << y <<":" << endl;
    Type("\t\t\t\ a-(Who is this? ) , b-(I read you!) \n\n" );
    PlaySound(NULL,NULL, 0);
    cout<<"\t\t\tanswer:";
    cin>>choice;
    		 
   if (choice=='a'){
   	clearScreen( 2000);
        spacelines();
        play_music();
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Type("\t\t\tNoah: \n\n" );
   	    Type("\t\t\tHello? Oh! I m sorry I taught that no one can hear me. \n\n");
		Type("\t\t\tMy name is Noah. I am an astronaut on board at the starship Republic IV.\n\n" );
	
   }
   
   else if (choice=='b'){
   	clearScreen( 2000);
        spacelines();
        play_music();
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        Type("\t\t\tNoah:\n\n" );
        Type("\t\t\tOh, thank God! Its good to have human contact! It s been hours!\n\n" );
      
   }
   
   //2nd scene
   	spacelines();
   	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
   	cout << "\t\t\t" << y <<":" << endl;
		Type("\t\t\t  a-(How do you not know?) , b-(Try using a map.)\n\n" );
		PlaySound(NULL,NULL, 0);
		cout <<"\t\t\tanswer: ";
		cin >> choice;
			
		if(choice=='a'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tWhy don t I know I have this whole sector memorized like any astronaut would do?\n\n" );
			Type("\t\t\tBecause I m a student. I was board on the Republic IV for a proper training\n\n" );
			Type("\t\t\tand experiment on some things . All right?.\n\n" );	
		
		}
			
		else if(choice=='b'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tOur ship crashed on some moon. I have no idea where.\n\n" );
		
		}
	
	//3th Scene
	spacelines();
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "\t\t\t" << y <<":" << endl;
		Type("\t\t\t  a-(Okay. Calm down.) , b-(Whoa take it easy!)\n\n" );
		PlaySound(NULL,NULL, 0);
		cout << "\t\t\tanswer: ";
		cin >> choice;
		
		if(choice=='a'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tRight, Sorry, I’m just in shock right now ,\n\n" );
			Type("\t\t\tWe cover a lot of protocols in training , but this was never one of them.\n\n" );
			Type("\t\t\tBut its cool I just need to find other survivors, and they ll know what to do.\n\n" );
			Type("\t\t\tONLY..... If there are survivors left? What if I’m the only one who made it alive?\n\n" );
			Type("\t\t\tWhat if I’m all alone here?\n\n" );
		
		}

		else if(choice=='b'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\t“Easy” isn t exactly at the top of my list of ways to take it at the moment.\n\n" );
			Type("\t\t\tIf I were being honest, Im freaking the hell out right now!\n\n" );
			
		}
	//4th Scene
	spacelines();
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "\t\t\t" << y <<":" << endl;
		Type("\t\t\t a-(Okay. Calm down.) , b-(Whoa take it easy!)\n\n" );
		PlaySound(NULL,NULL, 0);
		cout << "\t\t\tanswer: ";
		cin >> choice;
		
		if(choice=='a'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tRight, Sorry, I m just in shock right now , \n\n" );
			Type("\t\t\tWe cover a lot of protocols in training , but this was never one of them.\n\n" );
			Type("\t\t\tBut its cool I just need to find other survivors, and they ll know what to do.\n\n" );
			Type("\t\t\tONLY.... If there are survivors left? What if I m the only one who made it alive?\n\n" );
			Type("\t\t\tWhat if I’m all alone here?\n\n" );
			
		}

		else if(choice=='b'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\t“Easy” isn t exactly at the top of my list of ways to take it at the moment.\n\n" );
			Type("\t\t\tIf I were being honest, I m freaking the hell out right now!\n\n" );
		
		}
		
	//5th Scene
	spacelines();
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "\t\t\t" << y <<":" << endl;
		Type("\t\t\t a-(Easy now, Just breathe .) , b-(Want to talk about James?)\n\n" );
		PlaySound(NULL,NULL, 0);
		cout << "\t\t\tanswer: ";
		cin >> choice;
		
		if(choice=='a'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tRight,  You re right, The atmosphere is breathable might as well breathe it.\n\n" );
			Type("\t\t\tI mean it s like James said more than once : Don t waste time worrying about “what if”.\n\n" );
			Type("\t\t\tJust concentrate on “what is”. So let’s do that\n\n" );
			
		}
			
		else if(choice=='b'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tOh yeah, maybe that d help. You see James …… He was like a “Dad” around the Republic.\n\n" );
		    Type("\t\t\tHe is the nicest and also the smartest not in the showy way, but in the way of , you know , \n\n" );
			Type("\t\t\tIf something broke, He d know how to fix it.\n\n" );
			Type("\t\t\tBut James was sweet enough that h8is smarts never made anyone feel stupid.\n\n" );
			Type("\t\t\t\t\t\tI really appreciated that. I know Im hoping against hope,\n\n" );
			Type("\t\t\tbut I really hope James made it through this nightmare alive.\n\n" );
			Type("\t\t\tI mean, I hope EVERYONE did, obviously. But maybe I hope a little extra harder for him.\n\n" );
			Type("Thank you for listening to me.\n\n" );
		
		}
			
	//6th Scene
	spacelines();
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "\t\t\t" << y <<":" << endl;
		Type("\t\t\t a-(That s okay, Where are you?) , b-(Are you hurt?)\n\n" );
		PlaySound(NULL,NULL, 0);
		cout <<"\t\t\tanswer: ";
		cin >> choice;
		
		if(choice=='a'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tThe only way that I can answer that with confidence is to say “stranded”.\n\n" );
			Type("\t\t\tIf you know where nowhere is, just look right in the middle of it, and you’ll spot me.\n\n" );
			Type("\t\t\tThe Republic IV is an elliptical path towards the Alpha B67.\n\n" );
			Type("\t\t\tI don t know if we went off course, or by how much. I was nowhere near the bridge when it all went down.\n\n" );
			Type("\t\t\tJames, He.... He.... shoved me into an escape pod and then went to see how he could help others.\n\n" );
			Type("\t\t\tThat’s just who he was. I guess I blacked out from the pod, from shock or fear or something,\n\n" );
			Type("\t\t\tI don’t know how long? …….and then when I came to, I was here.\n\n" );
		
		}
		
		else if(choice=='b'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tLets see I crashed in the middle of nowhere , I m the least prepared person for this emergency!\n\n" );
			Type("\t\t\tBut I’m okay, I just got a small bruise on my shoulder from that crash, but still I’m in shock,\n\n" );
			Type("\t\t\tI don t know how long? And when I came to, I was here. Thanks for asking.\n\n" );	
		
		}
		
	//7th Scene
	spacelines();
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "\t\t\t" << y <<":" << endl;
		Type("\t\t\t a-(Describe “here”)\n\n" );
		PlaySound(NULL,NULL, 0);
		cout << "\t\t\tanswer: ";
		cin >> choice;
		
		if(choice=='a'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tAll right, My escape pod came down on a some kind of dessert. The ground is all cracked gray rock,\n\n" );
			Type("\t\t\tand there is huge gray peak a few miles away, or kilometers , I guess? It looks weird in a symmetrical natural formation.\n\n" );
			Type("\t\t\tMy suit is compass places the peak northeast, and then, in the opposite direction,\n\n" );
			Type("\t\t\tsouth and southwest to be precise. The crash site look’s closer than the peak,\n\n" );
			Type("\t\t\tWhat do think I should do?\n\n" );
			
	}

	//8th Scene
	spacelines();
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "\t\t\t" << y <<":" << endl;
		Type("\t\t\ta-(Check the Crash.) , b-(Head for the peak.)\n\n" );
		PlaySound(NULL,NULL, 0);
		cout << "\t\t\tanswer: ";
		cin >> choice;
		
		if(choice=='a'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tYeah cool, that makes sense. There might another survivors……fingers crossed.\n\n" );
			Type("\t\t\tOr at the very least, there should be some supplies that I can use. Okay Im heading south now.\n\n" );
			Type("\t\t\tLooks like the smoke from the site is an hour away or whatever. I ll let you know once I get there.\n\n" );
		
		}
		
		else if(choice=='b'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tYou think? Because the peak is lot further away from the crash site.\n\n" );
			Type("\t\t\tI’m not sure if I’ll make it before nightfall.\n\n" );	
		
		}
		
	//9th Scene
	spacelines();
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "\t\t\t" << y <<":" << endl;
		Type("\t\t\ta-(Better get moving then.) , b-(Okay, Head for the crash)\n\n" );
		PlaySound(NULL,NULL, 0);
		cout << "\t\t\tanswer: ";
		cin >> choice;

		if(choice=='a'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\t\t\tAll right, I guess I have to start somewhere. By the way thanks for all the advice.\n\n" );
			Type("\t\t\tAnyway this walk could take a while. [Few minutes later….] Im so sorry I just cant walk that long enough,\n\n" );
			Type("\t\t\tI ll just go to the crash site Im so sorry , I just really want to find out If there are survivors left\n\n" );
			Type("\t\t\tor supplies or food that I can use from the crash.\n\n" );
			Type("\t\t\t[Few minutes later…. after walking to the crash site……..]\n\n" );
			Type("\t\t\tIm here now on the crash site , might as well take a look around...\n\n" );
			Type("\t\t\t[Few minutes later]. They are all gone , What should I do now?\n\n" );
		
			}
			
		else if(choice=='b'){
	    clearScreen(2000);
	        spacelines();
	        play_music();
	        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	        Type("\t\t\tNoah:\n\n" );
	        Type("\t\t\tYeah that d be cool. There might be other survivors out there, or the very least I could get some supplies\n\n" );
			Type("\t\t\tor food that I can use. I’ll let you know once I get there.\n\n" );
			Type("\t\t\t[Few minutes later…..]\n\n" );
			Type("\t\t\tIm here now on the crash site , might as well take a look around...\n\n" );
			Type("\t\t\t[Few minutes later]. They are all gone , What should I do now?\n\n" );
			
		}
		spacelines(); 
		cout << "See you on the next journey...." << y << endl;
		Type(" \t\t\t............To Be Continued...............\n\n" );

   return 0;
}

    
