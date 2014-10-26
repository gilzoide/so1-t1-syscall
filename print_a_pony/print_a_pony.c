
#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage int sys_print_a_pony(void) { 
	
	// HELLO, I'M A PONY! xD
	char pony_string[] = "\
 _   _      _ _          ___ _                                             _\n\
| | | | ___| | | ___    |_ _( )_ __ ___     __ _   _ __   ___  _ __  _   _| |\n\
| |_| |/ _ \\ | |/ _ \\    | ||/| '_ ` _ \\   / _` | | '_ \\ / _ \\| '_ \\| | | | |\n\
|  _  |  __/ | | (_) |   | |  | | | | | | | (_| | | |_) | (_) | | | | |_| |_|\n\
|_| |_|\\___|_|_|\\___( ) |___| |_| |_| |_|  \\__,_| | .__/ \\___/|_| |_|\\__, (_)\n\
                    |/                            |_|                |___/\n\
   ######\n\
  #;;;;;;##\n\
 ##;####;;;#\n\
#;;#;;;;#;;;##+++\n\
#;;#;;;;#;;;;;+  +\n\
#;;#;;;#;;;;;#+  +\n\
#;;;##;;;;;;##+   +\n\
 #;;;;#######   + +\n\
  ##;;;;;#      + +\n\
    ##### ## #    +\n\
    +    #..#     #\n\
    +   #.+..##  +#\n\
    +  ##..+.    +#\n\
    +  ####+.#   +;#\n\
    +  #.##+.    +;#          #####\n\
   ++  ####+    +;;#        ##;;;;;##\n\
   +    ##+     +;;#       #;;;;;;;;;##\n\
   + +          +;;#      #;;;;;;;;;;;;#\n\
    ++          +;;#      #;;;;;;;;;;;;;#\n\
      ++++++    #;###    #;;;;###;;;;;;;;#\n\
           +   #;#;;;#+++#;;;#   #;;;;;;;;#\n\
           +  #;#;;;;#    +##    #;;;;;;;;;#\n\
           +  #;#;;#;# ++ +      #;;;;;;;;;;#\n\
           +  #;;##;;#     +     #;;;;;;;;;;#\n\
           +   #;;;;#   ++ +    #;;;;;;;;;;;#\n\
            +   ####       +    #;;##;;;;;;;#\n\
            +          ++  +   #;;#;;#;;;;;;#\n\
             +       +    +    #;#;;;#;;;;;;;#\n\
             ++       +   +    #;#;#;#;;;;;;;#\n\
             +++  ++++++  ++   #;;#;;#;;;;;;;#\n\
             + +  +  + ++   +  #;;;;#;;;;;;;;#\n\
             + +  +   + +   +   ####;;;;;;;;;##\n\
             + +  +   +  +  +      #;;;;;;;;;;;#\n\
            + +   +   +  +  +      #;;;;;#;;;;;#\n\
            + +   +   +  +   +    #;;;;###;;;;;#\n\
            + +   +   +  +   +    #;;;#;;#;;;;;#\n\
           +  +   +   +  +   +    #;;#;;;;#;;;#\n\
          ++ +    +   +  +   +    #;;#;;#;;###\n\
          +  +    +   +  +    +    #;;##;;;#\n\
          ++++    +   ++++    +     #;;;;;;#\n\
            +    +       +    +      ######\n\
            ++++++       ++++++\n";

	// KERN_INFO diz pro kernel que é só uma informação esse print
	// senão ele põe como mensagem de debug, ou warning, e não é assim a vida =P
	printk (KERN_INFO pony_string);
	return 1;
}