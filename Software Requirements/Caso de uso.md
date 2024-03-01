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

**ID:** 001
**Nombre:** Préstamo de un artículo por edificio
**Descripción:**
Un estudiante o miembro del ITESO necesita un artículo en préstamo y lo busca en la aplicación MiApoyoITESO, filtrando por el edificio en el que se encuentra. La aplicación muestra los artículos disponibles en ese edificio, el usuario selecciona el artículo que desea y lo solicita en préstamo. El prestamista, que también es miembro de la comunidad ITESO, recibe una notificación y aprueba o rechaza la solicitud. Si la solicitud es aprobada, el prestatario recibe una notificación con la información del préstamo y puede recoger el artículo en el edificio seleccionado.
**Beneficio:**
- Facilita el acceso a recursos para la comunidad ITESO.
- Reduce la necesidad de desplazamientos por el campus.
- Promueve la colaboración y el sentido de comunidad.
- Optimiza la gestión de los préstamos de artículos.
**Precondiciones:**
- El usuario y el prestamista tienen un perfil registrado en la aplicación MiApoyoITESO.
- La aplicación MiApoyoITESO tiene acceso a la información sobre la ubicación de los artículos disponibles.
- Los edificios tienen un sistema para gestionar la entrega y devolución de los artículos prestados.
**Trigger:**
El usuario necesita un artículo en préstamo y abre la aplicación MiApoyoITESO.
**Postcondiciones:**
- El usuario ha obtenido el artículo en préstamo.
- El prestamista ha recibido la solicitud de préstamo y la ha aprobado.
- El préstamo ha sido registrado en el sistema MiApoyoITESO.
**Actores:**
- **Usuario:** Estudiante o miembro del ITESO que necesita un artículo en préstamo.
- **Prestamista:** Estudiante o miembro del ITESO que ofrece un artículo en préstamo.
- **Personal del edificio:** Persona responsable de gestionar la entrega y devolución de los artículos prestados.
- **Sistema MiApoyoITESO:** Sistema que administra los préstamos de artículos entre la comunidad ITESO.
**Escenario principal:**
1. El usuario ingresa a la aplicación MiApoyoITESO y selecciona la opción "Ver artículos".
2. La aplicación muestra una lista de edificios con la cantidad de artículos disponibles en cada uno.
3. El usuario selecciona el edificio que le interesa.
4. La aplicación muestra una lista de artículos disponibles en ese edificio, con información como la descripción, la imagen, la cantidad disponible, las condiciones de préstamo y el nombre del prestamista.
5. El usuario selecciona el artículo que desea solicitar.
6. La aplicación solicita al usuario que confirme la solicitud de préstamo.
7. El sistema MiApoyoITESO notifica al prestamista sobre la solicitud de préstamo.
8. El prestamista aprueba o rechaza la solicitud de préstamo.
9. Si la solicitud es aprobada, el sistema MiApoyoITESO envía una notificación al usuario con la información del préstamo, incluyendo la fecha límite de devolución.
10. El usuario se dirige al edificio seleccionado para recoger el artículo prestado.
11. El usuario presenta la notificación de préstamo al personal del edificio para obtener el artículo.
**Escenarios alternativos:**
- El usuario no encuentra el artículo que necesita en el edificio seleccionado.
- El prestamista no aprueba la solicitud de préstamo.
**Excepciones:**
- El sistema MiApoyoITESO no tiene acceso a la información sobre la ubicación de los artículos disponibles.
- El edificio no tiene un sistema para gestionar la entrega y devolución de los artículos prestados.
**Notas:**
- Se pueden agregar más detalles a los escenarios principal y alternativos.
- Se pueden definir excepciones adicionales.