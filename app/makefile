kompilator=g++
standard=-std=c++14
optymalizacja=-O3
# optymalizacja=
# debug=-g
debug=
profilowanie=-pg
dane=../dat

__ : main

	# POPRAWNE DANE:						
	./main 	-i ../dat/wejscie.txt	 -o 

	./main 	-i ../dat/wejscie.txt					# trywialny przyklad
	./main 	-i ../dat/wejscie2.txt					# biale znaki
	./main 	-i ../dat/wejscie3.txt					# duze wartosci
	./main	-i ../dat/wejscie4.txt					# remis
#	./main 	-i ../dat/dlugo.txt					# program liczy pare sekund
	./main  -i ../dat/wejscie.txt	-o ../dat/wynik.txt		# wynik w pliku
	./main  -o ../dat/wynik.txt	-i ../dat/wejscie1.txt	
	./main 	-i ../dat/wejscie.txt	-o				# nie podano nazwy poprzelaczniku	

	#NIEPOPRAWNE DANE:
	
	./main 	-i  ../dat/zle1.txt					# a b c d
	./main 	-i  ../dat/zle2.txt					# ujemne wartosci
	./main 	-i  ../dat/zle3.txt					# zmiennoprzeciwnkowe	
	./main 	-i  ../dat/zle4.txt					# pusty plik
	./main 	-i  ../dat/sto.txt					# za duza liczba partii
	
	# WYMAGANE WEJSCIE STANDARDOWE:
	
	./main 	-i ../dat/nieistnieje					# plik ktory nie istnieje
	./main
	./main 	-h							# wywolanie z pomoca

	# NIEPOPRAWNE WYWOŁANIE:

	./main	-q  ../dat/wejscie.txt	-o ../dat/wynik.txt		# niepoprawny przelacznik
	./main 	-i  ../dat/wyjscie.txt 	-i ../dat/wejscie.txt		# wielokrotne wykorzystanie przelacznika	
			
	# DZIAŁAA  :)))))))))))))))))))))))) :
	
	cat ../dat/wejscie.txt | ./main 
	./main < ../dat/wejscie.txt > ../dat/wejscie.out


		
	
	
main : dhondt.cpp
	$(kompilator) $(standard) $(debug) $(optymalizacja) -pedantic-errors -o $@ $^ 
