Este repositorio contiene el desarrollo de un sistema en C++ que simula la gestión de usuarios, médicos y consultas en un centro de atención médica. El proyecto forma parte de una asignatura universitaria orientada a la aplicación de conceptos de programación orientada a objetos, modularidad y uso de tipos abstractos de datos.

* Descripción general
El sistema modela distintas entidades del dominio médico, permitiendo operaciones como:

Alta y consulta de usuarios (socios).

Registro y administración de médicos.

Gestión de consultas: emergencias, diagnósticos y tratamientos quirúrgicos o farmacológicos.

Manejo de fechas, horarios y estados.

Categorías médicas y especialidades.

* Estructura del proyecto
bash

.
├── main.cpp                        # Punto de entrada

├── sistema.cpp/h                  # Lógica principal del sistema

├── isistema.h                     # Interfaz del sistema

├── medico.cpp/h                   # Gestión de médicos

├── socio.cpp/h                    # Gestión de usuarios/pacientes

├── consulta.cpp/h                 # Clase base de consultas

├── diagnostico.cpp/h             # Subclase de consulta

├── emergencia.cpp/h              # Subclase de consulta

├── tratamiento.cpp/h             # Clase de tratamiento

├── farmaco.cpp                   # Componente farmacológico

├── quirurgico.cpp/h              # Subtipo de tratamiento

├── usuario.cpp/h                 # Base común para médico y socio

├── categoria.h / estado.h        # Enumerados o constantes

├── administrador.cpp/h           # Funcionalidad administrativa

├── DtFecha.cpp/h / DtTime.cpp/h  # Tipos de datos de apoyo (fechas y horas)

├── makefile                      # Compilación automática

├── *.o                           # Archivos objeto
*Principales conceptos implementados
Herencia y polimorfismo (clases como Usuario, Consulta, Tratamiento)

Interfaces (ISistema)

Encapsulamiento y abstracción

Manejo modular y separación por responsabilidad

Simulación de flujo de atención médica

*Compilación
Para compilar el sistema completo:

bash

make
./pav
O manualmente:

bash

g++ main.cpp sistema.cpp medico.cpp socio.cpp usuario.cpp consulta.cpp diagnostico.cpp emergencia.cpp tratamiento.cpp farmaco.cpp quirurgico.cpp administrador.cpp DtFecha.cpp DtTime.cpp -o pav
./pav
Asegurate de que todos los archivos .h y .cpp estén en el mismo directorio para compilar correctamente.

Objetivo académico
Este trabajo fue desarrollado en el marco del curso de programación avanzada o proyectos integradores, con el objetivo de aplicar los fundamentos de diseño orientado a objetos en un dominio realista y complejo.

Nota: Si bien hay partes que estan incompletas, lo que estaba pautado para la evaluacion eran las que efectivamente tienen contenido, dado al poco margen de tiempo que manejamos en ese entonces en el curso.
