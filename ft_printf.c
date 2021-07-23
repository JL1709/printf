/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:33:20 by jludt             #+#    #+#             */
/*   Updated: 2021/07/23 09:19:55 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** It must not do the buffer management like the real printf
** It will manage the following conversions: cspdiuxX%
*/

int	ft_printf(const char *format, ...)
{
	t_printf	*data;
	int		i;
	int		return_value;

	data = (t_printf *)malloc(sizeof(t_printf));
	if (!data)
		return (-1);
	data->total_length = 0;
	va_start(data->ap, format);
	i = 0;
	return_value = 0;
	while (format[i])
	{
		if (format[i] == '%')
			i = ft_print_conversion(format, data, i + 1);
		else
			return_value += write(1, &format[i], 1);
		i++;
	}
	return_value += data->total_length;
	va_end(data->ap);
	free(data);
	return (return_value);
}

// int	main(void)
// {
	// char *testpointer = NULL;
    //char *emptystring = "";
    // int int1 = 0;
    // int int2 = 0;
    // int int3 = -0;
    // int int4 = 0;
    // Currently leaking print address (%p)
    // also leaking: %x
	// ft_printf("Teasdasdasdsdst! %%%%%%%%%%%%%%%%%% %s \n", "TEST ME");
	//ft_printf("Teasdasdasdsdst! %%%%%%%%%%%%%%%% %% %s %d %d %%%%%%%% Das ist ziemlich cool! %% %% %% test mich %u %i %p %x %s %d %p %p \n", "TEST ME", int1, int2, int3, int4, testpointer, int4, NULL, 4, NULL, NULL);
// 	ft_printf("Hello %c. %s. You are %i years %%%% old.\n", 'J', "Ludt", 29);
// 	printf("char c: comparing printf and ft_printf\n");
// 	if (printf("Hello %c %c %c\n", 'A', 'B', 'C') != ft_printf("Hello %c %c %c\n", 'A', 'B', 'C'))
// 		printf("case 1: should: %i, is: %i\n", printf("Hello %c %c %c\n", 'A', 'B', 'C'), ft_printf("Hello %c %c %c\n", 'A', 'B', 'C'));

// 	write(1, "\n", 1);
	
// 	printf("char *s: comparing printf and ft_printf\n");
// 	if (printf("Hello %s %s\n", "AAA", "BBB") != ft_printf("Hello %s %s\n", "AAA", "BBB"))
// 		printf("case 1: should: %i, is: %i\n", printf("Hello %s %s\n", "AAA", "BBB"), ft_printf("Hello %s %s\n", "AAA", "BBB"));

// 	write(1, "\n", 1);
	
// 	printf("i and d: comparing printf and ft_printf\n");
// 	int min = -2147483648;
// 	int max = 2147483647;	
// 	if (printf("min int: %i, max int: %i\n", min, max) != ft_printf("min int: %i, max int: %i\n", min, max))
// 		printf("case 1i: should: %i, is: %i\n", printf("min int: %i, max int: %i\n", min, max), ft_printf("min int: %i, max int: %i\n", min, max));
// 	if (printf("min int: %i, max int: %i\n", min, max) != ft_printf("min int: %i, max int: %i\n", min, max))
// 		printf("case 1d: should: %d, is: %d\n", printf("min int: %i, max int: %i\n", min, max), ft_printf("min int: %i, max int: %i\n", min, max));

// 	write(1, "\n", 1);
	
// 	printf("u: comparing printf and ft_printf\n");
// 	unsigned int min_u = 0;
// 	unsigned int max_u = 4294967295;
// 	if (printf("min uint: %u, max uint: %u\n", min_u, max_u) != ft_printf("min uint: %u, max uint: %u\n", min_u, max_u))
// 		printf("case 1: should: %u, is: %u\n", printf("min uint: %u, max int: %u\n", min_u, max_u), ft_printf("min uint: %u, max int: %u\n", min_u, max_u));
	
// 	write(1, "\n", 1);
	
// 	printf("%%: comparing printf and ft_printf\n");
// 	if (printf("print %%\n") != ft_printf("print %%\n"))
// 	{
// 		printf("case 1: should: %%, \n");
// 		ft_printf("is: %%\n");
// 	}

// 	printf("x / X: comparing printf and ft_printf\n");
// 	unsigned int i = 4294967295;
// 	if (printf("hexadecimal_x = %x\n", i) != ft_printf("hexadecimal_x = %x\n", i))
// 		printf("should_x: %x, is: %x\n", printf("hexadecimal_x = %x\n", i), ft_printf("hexadecimal_x = %x\n", i));
// 	if (printf("hexadecimal_X = %X\n", i) != ft_printf("hexadecimal_X = %X\n", i))
// 		printf("should_X: %X, is: %X\n", printf("hexadecimal_X = %X\n", i), ft_printf("hexadecimal_X = %X\n", i));

// 	printf("p: comparing printf and ft_printf\n");
// 	int i_p = 10;
// 	char c_p = 'A';
// 	char *s_p = "BBB";

// 	void *ptr1 = &i_p;
// 	void *ptr2 = &c_p; 
// 	void *ptr3 = &s_p;
// 	void *ptr4 = &s_p[0];
// 	printf ("i_p = %p\n", ptr1);
// 	ft_printf ("i_p = %p\n", ptr1);
// 	printf ("c_p = %p\n", ptr2);
// 	ft_printf ("c_p = %p\n", ptr2);
// 	printf ("s_p = %p\n", ptr3);
// 	ft_printf ("s_p = %p\n", ptr3);
// 	printf ("s_p[0] = %p\n", ptr4);
// 	ft_printf ("s_p[0] = %p\n", ptr4);

// 	printf("percent: comparing printf and ft_printf\n");
// 	printf("%%%%\n");
// 	ft_printf("%%%%\n");

// 	printf("no c = %c ccc\n", 'c');
// 	printf("no s = %s ccc\n", (char *)NULL);
// 	printf("no p = %p ccc\n", NULL);
// 	printf("no i = %i ccc\n", 0);
// 	printf("no d = %d ccc\n", 0);
// 	printf("no u = %u ccc\n", 0);
// 	printf("no x = %x ccc\n", 0);
// 	printf("no X = %X ccc\n", 0);
// }

int main()
{
    char *testpointer = NULL;
    char *emptystring = "";
    int int1 = 0;
    int int2 = 0;
    int int3 = -0;
    int int4 = 0;
    // Currently leaking print address (%p)
    // also leaking: %x
    int ml = ft_printf("Teasdasdasdsdst! %%%%%%%%%%%%%%%% %% %s %d %d %%%%%%%% Das ist ziemlich cool! %% %% %% test mich %u %i %p %x %s %d %p %p \n", "TEST ME", int1, int2, int3, int4, testpointer, int4, NULL, 4, NULL, NULL);
	int pl =    printf("Teasdasdasdsdst! %%%%%%%%%%%%%%%% %% %s %d %d %%%%%%%% Das ist ziemlich cool! %% %% %% test mich %u %i %p %x %s %d %p %p \n", "TEST ME", int1, int2, int3, int4, testpointer, int4, NULL, 4, NULL, NULL);
    int ml2 =    ft_printf("A %% AAA %d\n", 0);
    int pl2 =       printf("A %% AAA %d\n", 0);
    int ml3 =    ft_printf("");
    int pl3 =    printf("");
    int ml4 =    ft_printf("aa\n");
    int pl4 =    printf("aa\n");
    int ml5 =    ft_printf("%%\n");
    int pl5 =       printf("%%\n");
    int ml6 =    ft_printf("%% A %% A %% \n");
    int pl6 =       printf("%% A %% A %% \n");
    int ml7 =    ft_printf("!!%d %%\n", -2147483647);
    int pl7 =       printf("!!%d %%\n", -2147483647);
    int ml8 =    ft_printf("!!%d %% %s \n", -123123, emptystring);
    int pl8 =       printf("!!%d %% %s \n", -123123, emptystring);
    int ml9 =    ft_printf("!!%d %% %s %u %p \n", -123123, emptystring, (unsigned int) 4294967295, emptystring);
    int pl9 =       printf("!!%d %% %s %u %p \n", -123123, emptystring, (unsigned int) 4294967295, emptystring);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml);
    printf("PRINTFLENGTH: %d\n", pl);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml2);
    printf("PRINTFLENGTH: %d\n", pl2);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml3);
    printf("PRINTFLENGTH: %d\n", pl3);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml4);
    printf("PRINTFLENGTH: %d\n", pl4);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml5);
    printf("PRINTFLENGTH: %d\n", pl5);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml6);
    printf("PRINTFLENGTH: %d\n", pl6);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml7);
    printf("PRINTFLENGTH: %d\n", pl7);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml8);
    printf("PRINTFLENGTH: %d\n", pl8);
    printf("================\n");
    printf("PRINTFLENGTH: %d\n", ml9);
    printf("PRINTFLENGTH: %d\n", pl9);
    return 0;
}