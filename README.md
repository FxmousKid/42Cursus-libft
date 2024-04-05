## <img src="https://github.com/devicons/devicon/blob/master/icons/c/c-original.svg" title="C" alt="C Logo" width="55" height="55" align="left" />&nbsp;  <p align="center">42Paris - libft</p>  <img src="https://github.com/devicons/devicon/blob/master/icons/c/c-original.svg" title="C" alt="C Logo" width="55" height="55" align="right" />&nbsp;
</br>
<hr/>
</br>

## ⚙️ Details

### Mandatory Part

#### Memory Functions
- **ft_memset**: Set bytes in a block of memory.
- **ft_bzero**: Zero out bytes in a block of memory.
- **ft_memcpy**: Copy memory area.
- **ft_memmove**: Copy memory area, handling overlapping regions.
- **ft_memchr**: Locate character in block of memory.
- **ft_memcmp**: Compare two blocks of memory.
- **ft_calloc**: Allocate memory for an array and initialize it to zero.

#### String Functions
- **ft_strlen**: Calculate the length of a string.
- **ft_strlcpy**: Copy strings with size control.
- **ft_strlcat**: Concatenate strings with size control.
- **ft_strchr**: Locate character in a string.
- **ft_strrchr**: Locate character in a string (reverse).
- **ft_strnstr**: Locate a substring in a string with length control.
- **ft_strncmp**: Compare two strings with length control.
- **ft_atoi**: Convert string to integer.
- **ft_strdup**: Duplicate a string.
- **ft_substr**: Allocate and return a substring of a string.
- **ft_strjoin**: Concatenate two strings.
- **ft_strtrim**: Trim leading and trailing characters from a string.
- **ft_split**: Split a string into an array of substrings.
- **ft_itoa**: transforms a int into a C string
- **ft_strmapi**: applies a function to array elems and returns the new array
- **ft_striteri**: applies a function directly on array elements

#### File Functions
- **ft_putchar_fd**: Output a character to a file descriptor.
- **ft_putstr_fd**: Output a string to a file descriptor.
- **ft_putendl_fd**: Output a string followed by a newline to a file descriptor.
- **ft_putnbr_fd**: Output an integer to a file descriptor.

#### Character Functions
- **ft_isalpha**: Check if character is alphabetic.
- **ft_isdigit**: Check if character is a digit.
- **ft_isalnum**: Check if character is alphanumeric.
- **ft_isascii**: Check if character is ASCII.
- **ft_isprint**: Check if character is printable.

<br/>

### Bonus Part

#### Linked List Functions
- **ft_lstnew**: Allocate and initialize a new list node.
- **ft_lstadd_front**: Add a node to the beginning of a list.
- **ft_lstsize**: Count the number of nodes in a list.
- **ft_lstlast**: Retrieve the last node of a list.
- **ft_lstadd_back**: Add a node to the end of a list.
- **ft_lstdelone**: Delete a node from a list.
- **ft_lstiter**: Iterate over a list and apply a function to each element.
- **ft_lstmap**: Create a new list resulting from the application of a function to each element of a list.


# 🪧 Usage 

 1. git clone the repo
 2. ```make``` to get the **libftprintf.a** file, 
 3. move **libftpritnf.a** and **ft_printf.h** to where you you have your project
 4. include the ```libft.h``` header in your header / main.c
 5. Compile for example your main.c with ```cc [your flags] -I . main.c libft.a```
