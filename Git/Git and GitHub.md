# General
### Crear repositorio local
- git init (iniciar carpeta git)
### Clonar repositorio 

### Ver cambios y modificaciones
- git status

### Agregar los cambios al stage
- git add . (add all changes)
##### Comentario de os cambios 
- git commit -m ""

### Agregar una localidad remota
- git remote add origin https://github.com/usr/repo

### Subir staged changes a nuestra branch master
- git push origin master

### Ruta de el repositorio
- git remote -v

### Obtener cambios de el repositorio
- git pull

# Stash
- push
- list
- pop
- apply
- drop N
# Roles de Git
En función del manejador de repositorios que utilizas (GitHub, GitLab, u otro), se tienen distintos roles con distintos permisos.
- *Read*
- *Triage*: Manejan issues y discusiones pero realmente no escriben código
- *Write*: cualquiera que activamente contribuye
- *Maintain*: Manejan el repo pero no tienen accesso a cosas muy críticas
- *Admin*: Full power
# Ramas protegidas
Es una rama en la que sólo ciertos roles o usuarios pueden trabajar
- por default la rama *main* está protegida.
- El que crea el repo recibe el rol de *Owner*
- En las ramas protegidas sólo ciertos usuarios pueden hacer *Force Push*.
# Flujos de trabajo
## Centralizado
Los devs clonan el *repo central* en su pc de forma local. Cada quien tiene una copia del proyecto.
Todos trabajan sobre la rama *main*.
![[Pasted image 20241016073931.png|350]]
## Feature Branching
Se basa en que cada función nueva en el software se haga en una nueva rama, *encapsulando* esa función en ella.

| Pros                                                         | Contras                                                           |
| ------------------------------------------------------------ | ----------------------------------------------------------------- |
| Permite trabajar en funciones sin afectar el código original | Tiene *pasos adicionales* al momento de crear ramas, ineficiente. |
| Separar más claramente las funciones nuevas                  | Confuso ya que se puede llenar de muchas branches                 |
|                                                              |                                                                   |
## Gitflow Workflow
Se mantienen varias branches
- *Main*: Código principal
- *Develop*: Es la que se utiliza para integrar en ella los cambios de las feature branches
- *Hotfix*: Ramas que contienen arreglos
![[Pasted image 20241016075041.png]]
## Forking Workflow
- se tienen al menos, *dos repositorios remotos*, no sólo uno
- Usado en proyectos *Open Source*
- Permite que cada dev tenga su repo remoto, y los cambios que hacen ahí los integra el administrador del repo original como prefiera.
