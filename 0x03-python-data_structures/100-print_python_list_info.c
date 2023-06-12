#include <stdio.h>
#include <Python.h>

void print_python_list_info(PyObject *p)
{
	Py_ssize_t pSize, allocated, index = 0;
	PyObject *el;

	pSize = PyList_Size(p);
	allocated = ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List = %ld\n", pSize);
	printf("[*] Allocated = %ld\n", allocated);
	while (index < pSize)
	{
		el = PyList_GET_ITEM(p, index);
		printf("Element %ld: %s\n", index, el->ob_type->tp_name);
		index += 1;
	}
}
