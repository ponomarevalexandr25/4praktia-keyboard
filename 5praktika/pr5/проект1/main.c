#include <8051.h>
// 1 - 0; 5 - 4; 9 - 8; D - 12
// 2 - 1; 6 - 5; A - 9; E - 13
// 3 - 2; 7 - 6; B - 10; F - 14
// 4 - 3; 8 - 7; C - 11; G - 15
void main()
{   
    unsigned int i,temp;
    unsigned char *str="123456789ABCDEFG";

    P0 = 0x38;
    P0 = 0x80;
    P2 = 0x1;
    P2 = 0x0;

    while(1)
    {
        i = -1;
        temp = 0;

        // 1-? ???????
        P3 = 0xFE;
        if(P1 == 0xFE && temp != 1) 
        {  
           i = 0;
           temp = 1;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }            
        if(P1 == 0xFD && temp != 2)
        {   
           i = 4;
           temp = 2;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }     
        if(P1 == 0xFB && temp != 3)
        {   
           i = 8;
          temp = 3;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }     
if(P1 == 0xF7 && temp != 4)
        {   
           i = 12;
           temp = 4;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }     

        // 2
        P3 = 0xFD;
        if(P1 == 0xFE && temp != 5)
        {   
           i = 1;
           temp = 5;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }   
        if(P1 == 0xFD && temp != 6)
{ 
           i = 5;
          temp = 6;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
}
 if(P1 == 0xFB && temp != 7)
        {   
           i = 9;
           temp = 7;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }   

 if(P1 == 0xF7 && temp != 8)
        {   
           i = 13;
           temp = 8;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }  


// 3 stolbec 

P3 = 0xFB;
        if(P1 == 0xFE && temp != 9)
        {   
           i = 2;
          temp = 7;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }   
        if(P1 == 0xFD && temp != 10)
        {   
           i = 6;
           temp = 8;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
}
 if(P1 == 0xFB && temp != 11)
        {   
           i = 10;
           temp = 9;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }  

 if(P1 == 0xF7 && temp != 12)
        {   
           i = 14;
           temp = 10;
           P0 = str[i];
           P2 = 0x3;
           P2 = 0x2;
while(P1 != 0xFF);
        }  

// 4

P3 = 0xF7;
if(P1 == 0xFE && temp != 11)
{   
    i = 3;
    temp = 11;
    P0=str[i];
    P2=0x3;
    P2=0x2;
while(P1 != 0xFF);
}   
if(P1 == 0xFD && temp != 12)
{   
    i = 7;
    temp=12;
    P0=str[i];
    P2=0x3;
    P2=0x2;
while(P1 != 0xFF);
}   
if(P1 == 0xFB && temp != 12)
{   
    i = 11;
    temp=13;
    P0=str[i];
    P2=0x3;
    P2=0x2;
while(P1 != 0xFF);
}   
if(P1 == 0xF7 && temp != 14) 
{
    i = 15;
    temp=14;
    P0=str[i];
    P2=0x3;
    P2=0x2;
while(P1 != 0xFF);
}     

if(i>=0)
		{   
            
                P0 = str[i];
				
		}	
	}
}
