```assembly
section .data
format db 'Hello, Holberton', 0

section .text
extern printf

global main

main:
mov edi, format
xor eax, eax
call printf
mov eax, 0
ret
```
