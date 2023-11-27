#include "main.h"
size_t print_list(const list_t *h)
{
	unsigned int num = 0, temp = 0;
	while (num < h->len)
	{
		if (h->str != NULL)
		{
			while (h->str[temp] != '\0')
			{
				_putchar(h->str[temp]);
				temp++;
			}
		}
		else
		{
			h->str = "(nil)";
			while (h->str[temp] != '\0')
                        {
                                _putchar(h->str[temp]);
                                temp++;
                        }
		}
		num++;
		return (h->next);
	}
return (h->next);
}
