#include <stdio.h>
#include <python.h>

/**
  * print_python_list_info - prints python list info
  *
  * @p: pyobject
  * Return: no return
  */
void print_python_list_info(pyobject *p)
{
	long int size, i;
	pyListobject *list;
	pyobject *item;

	size = py_SIZE(p);
	printf("[*] Size of the python List = %ld\n", size);

	list = (pyListobject *)p;
	printf("[*] Allocated = %ld\n", list->allocated);

	for (i = 0; i < size; i++)
	{
		item = pyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, py_TYPE(item)->tp_name);
	}
}
