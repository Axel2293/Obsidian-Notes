# Historia de usuario
ID de historia de usuario: único y cada historia de usuario deberia de tener uno.
Usar el template
- Como un **usuario-especifico**, quiero poder **realizar-una-acción**, para lograr **objetivo**.
- Quién, qué y por qué.
Descripción breve
Razón de negocio
Criterios de aceptación: todo lo que me permite determinar que si lo logra.
Detalles de la implementación: cosas especificas que se necesitan agregar dado por alguien que ya sabe para que el que lo va a hacer tenga una idea técnica. (mínimo de 5 a 10 detalles)
Notas de prueba: recomendaciones de como usarías para verificar que todo se cumple, dado por alguien con conocimiento de negocio. (especifico, pero muy resumido y como lista)

```
## Historia de usuario: Préstamo de un artículo por edificio

**ID de historia de usuario:** 001

**Como un estudiante de ingeniería**, quiero poder **solicitar en préstamo un multímetro que necesito para un proyecto**, para **no tener que comprar uno nuevo y ahorrar dinero**.

**Descripción breve:**

La aplicación MiApoyoITESO permite a los usuarios solicitar en préstamo artículos que se encuentran en diferentes edificios del campus. El usuario puede filtrar la búsqueda por edificio y por tipo de artículo. La aplicación muestra la disponibilidad de los artículos y el usuario puede solicitar el préstamo del artículo que necesita. El prestamista, que también es miembro de la comunidad ITESO, recibe una notificación y aprueba o rechaza la solicitud. Si la solicitud es aprobada, el usuario recibe una notificación con la información del préstamo y puede recoger el artículo en el edificio seleccionado.

**Razón de negocio:**

- Facilita el acceso a recursos para la comunidad ITESO.
- Reduce la necesidad de desplazamientos por el campus.
- Promueve la colaboración y el sentido de comunidad.
- Optimiza la gestión de los préstamos de artículos.

**Criterios de aceptación:**

- La aplicación debe permitir al usuario buscar y filtrar artículos por edificio y por tipo de artículo.
- La aplicación debe mostrar la disponibilidad de los artículos en tiempo real.
- La aplicación debe permitir al usuario solicitar el préstamo de un artículo.
- El prestamista debe recibir una notificación de la solicitud de préstamo.
- El prestamista debe poder aprobar o rechazar la solicitud de préstamo.
- El usuario debe recibir una notificación con la información del préstamo si la solicitud es aprobada.
- El usuario debe poder recoger el artículo en el edificio seleccionado.

**Detalles de la implementación:**

- La aplicación utilizará un sistema de gestión de préstamos para gestionar las solicitudes de préstamo.
- La aplicación utilizará un sistema de notificaciones para notificar al prestamista y al usuario del estado de la solicitud de préstamo.
- La aplicación utilizará un sistema de geolocalización para mostrar al usuario la ubicación del edificio donde se encuentra el artículo.

**Notas de prueba:**

- Se realizarán pruebas para asegurar que la aplicación funciona correctamente en diferentes dispositivos.
- Se realizarán pruebas de rendimiento para asegurar que la aplicación puede gestionar un alto volumen de solicitudes de préstamo.
- Se realizarán pruebas de seguridad para asegurar que la información del usuario está protegida.
```