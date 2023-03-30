section .data
    msg db 'Hello, Holberton!', 0xA, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    
    lea rdi, [msg]
    mov al, 0
    call printf
    
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

