# ROCO_222 Logbook by Jonathan Smith

This logbook is intended to be a record of all the work completed during the practical  
sessions for the ROCO_222 module.

## My first Markdown document

This is my first document written using the markdown syntax.  
Markdown is a markup language that is designed to be easily converted  
to HTML. Markdown is commonly used to format readme files and create rich  
text using a plain text editor. Syntax examples are shown below.  

Using asterisks a bulletpointed list can be produced.  
* Sample Text A
* Sample Text B
* Sample Text C

Using numbers with a point after will enable a numbered list to be produduced.  
1. Sample Text 1
2. Sample Text 2
3. Sample Text 3

I have also been using double space at the end of each line  
to make a line break. Furthermore and complete blank line will  
seperate a paragraph.  

Other modifiers include _italic_ __bold__ and 'monospace'.  
Instead of underscores asterisks can also be used for example:  
*italic* and **bold**.

I can also use markup to make links. An example link to my reference  
material is produced below.

Daring Fireball [link](https://daringfireball.net/projects/markdown/)

Using a triple dash a complete line added.

---

## Command-line 101

Using the terminal I tested the list of console commands and descibed what each
command does.

### ls
ls lists the current directory contents  
ls stands for "list segments"  
The user can specify a file location for the command to be performed in.  
An example includes 'ls Downloads' which lists the contents of the downalod folder.  

### cd /tmp
cd is used to change the current directory. /tmp is a location. in this example  
cd /tmp changes the directory to /tmp.  
cd stands for "change directory"  

### cd $HOME
cd %HOME changes the directory to the home user file location.  
This is typically /home/your-username where as /home would navigate to the directory  
for all registered users on the system.

### mkdir name_of_directoy
Make directorys is used to create a new directory in the current folder.  
The user wil define the name of the new directory at the same time.  
For example: $ mkdir NewFolder  
This makes a new folder called 'NewFolder' in the current directory.  

### echo "Hello" > hello.md
Echo command is used to output a string to the standard output or a file.  
In this example the string "Hello" is output to a file called hello.md.  

### cat hello.md
Cat (concatenate) is used to read the contents of a file. Using cat hello.md  
reads back the file created using the previous command "echo "Hello" > hello.md"  

### cp hello.md hello-again.md
cp or copy files is used to make a new copy of an existing file. It is important to name the new copy with a unique file name that is different from the original.

### rm hello.md
The rm command is used to remove files or directories. In this example the command removes the file called   hello.md from the current directory.  

### rm -rf
This is a more dangerous version of the rm command that has two modifiers. The r means that the remove command   will run recursively removing the files and sub directorys in the file structre. The f means that the remove   command will force files to be deleated even if they cause errors. For example if a file is open in a program   using the force command the file can be deleted.  

### cat /proc/cpuinfo
The cat command is used to show files on the terminal which is refered to as the "standard output".  
THe command references a virtual file called cpuinfo.

The proc file system contains special virtual files that represent the current state of the kernal. The proc file system can be used to view important infromation about system hardware and processes. In this instance the cpuinfo file provides upto date infromation about the CPU.  

### sudo
sudo is allows the command to run regardless of admin or safegaurds. **Use with caution**

---

## CPU Usage
Using the 'top' command I can observe all the processes running on the linux system and view their CPU usage. This tool is comparable to the Task Manager on windows.  

Using the 'htop' command I can view the cpu usage and close down problem causing processes.

---

### Making directory/file structures for roco222
I made my file structre as so:  
$home  
ls  
mkdir roco222  
cd roco222  
mkdir jonny  
cd jonny  
mkdir lab-journal  
$home   

---

### Making a github account
I then went to GitHub.com and made a new account.

Using terminal i intialised my git repository in my roco222 folder using the  
'git init' command. Then I used ls -al to show all the files. The outout is shown below.  
total 16  
drwxrwxr-x  4 jonny jonny 4096 Sep 25 09:56 .  
drwxr-xr-x 30 jonny jonny 4096 Sep 25 09:47 ..  
drwxrwxr-x  7 jonny jonny 4096 Sep 25 09:56 .git  
drwxrwxr-x  3 jonny jonny 4096 Sep 25 09:43 jonny  

I then associated the repository with my github account:  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ git config  --global user.name "Jonathan Smith"  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ git config --global  user.email jonathan.smith@students.plymouth.ac.uk  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ cat ~/.gitconfig [user]  
	name = Jonathan Smith  
	email = jonathan.smith@students.plymouth.ac.uk  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ git config --global  user.email jonathan.smith@students.plymouth.ac.uk  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ cat ~/.gitconfig [user]  
	name = Jonathan Smith  
	email = jonathan.smith@students.plymouth.ac.uk  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$   

## My first commit
Using the command 'git commit -m"Created Journal" I produced a new commit containing my Journal.  
I can check my work using the 'git log' command to show the recent changes.  

Then using the 'git push' command I can upload the new version to GitHub. Shown below is a screenshot of the online repository:  
![Figure 1-1](  https://github.com/Jonsmith9847/roco222/blob/master/photos/GitHub.png  )

---
 
### Installing the Ardunio IDE
'27-9-17'

The Ardunio IDE will be used later on during labs to program the Ardunio microcontrollers.  
Therefore I decided to install the Ardunio IDE using the terminal.  

Using the command: sudo apt install arduino  
The installer quickly performed the install and I was able to launch the ardunio IDE.  
![Figure 2-2]( https://github.com/Jonsmith9847/roco222/blob/master/photos/ArduinoIDE.png )

