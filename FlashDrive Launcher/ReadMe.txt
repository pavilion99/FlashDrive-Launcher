========================================================================
    FlashDrive Launcher Overview
========================================================================

FlashDrive Launcher is to be placed in the root of your flash drive.
It will then use a file ("id.inf") to setup the buttons and icons on the main program screen.
The file is to be setup as shown:


id.inf
---------
App version 1
App version 2
App version 3
App version 4
App version 5
App name 1
App name 2
App name 3
App name 4
App name 5
Disk information line 1
Disk information line 2
Disk information line 3


The apps are to be placed in the System\Apps folder in the root of the flash drive,
and they should be named app1.exe, app2.exe, app3.exe, app4.exe, and app5.exe respectively.
The icons should be placed in the System\Images folder in the root of the flash drive,
and they should be named app1.png, app2.png, app3.png, app4.png, and app5.png respectively.
These should be 24x24px each.

The drive icon (which will also be used in the autorun.inf file) should be placed in System\Images,
in the root of the flash drive.  
This image should be named "drivelogo.png" and should be 128x128px.
There should be an icon copy of this image called drivelogo.ico.  It should also be 128x128px.
The drivelogo.png will be shown on the main application screen in the top left.
The drivelogo.ico will be used in the app's icon (extreme top left corner), and the taskbar thumbnail.

The autorun.inf should be formatted as shown below:


autorun.inf
--------------
[autorun]
open=FlashDriveLauncher.exe
label=FlashDriveNameHere
icon=System\Images\driveicon.ico


Note that the programs placed on the flash drive should be "portable", meaning
that they are a standalone executable file that does not write to any files on the
hard disk. 