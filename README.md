# Proyecto_Algoritmos_Seccion-A-_grupocteam-
Proyecto de clase de algoritmos seccion A dia sabado proyecto final

Simulador de Viaje Espacial
Objetivo general
En este proyecto, se propone desarrollar un programa en C++ que simule un viaje intergaláctico, en el rol de
capitán de una nave espacial, donde el jugador debe gestionar recursos críticos para llegar a su destino. Este
proyecto permitirá aplicar conceptos fundamentales de programación como variables, estructuras de control,
ciclos, condicionales y generación de números aleatorios.
Objetivos de aprendizaje
• Analiza, descompone y resuelve problemas de forma efectiva, aplicando el concepto de Diagramas de
Flujo para plantear la mejor solución.
• Implementa correctamente el uso de variables y operaciones aritméticas en C++.
• Aplica de forma eficiente el uso de condicionales y ciclos en la codificación de su programa, para que sea
interactivo y fácil de entender para el usuario; guiándolo de forma clara a través de las opciones
disponibles.
• Incluye comentarios en el código de su programa, para explicar la lógica detrás de cada operación
aritmética, condicional y ciclo utilizado en su solución.
• El estudiante participa en las actividades de manera positiva, compartiendo responsabilidades y
trabajando en equipo para lograr objetivos comunes.
Descripción
El jugador es el capitán de una nave espacial en un viaje intergalác�co. Debe ges�onar combus�ble, oxígeno,
suministros y la integridad de la nave para llegar a su des�no. Se enfrenta a eventos aleatorios como
meteoritos, encuentros con alienígenas o fallas en la nave.
Características del juego:
• El jugador inicia con una cantidad fija de:
1. Combustible: Necesario para avanzar.
o 30 unidades
2. Oxígeno: Se consume diariamente.
o 50 unidades
3. Suministros: Alimentos y herramientas para reparaciones.
o 40 unidades
4. Integridad de la nave: Se daña con eventos peligrosos.
o Integridad inicial al 100%
Página 2 de 5
• Cada día se puede elegir una acción:
1. Explorar un planeta cercano:
o Gasta combustible: -15 unidades.
o Pueden ocurrir cada uno de los siguientes sucesos:
 Encontrar Oxigeno:
a. De 20 a 40 unidades (aleatoriamente)
b. Probabilidad encontrarlo en el plantea: 60%
 Combustible
a. De 10 a 30 unidades (aleatoriamente)
b. Probabilidad encontrarlo en el plantea: 25%
 Suministros
a. De 30 a 100 unidades (aleatoriamente)
b. Probabilidad encontrarlo en el plantea: 50%
 Tormenta eléctrica
a. Daña la integridad de la nave de 10% a 20% (aleatoriamente)
b. Probabilidad encontrarlo en el plantea: 25%
 Aterrizaje forzado
a. Daña la integridad de la nave de 10% a 20% (aleatoriamente)
b. Probabilidad encontrarlo en el plantea: 25%
2. Reparar la nave:
o Gasta suministros.
 Por cada % de integridad reparado se gasta 10 unidades de suministros
o Recupera integridad de la nave.
 Debe de preguntar cual porcentaje quiere reparar.
 La integridad no puede sobrepasar el 100%
3. Enviar señales:
o Puede atraer ayuda o problemas (Solo puede ocurrir un evento y ambos �enen la misma
probabilidad de ocurrencia).
 Ayuda con combustible: +60 unidades de combustible
 Piratas espaciales asaltan la nave, -15% de integridad, -20 suministros
• Cada noche se consumen recursos, y ocurre un evento aleatorio:
1. Recursos:
o Oxigeno: -20 unidades
o Suministros: -30 unidades
2. Solo puede ocurrir un evento y hay 15% de probabilidad de que ocurra uno:
o Tormenta cósmica: Reduce oxígeno -10 unidades.
o Encuentro alienígena: Puede ser amistoso (recibe recursos +20 de combustible) o hostil
(dañan la nave -10% de integridad). Solo puede ocurrir uno y ambos tienen la misma
probabilidad.
Página 3 de 5
o Meteoritos: El jugador decide si maniobrar (gasta combustible una cantidad aleatoria entre
10 y 30 unidades) o recibir el impacto (daño a la nave, una cantidad aleatoria entre %15 y
%25).
• El juego termina cuando:
1. Llega al destino después de 10 días.
2. Se queda sin oxígeno, combustible o la nave es destruida. Game Over
3. Se rinde.
Cada vez que se ejecute una acción y que finalice un día se deben de mostrar la nueva cantidad de todos los
recursos.
Para resolver el proyecto debe utilizar los siguientes temas:
• Uso de variables para recursos y estados de la nave.
• Impresión en pantalla para narrar eventos.
• Lectura de valores para decisiones del jugador.
• match para elegir acciones diarias.
• while para el ciclo de viaje.
• if para manejar eventos y consecuencias.
• Random para generar eventos inesperados.
Evaluación:
El proyecto será evaluado en función de la correcta implementación de las opciones, el uso de operaciones
aritméticas, condicionales, ciclos, la interactividad del programa y la claridad del código; de acuerdo con los
siguientes criterios:
a. Documento PDF que contiene el análisis y diseño (algoritmo) del programa (5 Puntos). El cual debe de
contener lo siguiente:
• Acciones del programa (01 Puntos): Enumerar las opciones disponibles: explorar un planeta,
reparar la nave y enviar señales, además de los eventos nocturnos.
• Datos de entrada (01 Puntos): Especificar la información que se solicitará al usuario (por
ejemplo, nombre del capitán, elección diaria) y definir el tipo de dato para cada uno.
• Variables (01 Puntos): Listar las variables a utilizar, como combustible, oxígeno, suministros,
integridad de la nave y contador de días.
• Condiciones y cálculos (01 Puntos): Describir las restricciones y fórmulas aplicables (pérdida de
recursos por acción, impacto de eventos, etc.).
• Algoritmo (01 Puntos): Presentar un diagrama de flujo (elaborado en Draw.io) que detalle la
lógica completa del juego y las interacciones diarias.
Página 4 de 5
b. Programa funcional y libre de errores con lo solicitado (10 Puntos):
c.
• Documentación interna (01 Puntos): Incluir comentarios explica�vos en el código para
clarificar la lógica y funcionamiento de cada sección.
• Inicialización de recursos (3 Puntos): Configurar los valores iniciales de combus�ble, oxígeno,
suministros e integridad de la nave.
• Ciclo de días (01 Puntos): Implementar un ciclo que simule el paso de los días hasta alcanzar 10
días o hasta que se agoten los recursos.
• Acciones diarias (01 Puntos): Programar las opciones de explorar, reparar y enviar señales, con
sus respectivos efectos en los recursos.
• Gestión de recursos y eventos (01 Puntos): Manejar el consumo diario de recursos y la
generación aleatoria de eventos nocturnos.
• Condiciones de finalización (02 Puntos): Establecer y verificar las condiciones de término
(destino alcanzado, recursos agotados o rendirse).
• Menú interactivo ( Puntos): Crear un menú que permita al jugador elegir la acción diaria de
forma clara y ordenada.
