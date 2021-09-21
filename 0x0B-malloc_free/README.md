0x0B. C - malloc, free

Dynamic memory allocation

malloc

void *malloc(size_t size);

The malloc() function allocates size bytes and returns a pointer to the allocated
memory

The memory is not initialized

free

When the allocated memory is not needed anymore, you must return it to the

operating system by calling the function free.

void free(void *ptr);
