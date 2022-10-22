# Header Bundles for C++23 Standard Library
 
Provides a similar "API" to Microsoft's C++20 modular standard library (std.core, std.threading, etc.).

For example, instead of

    import std.core;

You use

    #include <std/core.hpp>

There is also a "c.hpp" for the libraries inherited from C in the C++ standard library, and also a "library.hpp" for including the entire C++ standard library all at once.

Headers not yet implemented in compilers will be guarded by feature-testing macros.
