section .data
    hello db "Hello, Holberton", 10, 0
    format db "%s", 10, 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello]
    mov rsi, format
    xor rax, rax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
