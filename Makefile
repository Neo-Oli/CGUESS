CXX?=g++
cguess: source/*.cpp source/*.hpp
	$(CXX) $(LDFLAGS) $(CPPFLAGS) source/cguess.cpp -I source -o cguess

install: cguess
	install cguess $(PREFIX)/bin/cguess

uninstall:
	rm -f $(PREFIX)/bin/cguess

clean:
	rm -f cguess

.PHONY: clean install uninstall
