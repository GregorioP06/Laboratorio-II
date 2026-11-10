.text
.global sumodds
.type sumodds, %function

@ parametri:
@ r0 = *V
@ r1 = n

@ r2 = res
@ r3 = i
@ r12 = V[i]
@ r4 = V[i] & 0x1

sumodds:
    push {r4}
    mov r2, #0
    mov r3, #0
loop_start:
    cmp r3, r1
    beq loop_end        @ se i == n, vai a loop_end
    ldr r12, [r0, r3, lsl #2]    @ r12 = V[i]
    ands r4, r12, #0x1       @ V[i] & 0x1
    addne r2, r2, r12        @ se ^^^ != 0 (ovvero V[i] è dispari) -> r2 += V[i]
    add r3, #1      @ i++
    b loop_start
loop_end:
    mov r0, r2      @ res in r0 per il return
    pop {r4}
    mov pc, lr
