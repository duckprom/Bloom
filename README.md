Bloom
=====

Bloom filter in C++

Problems
====
* Now filter works only for strings. There is problem in realization hash function for some type of objects. Maybe, solution is to use Type Traits which added in C11++.

* I don't like this part of makefile:
<br>
```
    all: clean main
```
But when I do make all without clean I get:
<br>
```
    make: Nothing to be done for `all'.
```
