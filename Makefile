all: test_complex

run: all
	echo "Running:test_complex"
	./test_complex

clean:
	rm -f test_complex test_complex.o
