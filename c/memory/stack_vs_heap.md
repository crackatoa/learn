https://gribblelab.org/CBootCamp/7_Memory_Stack_vs_Heap.html

To summarize the stack:

- the stack grows and shrinks as functions push and pop local variables
- there is no need to manage the memory yourself, variables are allocated and freed automatically
- the stack has size limits
- stack variables only exist while the function that created them, is running

heap:

The heap is a region of your computer's memory that is not managed automatically for you, and is not as tightly managed by the CPU. It is a more free-floating region of memory (and is larger). To allocate memory on the heap, you must use malloc() or calloc(), which are built-in C functions. Once you have allocated memory on the heap, you are responsible for using free() to deallocate that memory once you don't need it any more. If you fail to do this, your program will have what is known as a memory leak. That is, memory on the heap will still be set aside (and won't be available to other processes). As we will see in the debugging section, there is a tool called valgrind that can help you detect memory leaks. 


Stack

    very fast access
    don't have to explicitly de-allocate variables
    space is managed efficiently by CPU, memory will not become fragmented
    local variables only
    limit on stack size (OS-dependent)
    variables cannot be resized

Heap

    variables can be accessed globally
    no limit on memory size
    (relatively) slower access
    no guaranteed efficient use of space, memory may become fragmented over time as blocks of memory are allocated, then freed
    you must manage memory (you're in charge of allocating and freeing variables)
    variables can be resized using realloc()


