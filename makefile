#----------------------------------------------------------------------
# Opciones para la generacion de codigo
#----------------------------------------------------------------------
CCFLAGS := -Wall -gdwarf-3 -O0 -I./include

#----------------------------------------------------------------------
# MAKE comandos
#----------------------------------------------------------------------
calculadora.exe : main.c source/factorial_fibonacci.c source/digital.c source/mcd.c source/dicotomica.c source/hanoi.c include/headers.h
	mingw32-gcc $(CCFLAGS) main.c source/factorial_fibonacci.c source/digital.c source/mcd.c source/dicotomica.c source/hanoi.c -o calculadora.exe	
	
#	mingw32-gcc $(CCFLAGS) -o main.c -o build/main.o
#	mingw32-gcc $(CCFLAGS) -o source/factorial_fibonacci.c -o build/factorial_fibonacci.o
#	mingw32-gcc $(CCFLAGS) -o source/digital.c -o build/digital.o
#	mingw32-gcc $(CCFLAGS) -o source/mcd.c -o build/mcd.o
#	mingw32-gcc $(CCFLAGS) -o source/dicotomica.c -o build/dicotomica.o
#	mingw32-gcc $(CCFLAGS) -o source/hanoi.c -o build/hanoi.o
#	mingw32-ld $(CCFLAGS) 

#----------------------------------------------------------------------
# otros make comando
#----------------------------------------------------------------------
clean : 
	@echo Recuerda que esto no siempre es necesario antes de hacer un make
	@sleep 5
	@rm -fv calculadora.exe

debug : calculadora.exe
	start gdb calculadora.exe

