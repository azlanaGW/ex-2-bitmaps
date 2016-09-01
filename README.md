# Exercise 1: Bitmap Data Structure in C

The instructions for this assignment are here: [http://faculty.cs.gwu.edu/~timwood/wiki/doku.php/teaching:f2016:cs2113:ex1](http://faculty.cs.gwu.edu/~timwood/wiki/doku.php/teaching:f2016:cs2113:ex1)

Step 0 and Step 1 are due Tuesday September 6th at 11:59PM.

## Compiling and Running Your Code
As noted in the instructions, this code requires the C math library to compile. To build and run your code use:

```
  gcc -lm bitmap.c -o bits
  ./bits
```

## Submitting Your Code
To submit your code you will need to...

1) Make sure you are in the right directory with your code and be sure you have uploaded your notes image from the first part of the assignment. In CodeAnywhere you can right click on a folder name and choose Upload to get the image from your computer to the cloud. If you run `ls` you should see output like:

```
  cabox@box-codeanywhere:~/workspace/ex-1-bitmap$ ls
  README.md bitmap.c  bits  mynotes.jpg
```

2) Add and commit your files locally--_the name of your notes image will probably be different from mine_:

```
  git add bitmap.c 
  git add mynotes.jpg
  git commit -m "Working step 1"
```
3) Push those files to your github repository:

```
  git push origin master
```
4) Verify that your code is updated by finding your repository on the github web interface and looking at the files.

**Remember:** If later you change any of your files, you will need to run the add, commit, and push commands again to be sure the TA gets your latest versions.
