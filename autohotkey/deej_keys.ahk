Run "C:\Users\jrhow\Documents\AutoHotkey\deej-release.exe"

Browser_Home::Send !{f4}

Browser_Favorites::
if WinExist("ahk_exe steamwebhelper.exe")
    if WinActive("ahk_exe steamwebhelper.exe")
	{

     WinMinimize
	}
    else
{

     WinActivate
}
else
{
    Run C:\Program Files (x86)\Steam\steam.exe
}
Return

Browser_Search::
if WinExist("ahk_exe Discord.exe")
    if WinActive("ahk_exe Discord.exe")
     WinMinimize
    else
     WinActivate
else
    Run %LOCALAPPDATA%/Discord/Update.exe --processStart Discord.exe
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
    Run C:\Users\jrhow\Documents\Arduino\Deej_Soldered\WinStoreAppLinks\Phone Link.lnk
Return

;Launch_App1::
;if WinExist("ahk_exe Spotify.exe")
;    if WinActive("ahk_exe Spotify.exe")
;     WinMinimize
;    else
;     WinActivate
;else
;    Run C:\Users\jrhow\Documents\Arduino\Deej_Soldered\WinStoreAppLinks\Spotify.lnk
;Return

Launch_App1::
if WinExist("ahk_exe zotero.exe")
    {
    Send {f1}
    }
else
    {
    Run C:\Program Files\Zotero\zotero.exe
    Sleep, 1000
    if WinActive("ahk_exe zotero.exe")
    {
     WinMinimize
     Sleep, 1000
     Send {f1}
    }
    else
     Send {f1}
    }
Return

Browser_Refresh::
if WinExist("ahk_exe olk.exe")
    if WinActive("ahk_exe olk.exe")
     WinMinimize
    else
     WinActivate
else
    Run C:\Users\jrhow\Documents\Arduino\Deej_Soldered\WinStoreAppLinks\outlook.lnk
Return

;Calculator
;If launch_app2 is pressed, launch calculator. If it is already opened, focus it
Launch_App2::
if WinExist("ahk_exe ApplicationFrameHost.exe")
    if WinActive("ahk_exe ApplicationFrameHost.exe")
     WinMinimize
    else
     WinActivate
else
    Run C:\Users\jrhow\Documents\AutoHotkey\Eves Deej\WinStoreAppLinks\Calculator.lnk
Return