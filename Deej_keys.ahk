Run "C:\Users\JerryHoward\Documents\Arduino\Deej_Soldered\deej-release.exe"

Browser_Home::Send !{f4}

Browser_Favorites::
if WinExist("ahk_exe steam.exe")
    if WinActive("ahk_exe steam.exe")
     WinMinimize
    else
     WinActivate
else
    Run C:\Program Files (x86)\Steam\steam.exe
Return

Browser_Search::
if WinExist("ahk_exe Discord.exe")
    if WinActive("ahk_exe Discord.exe")
     WinMinimize
    else
     WinActivate
else
    Run C:\Users\JerryHoward\AppData\Local\Discord\app-1.0.9175\Discord.exe
Return

Launch_Media::
if WinExist("ahk_exe chrome.exe")
    if WinActive("ahk_exe chrome.exe")
     WinMinimize
    else
     WinActivate
else
    Run C:\Program Files\Google\Chrome\Application\chrome.exe
Return

Media_Stop::
if WinExist("ahk_exe PhoneExperienceHost.exe")
    if WinActive("ahk_exe PhoneExperienceHost.exe")
     WinMinimize
    else
     WinActivate
else
    Run C:\Users\JerryHoward\Documents\Arduino\Deej_Soldered\WinStoreAppLinks\Phone Link.lnk
Return

Launch_App1::
if WinExist("ahk_exe Spotify.exe")
    if WinActive("ahk_exe Spotify.exe")
     WinMinimize
    else
     WinActivate
else
    Run C:\Users\JerryHoward\Documents\Arduino\Deej_Soldered\WinStoreAppLinks\Spotify.lnk
Return

Browser_Refresh::
if WinExist("ahk_exe outlook.exe")
    if WinActive("ahk_exe outlook.exe")
     WinMinimize
    else
     WinActivate
else
    Run C:\Users\JerryHoward\Documents\Arduino\Deej_Soldered\WinStoreAppLinks\outlook.lnk
Return