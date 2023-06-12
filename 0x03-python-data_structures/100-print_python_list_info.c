#include <stdio.h>
#include <Python.h>

void print_python_list_info(PyObject *p)
{
	Py_ssize_t pSize, allocated, index = 0;
	PyObject *element;

	pSize = PyList_Size(p);
	allocated = ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List = %ld\n", pSize);
	printf("[*] Allocated = %ld\n", allocated);
	while (index < pSize)
	{
		element = PyList_GET_ITEM(p, index);
		printf("Element %ld: %s\n", index, element->ob_type->tp_name);
		index += 1;
	}
}
