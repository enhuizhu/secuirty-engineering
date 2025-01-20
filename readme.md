### compile c source code
```
gcc -o {targetName} {source}.c
```

### afterwards, just run executable like this
```
./{targetName}
```

The GNU development tools include a program called ``objdump``, which can be used to examine compiled binaries. ex:

```
objdump -D bufferOverflow | grep A20 main.:
```
A20 make sure it only display 20 lines after the regular expression main.:.

The same code can be shown in intel syntax by providing an additional command-line option, ```-M intel```, to objdump.
```
objdump -M intel -D bufferOverflow | grep A20 main.:
```
GDB is used to show the state of the processor registers right before the program start.

```
GDB -q ./bufferOverflow
```
