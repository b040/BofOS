[BITS 64]
global idt_flush
extern idt_pointer

idt_flush:
    lidt [abs idt_pointer]
    ret
