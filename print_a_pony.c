
#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage int sys_print_a_pony(void) { 
	
	pony_string = "Hello, I'm a Pony!\n";

	printk(%s, pony_string);
	return 1;
}