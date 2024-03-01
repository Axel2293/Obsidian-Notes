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

##   Caso de Uso: Adivinar Artista (Modo de Juego) - Basado en Género

**ID:** 12345

**Nombre:** Adivinar la canción a partir del artista (Modo de Juego) - Basado en Género

**Descripción:** El usuario selecciona un género musical y la aplicación reproduce un fragmento de una canción de un artista aleatorio de ese género. El usuario debe adivinar el nombre de la canción y/o el artista.

**Beneficio:** Permite a los usuarios poner a prueba su conocimiento musical y descubrir nuevas canciones de diferentes géneros de forma divertida y desafiante.

**Pre-condiciones:**

- El usuario debe tener una cuenta en la aplicación.
- El usuario debe haber iniciado sesión en la aplicación.

**Trigger:**

1. El usuario hace clic en el botón "Adivinar Artista (Modo de Juego)" en la pantalla principal.
2. La aplicación muestra una lista de géneros musicales.

**Post-condiciones:**

- El usuario ha adivinado correctamente el nombre de la canción y/o el artista.
- La aplicación muestra la información completa de la canción, incluyendo el nombre del artista, el álbum al que pertenece y la letra.

**Actores:**

- Usuario: Persona que utiliza la aplicación.
- Aplicación: MelodyMinds

**Escenario principal (Happy path):**

1. El usuario selecciona un género musical de la lista.
2. La aplicación reproduce un fragmento de una canción de un artista aleatorio del género seleccionado.
3. El usuario tiene un tiempo limitado para adivinar el nombre de la canción y/o el artista.
4. El usuario puede utilizar pistas para ayudarlo a adivinar la canción (opcional).
5. Si el usuario adivina correctamente, la aplicación muestra la información completa de la canción.
6. Si el usuario no adivina correctamente, la aplicación muestra la información correcta de la canción.

**Alternativos:**

1. El usuario no adivina la canción en el tiempo límite.

- La aplicación muestra la información completa de la canción.
- El usuario puede volver a intentarlo en la siguiente ronda con un nuevo género.

2. El usuario utiliza todas las pistas disponibles y no adivina la canción.

- La aplicación muestra la información completa de la canción.
- El usuario puede volver a intentarlo en la siguiente ronda con un nuevo género.

3. El usuario no selecciona un género musical en el tiempo límite.

- La aplicación muestra un mensaje de error indicando que el usuario debe seleccionar un género.
- El usuario puede volver a intentarlo.

**Excepciones:**

1. La aplicación no tiene canciones del género seleccionado.

- La aplicación muestra un mensaje indicando que no se encontraron canciones del género seleccionado.
- El usuario puede seleccionar otro género.

2. La aplicación no puede conectarse al servidor.

- La aplicación muestra un mensaje de error indicando que no hay conexión a internet.
- El usuario puede volver a intentarlo más tarde.

**Consideraciones adicionales:**

- La aplicación puede ofrecer diferentes niveles de dificultad para el modo de juego.
- La aplicación puede mostrar la puntuación del usuario al final de cada ronda.
- La aplicación puede ofrecer la posibilidad de competir con amigos en las redes sociales.
- La aplicación puede mostrar una lista de canciones del mismo género que la canción adivinada para que el usuario pueda descubrir más música.

## Análisis SMART del Caso de Uso: Adivinar Artista (Modo de Juego) - Basado en Género

**S - Specific (Específico):**

- **Objetivo:** Aumentar el conocimiento musical de los usuarios y su capacidad para descubrir nuevas canciones de diferentes géneros.
- **Funcionalidad:** Modo de juego en el que el usuario adivina la canción a partir del artista, con selección previa del género musical.
- **Métricas:**
    - Número de usuarios que juegan al modo de juego.
    - Porcentaje de usuarios que adivinan correctamente la canción.
    - Tiempo promedio que tardan los usuarios en adivinar la canción.
    - Número de canciones descubiertas por los usuarios.

**M - Measurable (Medible):**

- Las métricas mencionadas anteriormente se pueden medir utilizando herramientas de análisis de aplicaciones.
- Se pueden realizar encuestas a los usuarios para obtener información sobre su experiencia con el modo de juego.

**A - Achievable (Alcanzable):**

- El modo de juego se puede desarrollar utilizando tecnologías existentes.
- Se pueden establecer objetivos realistas para las métricas, como un aumento del 10% en el número de usuarios que juegan al modo de juego.

**R - Relevant (Relevante):**

- El modo de juego se alinea con el objetivo de la aplicación de ayudar a los usuarios a descubrir nueva música.
- El modo de juego es atractivo y desafiante para los usuarios.

**T - Time-bound (Acotado en el Tiempo):**

- Se puede establecer un plazo para el desarrollo del modo de juego, como 3 meses.
- Se pueden establecer objetivos de tiempo para las métricas, como aumentar el porcentaje de usuarios que adivinan correctamente la canción en un 5% en 6 meses.

**Plan de Acción:**

1. Desarrollar el modo de juego.
2. Implementar las métricas de seguimiento.
3. Lanzar el modo de juego a los usuarios.
4. Monitorizar las métricas y realizar ajustes en el modo de juego si es necesario.
5. Realizar encuestas a los usuarios para obtener comentarios.

**Recursos:**

- Desarrolladores de software
- Diseñadores de UX/UI
- Analistas de datos

**Presupuesto:**

- El presupuesto dependerá del alcance del modo de juego y de los recursos necesarios.

**Riesgos:**

- El modo de juego no es atractivo para los usuarios.
- El modo de juego no es lo suficientemente desafiante.
- El modo de juego no cumple con los objetivos establecidos.

**Mitigación de Riesgos:**

- Realizar pruebas de usuario para obtener comentarios sobre el modo de juego.
- Ajustar la dificultad del modo de juego en función de los comentarios de los usuarios.
- Monitorizar las métricas y realizar ajustes en el modo de juego si es necesario.