## <img src="https://github.com/devicons/devicon/blob/master/icons/c/c-original.svg" title="C" alt="C Logo" width="55" height="55" align="left" />&nbsp;  <p align="center">42Paris - Ft_printf</p>  <img src="https://github.com/devicons/devicon/blob/master/icons/c/c-original.svg" title="C" alt="C Logo" width="55" height="55" align="right" />&nbsp;
</br>
<hr/>
</br>

# ⚙️ Details 

The goal is to recreate the ```prinft()``` function, and calling it ```ft_printf()``` with the following details :
1. ft_printf doesn't implement the buffer management of the original printf
2. We have to manae the following conversions : cspiudxX%
3. No field minimum width
4. No flags 

</br>

# 📖 Conversion specifiers

<table>
    <thead>
        <tr>
            <th>Format Specifier</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
	</thead>
        <tr>
            <td align="center">%</td>
            <td>% followed by another % character writes % to the screen.</td>
        </tr>
        <tr>
            <td align="center">c</td>
            <td>writes a single character.</td>
        </tr>
        <tr>
            <td align="center">s</td>
            <td>writes a character string.</td>
        </tr>
        <tr>
            <td align="center">p</td>
            <td>writes an implementation-defined character sequence defining a pointer address.</td>
        </tr>
        <tr>
            <td align="center">d or i</td>
            <td>writes a signed integer in decimal representation.</td>
        </tr>
        <tr>
            <td align="center">u</td>
            <td>writes an unsigned integer in decimal representation.</td>
        </tr>
        <tr>
            <td align="center">x or X</td>
            <td>writes an unsigned integer in hexadecimal representation.</td>
        </tr>
    </tbody>
</table>

</br>
<hr/>

# 🪧 Usage 

 1. git clone the repo
 2. ```make``` to get the **libftprintf.a** file, 
 3. move **libftpritnf.a** and **ft_printf.h** to where you you have your project
 4. include the ```ft_printf.h``` header in your header / main.c
 5. Compile for example your main.c with ```cc [your flags] -I . main.c libftprint.a```
