#include <iostream>
using namespace std;
int main() 
{
	char ascii = 48;//you know why this is.
	system("title Matrix");//system command sends a command to cmd if you type title * you know.
	system("color a");//Need for the matrix.
	while(1)//You can also use the infinite loop for(;;) command.
	{
		ascii++;
		cout<<ascii;
		if(ascii == '49')
		{
			ascii = 48;
		}
	}
}
//I forgot to say. This program uses 15% of your processor(although my processor is Ýntel i7).
