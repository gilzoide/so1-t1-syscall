# Makefile do T1 de SO1
# syscalls

# Precisamos do código-fonte do kernel linux para fazê-lo
# talvez cada um tenha uma versão diferente, então peguemos
# qualquer uma pra usar aqui
linux_dir = $(shell ls | grep linux)

# diretório das tabelas de syscall
syscall_table_dir = $(linux_dir)/arch/x86/syscalls
syscalls_header_dir = $(linux_dir)/include/linux

# diretório do unistd
unistd_dir = /usr/include/asm

# diretório dos códigos-fonte do kernel
kernel_src_dir = $(linux_dir)/kernel

# código-fonte da nova syscall (altere com argumento para make)
new_syscall = print_a_pony.c

# copia o que mudamos
# e chama o make do linux
all: syscall_table syscalls_header source_code_and_makefile
	$(MAKE) -C $(linux_dir) bzImage

syscall_table: syscall_32.tbl syscall_64.tbl
	cp $< $(syscall_table_dir)/

syscalls_header: syscalls.h
	cp $< $(syscalls_header_dir)/

source_code_and_makefile: $(new_syscall) kernel_Makefile
	cp $< $(kernel_src_dir)/

get_files:
	cp $(syscall_table_dir)/syscall_32.tbl ./
	cp $(syscall_table_dir)/syscall_64.tbl ./
	cp $(syscalls_header_dir)/syscalls.h   ./
	cp $(kernel_src_dir)/Makefile          ./kernel_Makefile

