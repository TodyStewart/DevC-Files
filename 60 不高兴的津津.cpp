#include<bits/stdc++.h>
using namespace std;
int school[10],mother[10];
int main()
{
    int a,b,mon,tue,wed,thu,fri,sat,sun,res,c;
    for(a=1;a<=7;a++)
      cin>>school[a]>>mother[a];
    mon=school[1]+mother[1];
    tue=school[2]+mother[2];
    wed=school[3]+mother[3];
    thu=school[4]+mother[4];
    fri=school[5]+mother[5];
    sat=school[6]+mother[6];
    sun=school[7]+mother[7];
    if(mon==tue||mon==wed||mon==thu||mon==fri||mon==sat||mon==sun)
      c=1;
    if(tue==wed||tue==thu||tue==fri||tue==sat||tue==sun&&tue!=mon)
      c=2;
    if(wed==thu||wed==fri||wed==sat||wed==sun&&wed!=tue&&wed!=mon)
      c=3;
    if(thu==fri||thu==sat||thu==sun&&thu!=mon&&thu!=tue&&thu!=wed)
      c=4;
    if(fri==sat||fri==sun&&fri!=mon&&fri!=tue&&fri!=wed&&fri!=thu)
      c=5;
    if(sat==sun&&sat!=mon&&sat!=tue&&sat!=wed&&sat!=thu&&sat!=fri)
      c=6;
    if(mon<=8&&tue<=8&&wed<=8&&thu<=8&&fri<=8&&sat<=8&&sun<=8)
      c=7;
    if(mon<tue)
    	mon=tue;c=0;
   	if(mon<wed)
    	mon=wed;c=0;
    if(mon<thu)
    	mon=thu;c=0;
    if(mon<fri)
    	mon=fri;c=0;
    if(mon<sat)
    	mon=sat;c=0;
    if(mon<sun)
    	mon=sun;c=0;
    switch(c)
    {
    	case 1: cout<<1; return 0;
    	case 2: cout<<2; return 0;
    	case 3: cout<<3; return 0;
    	case 4: cout<<4; return 0;
    	case 5: cout<<5; return 0;
    	case 6: cout<<6; return 0;
    	case 7: cout<<0; return 0;
    	default:
    	  break;
    }
    if(mon==tue) 
	{
		cout<<2;
		return 0;
	}
    if(mon==wed) 
    {
    	cout<<3;
    	return 0;
    }
    if(mon==thu) 
    {
    	cout<<4;
    	return 0;
    }
    if(mon==fri) 
     {
    	cout<<5;
    	return 0;
    }
    if(mon==sat) 
     {
    	cout<<6;
    	return 0;
    }
    if(mon==sun) 
     {
    	cout<<7;
    	return 0;
    }
	return 0;
}
