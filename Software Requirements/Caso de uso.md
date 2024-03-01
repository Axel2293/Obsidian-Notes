- ID: único
- Nombre: breve y descriptivo
- Descripción: detallada
- Beneficio: Describa la relevancia de este requerimiento con el proyecto
- Pre-condiciones: requerimientos previos necesarios para lograr este requerimiento.
- Trigger: Acción inicial que dispara el flujo de este requerimiento.
- Post-condiciones: Resultado positivo de lograr el objetivo de este requerimiento.
- Actores: Humanos, herramientas, hardware, servicios externos p o cualquier ente ajeno al sistema que recibe o no nos provee algo durante el flujo de este requerimiento. El sistema no puede ser un actor.
- Escenario principal (Happy path): Debe existir y ser único. Nos lleva desde el trigger a lograr las post-condiciones.
- Alternativos: Puede no haber, puede haber varios. Nos llevan desde el trigger hasta lograr las post-condiciones pero son resultado de una decisión en el camino del happy path que nos obliga a desviarnos pero siempre nos regresan a poder completar el requerimiento. *Es* inaceptable que un escenario alternativo no concluye el objetivo del requerimiento de manera positiva.
- Excepciones: puede no haber, puede haber muchas, en este caso no se llega a las post-condiciones. *No* consideres como excepciones como excepciones asuntos ajenos al sistema, como falta de batería, falla de conexión, etc.
## Gemini
### Caso de uso: Préstamo de un artículo por edificio

Dame el caso de uso para el siguiente requerimiento con estos parametros e información: Requerimiento: Adivinar artista, Parámetros:  ID: único
- Nombre: breve y descriptivo
- Descripción: detallada
- Beneficio: Describa la relevancia de este requerimiento con el proyecto
- Pre-condiciones: requerimientos previos necesarios para lograr este requerimiento.
- Trigger: Acción inicial que dispara el flujo de este requerimiento.
- Post-condiciones: Resultado positivo de lograr el objetivo de este requerimiento.
- Actores: Humanos, herramientas, hardware, servicios externos p o cualquier ente ajeno al sistema que recibe o no nos provee algo durante el flujo de este requerimiento. El sistema no puede ser un actor.
- Escenario principal (Happy path): Debe existir y ser único. Nos lleva desde el trigger a lograr las post-condiciones.
- Alternativos: Puede no haber, puede haber varios. Nos llevan desde el trigger hasta lograr las post-condiciones pero son resultado de una decisión en el camino del happy path que nos obliga a desviarnos pero siempre nos regresan a poder completar el requerimiento. *Es* inaceptable que un escenario alternativo no concluye el objetivo del requerimiento de manera positiva.
- Excepciones: puede no haber, puede haber muchas, en este caso no se llega a las post-condiciones. *No* consideres como excepciones como excepciones asuntos ajenos al sistema, como falta de batería, falla de conexión, etc.

## Caso de Uso: Adivinar Artista

**ID:** 12345

**Nombre:** Adivinar la canción a partir del nombre del artista

**Descripción:** El usuario ingresa el nombre de un artista y la aplicación le presenta una lista de canciones de ese artista. El usuario debe seleccionar la canción correcta entre las opciones disponibles.

**Beneficio:** Permite a los usuarios poner a prueba su conocimiento musical y descubrir nuevas canciones de sus artistas favoritos.

**Pre-condiciones:**

- El usuario debe tener una cuenta en la aplicación.
- El usuario debe haber iniciado sesión en la aplicación.

**Trigger:**

- El usuario hace clic en el botón "Adivinar Artista" en la pantalla principal.
- El usuario introduce el nombre de un artista en la barra de búsqueda.

**Post-condiciones:**

- El usuario ha seleccionado la canción correcta de la lista de opciones.
- La aplicación muestra la letra de la canción seleccionada.

**Actores:**

- Usuario: Persona que utiliza la aplicación.
- Aplicación: MelodyMinds

**Escenario principal (Happy path):**

1. El usuario hace clic en el botón "Adivinar Artista" en la pantalla principal.
2. El usuario introduce el nombre de un artista en la barra de búsqueda.
3. La aplicación presenta una lista de canciones del artista seleccionado.
4. El usuario selecciona la canción correcta de la lista de opciones.
5. La aplicación muestra la letra de la canción seleccionada.

**Alternativos:**

1. El usuario introduce un nombre de artista incorrecto.

- La aplicación muestra un mensaje de error indicando que el nombre del artista no es válido.
- El usuario puede volver a intentar introducir el nombre del artista.

2. El usuario no selecciona ninguna canción de la lista.

- La aplicación muestra un mensaje de error indicando que el usuario debe seleccionar una canción.
- El usuario puede volver a intentar adivinar la canción.

**Excepciones:**

1. La aplicación no tiene canciones del artista seleccionado.

- La aplicación muestra un mensaje indicando que no se encontraron canciones del artista seleccionado.
- El usuario puede buscar otro artista.

2. La aplicación no puede conectarse al servidor.

- La aplicación muestra un mensaje de error indicando que no hay conexión a internet.
- El usuario puede volver a intentarlo más tarde.

**Consideraciones adicionales:**

- La aplicación puede ofrecer pistas al usuario para ayudarlo a adivinar la canción.
- La aplicación puede mostrar la puntuación del usuario al final del juego.
- La aplicación puede ofrecer la posibilidad de compartir los resultados del juego con amigos en las redes sociales.

**Espero que este caso de uso sea útil para tu proyecto. ¡Buena suerte!**