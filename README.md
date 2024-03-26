# This is the repo which contains my libft project

<br/>

## Test it
I made a main file that can test all your function, and is progress-agnostic, which basically makes it not test the functions that arent availlable in 
the libft.h header.

## Set up

1) Put in in you src folder along your other codes :
```
└── src/
    ├── main.c
    ├── file1.c
    ├── file2.c
    └── ...
```
2) Add it to your source files list in your Makefile

3) add the test rule to your makefile :
```Makefile
test : $(OBJ_FILES)
    cc -Wall -Wextra -Werror $(OBJ_FILES) -o test_library
```
Where OBJ_FILES stores your object files, which can also be your bonus objects files.

<br/>

and now executing ```make test``` in the root of your project should generate **test_library** which when executed runs the tests  
