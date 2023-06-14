#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - prints data of the PyBytesObject
 * @p: the PyObject
 */

void print_python_bytes(PyObject *p)
{
	Py_ssize_t size = 0, index = 0;
	char *string = NULL;

	printf("[.] bytes object info\n");

	if (!PyBytes_CheckExact(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	if (PyBytes_AsStringAndSize(p, &string, &size) != -1)
	{
		printf("  size: %zd\n", size);
		printf("  trying string: %s\n", string);
		printf("  first %zd bytes:", size < 10 ? size + 1 : 10);
		while (index < size + 1 && index < 10)
		{
			printf(" %02hhx", string[index]);
			index++;
		}
		printf("\n");
	}
}

/**
 * print_python_list - prints data of the PyListObject
 * @p: the PyObject
 */

void print_python_list(PyObject *p)
{
	Py_ssize_t size = 0;
	PyObject *item;
	int index = 0;

	if (PyList_CheckExact(p))
	{
		size = PyList_Size(p);

		printf("[*] Python list info\n");
		printf("[*] Size of the Python List = %zd\n", size);
		printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);

		while (index < size)
		{
			item = PyList_GET_ITEM(p, index);
			printf("Element %d: %s\n", index, item->ob_type->tp_name);
			if (PyBytes_Check(item))
				print_python_bytes(item);
			index++;
		}
	}
}
