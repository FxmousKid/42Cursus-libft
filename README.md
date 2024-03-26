# This is the repo which contains my libft project

<br/>

## Test it
I made a main file that can test all your function, and is progress-agnostic, which basically makes it not test the functions that arent availlable in 
the libft.h header.

### Be sure to use you use this file strcuture for all  .c and .h files and the my makefile to work:

<br/>

```
├── Makfile    <- this the makefile of this repo !
├── include/
│   └── libft.h
└── src/
    ├── bonus/
    │   ├── ft_lstsize_bonus.c
    │   └── *_bonus.c
    ├── main.c    <- this is the main.c of this repo !
    ├── ft_toupper.c
    ├── ft_tolower.c
    └── *.c
```

<br/>

Now to use it, you have to edit my makefile accordingly to your progression, which is inevitable sadly.
So let's say if you have completed only ft_atoi, your "C_FILES" variable in your makefile would have to look like this :
```
C_FILES = ft_atoi.c
```
And just add more functions as you go, same thing for your "C_FILES_BONUS" variable

<br/>


