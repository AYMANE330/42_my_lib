# 42_my_lib

## Description
42_my_lib is a library of useful functions that you can use in your C programs. The library is related to the 42 cursus projects, a series of coding projects offered by the French coding school, École 42.

## How to Use
To use the 42_my_lib , you first need to create the library file by compiling the source files. Here are the steps:

1. Download or clone this project.
2. Run the `make` command.
```
git clone https://github.com/AYMANE330/42_my_lib
cd 42_my_lib
make
```
3. You should see a `libs.a` file and some object files (`.o`).
4. Now you can use the library in your C programs by including the header files and linking the library. For example:
```c
#include "includes.h"
#include <stdio.h>

int main()
{
    char str[] = "Hello, world!";
    printf("Length of string: %d\n",(int)ft_strlen(str));
    return 0;
}
```
5. To clean up run the command `make clean`.
6. now u can compile :
```
cc <file.c> libs.a -o <name of ur program>
```
## Contribution
If you would like to contribute to the Libft library, feel free to create a pull request. Before submitting your changes, please make sure that your code follows the [42 norm](https://github.com/42School/norminette). 

## License
This project is licensed under the MIT License - see the [LICENSE.txt](LICENSE.txt) file for details.
