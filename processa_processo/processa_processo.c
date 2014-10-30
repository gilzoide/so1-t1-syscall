#include <linux/sched.h>	// send_sig
#include <linux/kernel.h>	// printk
#include <linux/random.h>	// get_random_int
#include <linux/syscalls.h>	// asmlinkage

asmlinkage int sys_processa_processo (void) {
	printk (KERN_INFO 
			"Processo %d esta sendo processado\n"
			"O advogado apresenta as evidências\n"
			"O juri dá o veredito: ", current->pid);

	// culpado!
	if (get_random_int () % 4) {
		printk (KERN_INFO
				"CULPADO!\n"
				"Eh declarada pena de morte, sem direito a ultimos desejos.\n"
				"Matando processo:\n"
				"  _____ \n"
				"  |/  | \n"
				"  |   O \n"
				"  |  /|\\\n"
				"  |  / \\\n"
				"  |     \n"
				"_/|\\_   \n");

		send_sig (SIGKILL, current, 0);
	}
	// ou não
	else {
		printk (KERN_INFO
				"INOCENTE!\n"
				"Processo pode prosseguir com seu processamento.\n");
	}

	return 0;
}
