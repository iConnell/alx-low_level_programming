# 0x00-hello_world


### [0-preprocessor](./0-preprocessor)
```
gcc -E $CFILE > c
stops after the preprocessing stage and saves output in file named c 
```


### [1-compiler](./1-compiler)
```
gcc -e $CFILE
compiles but do not link the c file
```


### [2-assembler](./2-assembler)
```
gcc -S $CFILE
compiles but do not assemble
```


### [3-name](./3-name)
```
gcc -o cisfun $CFILE
compiles and creates an executable named cisfun
```


### [4-puts.c](./4-puts.c)
```
A c program that prints a string using the puts function
```


### [5-printf.c](./5-printf.c)
```
A c program that prints a string using the printf function
```


### [6-size.c](./6-size.c)
```
A c program that prints the size of primitive types
```


### [100-intel](./100-intel)
```
gcc -S -masm=intel $CFILE
generates assembly code intel syntax
```

