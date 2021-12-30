# printf
This repo provides an own printf that can handle the following conversions: 

## Installation

#### 1) Clone this repository 
```
git clone git@github.com:JL1709/Libft.git
```

#### 2) Execute Makfile (creates library file "libft.a")
```
cd Libft/
make
```

#### 3)  Run program with library
Include header file to you code
```
#include "pathToLibftFolder"/libft.h
```
For example:
```ruby
#include <stdio.h>
#include "Libft/libft.h"

int main(void)
{
	printf("ft_strlen(\"test\") = %d\n", (int)ft_strlen("test"));

	return (0);
}
```

Compile your code with library file, e.g.
```
gcc main.c "pathToLibftFolder"/libft.a
```

Run executable
```
./a.out
```

## Supported functions
- atoi
- bzero
- calloc
- isalnum
- isalpha
- isascii
- isdigit
- isprint
- itoa
- lstadd_back
- lstadd_front
- lstclear
- lstdelone
- lstiter
- lstlast
- lstmap
- lstnew
- lstsize
- memccpy
- memchr
- memcmp
- memcpy  
- memmove
- memset
- putchar_fd
- putendl_fd
- putnbr_fd
- putstr_fd
- split
- strchr
- strdup
- strjoin
- strlcat
- strlcpy
- strlen
- strmapi
- strncmp
- strnstr
- strrchr
- strtrim
- substr
- tolower
- toupper
		
Further explanations about the functions can be found inside the code

