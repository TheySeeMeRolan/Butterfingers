Make:
	g++ -c -g *.cpp
	g++ -o main *.o
run:
	./main
	
clean:
	rm -f *o main