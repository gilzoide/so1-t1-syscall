# Makefile do T1 de SO1
# syscall

# Precisamos do código-fonte do kernel linux para fazê-lo
# talvez cada um tenha uma versão diferente, então peguemos
# qualquer uma pra usar aqui
linux_dir = $(shell ls | grep linux)

# copia o que mudamos
# e chama o make do linux
all :
	$(MAKE) -C $(linux_dir) bzImage
