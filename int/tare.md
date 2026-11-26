# Guia definitiva de markdwon (sintaxis completa y ecuaciones )

Markdwon es un leguanje de marcado ligero que permite aplicar 
a texto plano de manera rapida y visual. Se utiliza ampliamnete 
en plataformas como gitHub,notion,jupyter notebooks,discord
y editores de codigo

### 1 Formato de texto basico 

aplicar estilos al texto utilizando simpobolos simples ants y despues de las palabras sin dejar entre el simbolo y la letra.

| ELEMENTO | SINTAXIS MARKDOWN |
| :--- | :--- |
| **NEGRITA** | `**texto en negrita**` O `__texto en negrita__` |
|*cursiva*|`*texto en cursiva *` O `_texto en cursiva_`|
| ***Negritas y cursivas*** |`***texto combinado***`|~~tachado~~| `~~texto tachado~~`|

### 2. ENCABEZAODS (TITULOS)

utiliza el simbolo `#`al inicio de una linea seguido de un espacio obligatorio. va del nivel 1 (mas grande ) al niel 6 (mas peqeño)

# encabezado 1 (titulo principal)
## encabezado 2 (seccion)
### encabezado 3 (subseccion)
#### encabezado 4 
##### encabeazado 5
###### encabeazado 6

### 3. listas 
#### listas desordenadas(viñetas)

Usa un asterisco `*`, un guion `-` o un simbolo más `+`sefuido de un espacio. para anidar subelementos, añade una sangria de 4 espacios o un tabulador

- elemento principal A
    - subelemento A1
    - Subelemento A2
    - elemento principal B
    - subelemento B1
    - Subelemento B2
- elemento principal p
#### listas ordenadas  (numeradas)
colocar un numero seguido de un punto y un espacio. el orden numerico real en el codigo no importa;el renderizador lo corregira automaticamente.

1. primer elemento
2. segundo elemento
1. tercer elemento(aparecera como 3)

#### listas de tareas (check list)
combina listas desordenadas con corchetes. usa un epacio en blanco para areas pendientes y una x minuscula para tareas  completas.

- [X] tarea terminada
- [ ] tarea pendiente 
### 4 enlaces e imagenes











###5 bloques de codigo 
* **codigo en linea** * rodea cosigos cortos usando comillas simple e invertida
(\`)

el comando asico es `sudo apt update`

* **Bloques de codigo** * rode multiples lineas de codigo usando tres comillas invertidas al inicio y al final 

``` PYTON
def saludar(nombre):
```

### 7 tablas 


| NOMBRE | edad | OCUPACION |
| :--- | :---: | ---: |
| ana (izq) |28 (CENTRO) | desarollo(der) |
| carlos | 34  | diseñador |


### 8 ec matematicas como en latex

#### ECUACIONES EL LINEA
ocupamos simbolo de dolar **un par de simbolo de dolar**

$E=mc^2$

#### ecuaciones en bloque
 **dos pares de simbolo en dolar**

 $$X=\frac{-b \pm \sqrt {b^2-4ac}}{-2a}$$

 #### diccionario esecial de simbolos latex para ecuaciones:

 * **Subindices y superindices:** USA`_`para subindice y `^`para exponentes. si contiene mas de un caracter encierrarlos entre `{}`
 *`$x_i$`
 * `$10^{23}$`

 * **fracciones:** usa `\frac{numerador}{denominador}`
*    *`$\frac{1}{X}$`

* **raices** usa `\sqrt{expresion}`. para raices de otra potencia usa `\sqrt[n]{X}`
    * `$\sqrt{x^2 + y^2}$`

* **letras griegas:**  escribe barra invertida seguida del nombre de la letra en ingles. usa mayuscula inicial si requieres la variante capitalizada.
    *`$\alpha, \beta, \gamma, \pi$`
   *`$\delta, \omega$`

* **operadores grandes** 
   *Sumatoria: `$\sum_{I=1}^{n}$`
   *integral: `$\int_{a}^{b}$`
   
* ** Matrices** delimita el blo ue con `\begin{matrix}` y `\ent{matrix}` {usa`pmatrix` si deseas que lleve parentecies circulares}. separa columnas con `&` y filas con `\\`

$$A=\begin{pmatrix} a & b \\ c & d \end{pmatrix}$$


