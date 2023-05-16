# GraphicsLab
All Lab codes

Download the mingw zip file from the files directory.
If downloaded from here no need to copy paste the files.
Otherwise follow the all steps. 

Follow this step for setup codeblocks compiler:
1.	copy & paste "graphics.h" and "winbgim.h" into compiler include folder. 
2.	copy & paste libbgi.a file into compiler lib folder. 
3.	Now open code::blocks. 
4.	Go to settings -> Compiler -> Linker settings 
5.	Left side Linker libraries click add, and browse the file "libbgi.a" and add. In my pc this is "C:\Program Files (x86)\CodeBlocks\MinGW\lib\libbgi.a" 
6.	In Right side Other linker options text field copy paste this, "-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32" (without quotes) 
7.	Press ok. 
