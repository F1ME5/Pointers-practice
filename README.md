# Pointers-practice
C++ program where I practiced pointers theory (OOP included).

First I wanna emphasize that these cases are not the same:
	a) Array of pointers to pointers (int** ptr[10]),
	b) Pointer to an array of pointers (int** ptr = new int*[10]).
      
"a" is a structured data type / "b" is a primitive data type. That's why the memory usage is different in both cases.

The program only does four things: create, fill, print and delete a matrix of 10x10.
The data structure is T** ptr[n]. this means an array of pointers to pointers. Each pointer (in this case) points to an array of pointers to T data. As a result, we got a matrix. Here we're using the two cases before mentioned.

If you wanna take a look of classes, templates, macros, constructors, destructors and output flow operators, this program has some examples of those topics. 
