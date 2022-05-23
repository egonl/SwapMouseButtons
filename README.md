# SwapMouseButtons
Windows command line program to swap or set the primary mouse button

## Introduction
I like my right mouse button to be the primary button, but for some reason the mouse driver of my Windows laptop keeps setting the left mouse button as the primary button on every reboot. So then I had to go to the Windows mouse settings and select my primary button - again and again. To make matters worse, the remote desktop environment I was using at work (VMWare Horizon) also didn't like a right primary button, and regularly -but not always- set the left mouse button as primary button.

This wasn't a solution! So I created a SwapMouseButtons, a Windows App without user interface. With it you can specify which button you want as your primary button, simply by speficying 'left' or 'right' as command line argument. Without command line argument, SwapMouseButtons will just swap the primary button. 

## How to always set your primary button when you log on
- Run *shell:startup*
- Put a shortcut to SwapMouseButtons.exe in the folder that just showed up
- Open the shortcut properties
- Add your primary button (left or right) to the *Target*, e.g. *C:\tools\SwapMouseButtons.exe right*.

## Swap mouse buttons with a shortcut
- Put a shortcut to SwapMouseButtons.exe on your desktop
- Open the shortcut properties
- Under *Shortcut*, specify the shortcut you want to use to start SwapMouseButtons.exe
- When you're using this method, there's sometimes a delay of a couple of seconds before SwapMouseButtons actually gets started. In order to avoid confusion (has it already been swapped?), SwapMouseButton will play a notification sound to indicate that it has been started.

## How to build
Open SwapMouseButtons.sln in Visual Studio 2022. The C++ desktop development feature should be installed.
