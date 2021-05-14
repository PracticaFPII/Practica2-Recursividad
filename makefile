#----------------------------------------------------------------------
# Opciones para la generacion de codigo
#----------------------------------------------------------------------
CCFLAGS := -Wall -gdwarf-3 -O0 -I./include

#----------------------------------------------------------------------
# MAKE comandos
#----------------------------------------------------------------------
calculadora.exe : main.c source/factorial_fibonacci.c source/digital.c source/mcd.c source/dicotomica.c source/hanoi.c include/headers.h
	mingw32-gcc $(CCFLAGS) main.c source/factorial_fibonacci.c source/digital.c source/mcd.c source/dicotomica.c source/hanoi.c -o calculadora.exe	
	

#----------------------------------------------------------------------
# otros comandos - CLEAN y DEBUG (con gdb)
#----------------------------------------------------------------------
clean : 
	@echo Recuerda que esto no siempre es necesario antes de hacer un make
	@sleep 5
	@rm -fv calculadora.exe

debug : calculadora.exe
	start gdb calculadora.exe

