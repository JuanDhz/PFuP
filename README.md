#Características y especificaciones de los componentes usados para el Proyecto
##Matriz de Leds 64x64mm
Está compuesta de 4 módulos de 32x32 mm cada uno. Cada fila esta manejada por dos decodificadores 74HC138, cada columna esta manejada por dos 74HC59. El decodificador () maneja las columnas, el registro de desplazamiento se encarga de encender las filas, cada posición en la matriz se enciende al enviarle un cero.
###Datos técnicos
- Voltaje de operación: 5V
- Dimensiones: 64x64x9 mm
- Interfaz compatible con 12864LCD.
- LEDs rojos.

![](http://mco-s2-p.mlstatic.com/4-modulos-matriz-de-led-32x32-mm-tamano-64x64-mm-878701-MCO20416017079_092015-F.jpg)

##Sensores de distancia de ultrasonido HC-SR04

![](http://mco-s1-p.mlstatic.com/sensor-ultrasonido-distancia-hc-sr04-arduino-18989-MCO20164307534_092014-F.jpg)

El HC-SR04 es un sensor de distancias por ultrasonidos capaz de detectar objetos y calcular la distancia a la que se encuentra en un rango de 2 a 450 cm. El sensor funciona por ultrasonidos y contiene toda la electrónica encargada de hacer la medición. Su uso es tan sencillo como enviar el pulso de arranque y medir la anchura del pulso de retorno. De muy pequeño tamaño, el HC-SR04 se destaca por su bajo consumo, gran precisión y bajo precio por lo que está reemplazando a los sensores polaroid en los robots más recientes.
Datos técnicos
###Características:
- Dimensiones del circuito: 43 x 20 x 17 ms.
- Tensión de alimentación: 5 V.
- Frecuencia de trabajo: 40 KHz.
- Rango máximo: 4.5 m.
- Rango mínimo: 1.7 cm.
- Duración mínima del pulso de disparo (nivel TTL): 10 μS.
- Duración del pulso eco de salida (nivel TTL): 100-25000 μS.
- Tiempo mínimo de espera entre una medida y el inicio de otra 20 mS.

###Pines de conexión:
- VCC
- Trig (Disparo del ultrasonido)
- Echo (Recepción del ultrasonido)
- GND



##MJduino UNO



Se usó una tarjeta MJduino UNO, la cual es una versión mejorada del Arduino UNO. Esta tarjeta cumple con las mismas características básicas de funcionamiento, con la diferencia de que este posee pines extra para alimentación, más tierras, y pines extra para comunicación serial, además de contar con el mismo procesador ATmega 328.





##Display de 7 segmentos

Es una forma de representar números en equipos electrónicos. Está compuesto de siete segmentos que se pueden encender o apagar individualmente. Cada segmento tiene la forma de una pequeña línea. Este componente se utiliza para la representación de números en muchos dispositivos electrónicos, debido en gran medida a su simplicidad. Externamente su forma difiere considerablemente de un led típico, internamente están constituidos por una serie de leds con unas determinadas conexiones internas. Se utilizó un manejador de display de referencia GM74LS47N
