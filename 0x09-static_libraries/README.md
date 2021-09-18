Building And Using Static And Shared "C" Libraries

Compile Time - here we need to tell the linker to scan the shared library whil
building the executable program, so it will be convinced that no symbols are missing. It will not really take the object files from the shared library and insert them into the program.

Run Time - when we run the program, we need to tell the system's dynamic loader (the process in charge of automatically loading and linking shared libraries into the running process) where to find our shared library.