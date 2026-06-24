### Character Input and Output
The standard library provides several functions for reading and writing one character at a time
that is `getchar` and `putchar` which are the simplest:

getchar reads the next input character from a text stream and returns that as its value. That is, after
`c = getchar();`

The function putchar prints a character each time it is called:
`putchar(c);`
prints the contents of the integer variable c as a character, usually on the screen. Calls to `putchar` and `printf` may be interleaved; the output will appear in the order in which the calls are made.

#### File Copying

Knowing these 2 concepts, you can write a very suprising amount of useful code without knowing anything more about input and output.

The simplest example is a program that copies its input to its output one character at a time:
`read a character
while (character is not end-of-file indicator)
    output the character just read
    read a character`
[[inout.c]]