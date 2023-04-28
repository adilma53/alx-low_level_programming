section .data
    message db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main
    extern printf

main:
    push message
    push format
    call printf
    add rsp, 16
    ret
