section .data
    hello db "Hello, Holberton",0
    format db "%s", 0
    newline db 10, 0

section .text
    global main

extern printf

main:
    ; Push the format string onto the stack
    push format
    ; Push the hello string onto the stack
    push hello
    ; Call printf
    call printf
    ; Clean up the stack (remove the arguments)
    add rsp, 16

    ; Print a new line
    push format
    push newline
    call printf
    add rsp, 16

    ; Exit the program
    xor rdi, rdi    ; Return 0
    ret

