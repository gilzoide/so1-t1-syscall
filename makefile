# Makefile do T1 de SO1
# syscall

# Precisamos do código-fonte do kernel linux para fazê-lo
# talvez cada um tenha uma versão diferente, então peguemos
# qualquer uma pra usar aqui
linux_dir = $(shell ls | grep linux)
# diretório das tabela de syscall
syscall_table_dir = $(linux_dir)/arch/x86/syscalls
syscalls_header_dir = $(linux_dir)/include/linux
# diretório do unistd
unistd_dir = /usr/include/asm/

# copia o que mudamos
# e chama o make do linux
all : syscall_table syscalls_header
	$(MAKE) -C $(linux_dir) bzImage

syscall_table : syscall_32.tbl
	cp $< $(syscall_table_dir)

syscalls_header : syscalls.h
	cp $< $(syscalls_header_dir)
