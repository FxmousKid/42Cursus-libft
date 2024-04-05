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
- **ft_memccpy**: Copy string until a specified character is found.
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

#### Character Functions
- **ft_isalpha**: Check if character is alphabetic.
- **ft_isdigit**: Check if character is a digit.
- **ft_isalnum**: Check if character is alphanumeric.
- **ft_isascii**: Check if character is ASCII.
- **ft_isprint**: Check if character is printable.

### Bonus Part

#### List Functions
- **ft_lstnew**: Allocate and initialize a new list node.
- **ft_lstadd_front**: Add a node to the beginning of a list.
- **ft_lstsize**: Count the number of nodes in a list.
- **ft_lstlast**: Retrieve the last node of a list.
- **ft_lstadd_back**: Add a node to the end of a list.
- **ft_lstdelone**: Delete a node from a list.


# 🪧 Usage 

 1. git clone the repo
 2. ```make``` to get the **libftprintf.a** file, 
 3. move **libftpritnf.a** and **ft_printf.h** to where you you have your project
 4. include the ```libft.h``` header in your header / main.c
 5. Compile for example your main.c with ```cc [your flags] -I . main.c libft.a```
