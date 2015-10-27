all: fibonacci

run:
	echo "Running:fibonacci"
	./fibonacci

clean:
	rm -f fibonacci fibonacci.o
