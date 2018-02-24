 
# stale kompilacji:
kompilator=g++ 
standard=-std=c++14
debug=-g
#debug=

# kompilacja i uruchomienie:

__ : main
	# Czytamy ze standadowego wejscia na standadowe wyjscie: (Ctrl + d  konczy wprowadzanie danych z klawiatury)
	./main
	
	# czytamy z pliku wejsciowego  i piszemy na standadowe wyjscie
	./main test
	cat test | ./main
	./main < test
	
	# czytamy z pliku wejsciowe i piszemy do pliku wyjsciowego
	./main test wynik
	cat test | ./main > wyjscie
	./main < test > wyjscie
 
main: main.cpp 
	$(kompilator) $(standard) $(debug) -o $@ $^

