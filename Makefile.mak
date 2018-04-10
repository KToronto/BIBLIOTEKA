CPP    = g++
RM     = rm -f
OBJS   = Konsola.o \
         Rezerwacja.o \
         Wypozyczenie.o \
         ListaWypozyczen.o \
         ListaRezerwacji.o \
         Administrator.o \
         Ksiazka.o \
         KatalogKsiazek.o \
         Recenzja.o

LIBS   =
CFLAGS =

.PHONY: BIBLIOTEKA.exe clean clean-after

all: BIBLIOTEKA.exe

clean:
	$(RM) $(OBJS) BIBLIOTEKA.exe

clean-after:
	$(RM) $(OBJS)

BIBLIOTEKA.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

Konsola.o: Konsola.cpp Administrator.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

Rezerwacja.o: Rezerwacja.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

Wypozyczenie.o: Wypozyczenie.cpp ListaWypozyczen.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

ListaWypozyczen.o: ListaWypozyczen.cpp Wypozyczenie.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

ListaRezerwacji.o: ListaRezerwacji.cpp Rezerwacja.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

Administrator.o: Administrator.cpp KatalogKsiazek.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

Ksiazka.o: Ksiazka.cpp Recenzja.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

KatalogKsiazek.o: KatalogKsiazek.cpp Ksiazka.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

Recenzja.o: Recenzja.cpp
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

