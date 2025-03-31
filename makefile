all: main.o sistema.o administrador.o comun.o consulta.o diagnostico.o DtFecha.o DtTime.o emergencia.o farmaco.o medico.o quirurgico.o socio.o tratamiento.o usuario.o
	g++ -o main main.o sistema.o administrador.o comun.o consulta.o diagnostico.o DtFecha.o DtTime.o emergencia.o farmaco.o medico.o quirurgico.o socio.o tratamiento.o usuario.o
main.o: main.cpp
	g++ -c main.cpp
sistema.o: sistema.h sistema.cpp
	g++ -c sistema.cpp
administrador.o: administrador.h administrador.cpp
	g++ -c administrador.cpp
comun.o: comun.h comun.cpp
	g++ -c comun.cpp
consulta.o: consulta.h consulta.cpp
	g++ -c consulta.cpp
diagnostico.o: diagnostico.h diagnostico.cpp
	g++ -c diagnostico.cpp
DtFecha.o: DtFecha.h DtFecha.cpp
	g++ -c DtFecha.cpp
DtTime.o: DtTime.h DtTime.cpp
	g++ -c DtTime.cpp
emergencia.o: emergencia.h emergencia.cpp
	g++ -c emergencia.cpp
farmaco.o: farmaco.h farmaco.cpp
	g++ -c farmaco.cpp
medico.o: medico.h medico.cpp
	g++ -c medico.cpp
quirurgico.o: quirurgico.h quirurgico.cpp
	g++ -c quirurgico.cpp
socio.o: socio.h socio.cpp
	g++ -c socio.cpp
tratamiento.o: tratamiento.h tratamiento.cpp
	g++ -c tratamiento.cpp
usuario.o: usuario.h usuario.cpp
	g++ -c usuario.cpp
clean:
	rm *.o
	rm main