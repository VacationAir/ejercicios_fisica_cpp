# 🧲 Ejercicios de Campos Eléctricos

---

## ⚡ **Ejercicio 1 — Línea de carga continua (densidad variable)**

**Enunciado:**  
Una barra rectilínea de longitud \( L \) está situada sobre el eje **x** desde \( x = -L/2 \) hasta \( x = +L/2 \).  
La densidad lineal de carga varía según  
\[
\lambda(x) = \lambda_0 \left( 1 + \alpha \frac{x}{L} \right)
\]
donde \( \lambda_0 \) y \( \alpha \) son constantes.

**Pregunta:**  
Calcular el campo eléctrico vectorial \( \mathbf{E} \) en un punto \( P(x_0, y_0) \).

**Fórmulas:**
\[
\mathbf{E}(\mathbf{r})=\frac{1}{4\pi\varepsilon_0}\int_{-L/2}^{L/2}
\frac{\lambda(x')(\mathbf{r}-\mathbf{r}')}{|\mathbf{r}-\mathbf{r}'|^3}\,dx',
\quad\text{donde } \mathbf{r}'=(x',0)
\]

Componentes:
\[
E_x=\frac{1}{4\pi\varepsilon_0}\int_{-L/2}^{L/2}\lambda(x')\frac{x_0-x'}{[(x_0-x')^2+y_0^2]^{3/2}}\,dx'
\]
\[
E_y=\frac{1}{4\pi\varepsilon_0}\int_{-L/2}^{L/2}\lambda(x')\frac{y_0}{[(x_0-x')^2+y_0^2]^{3/2}}\,dx'
\]

---

## 🧮 **Ejercicio 2 — Campo sobre el eje de un disco cargado uniformemente**

**Enunciado:**  
Un disco plano de radio \( R \) posee una densidad superficial uniforme de carga \( \sigma \) (C/m²).  
Se desea conocer el campo eléctrico sobre su eje a una distancia \( z \) del centro.

**Pregunta:**  
Calcular el campo eléctrico \( E_z \) en el punto \( P(0,0,z) \).

**Fórmulas:**

Expresión analítica:
\[
E_z(z)=\frac{\sigma}{2\varepsilon_0}\left(1-\frac{z}{\sqrt{z^2+R^2}}\right)
\]

Expresión integral (por anillos):
\[
E_z(z)=\frac{1}{4\pi\varepsilon_0}\int_{0}^{R}\frac{\sigma\,2\pi r'\,z}{(r'^2+z^2)^{3/2}}\,dr'
\]

---

## ⚙️ **Ejercicio 3 — Campo eléctrico de N cargas puntuales**

**Enunciado:**  
Se tienen \( N \) cargas puntuales \( q_i \) localizadas en posiciones  
\(\mathbf{r}_i = (x_i, y_i)\).

**Pregunta:**  
Calcular el campo eléctrico total \( \mathbf{E}(\mathbf{r}) \) en un punto arbitrario \( \mathbf{r} = (x, y) \).

**Fórmulas:**
\[
\mathbf{E}(\mathbf{r})=\frac{1}{4\pi\varepsilon_0}\sum_{i=1}^{N} q_i\frac{\mathbf{r}-\mathbf{r}_i}{|\mathbf{r}-\mathbf{r}_i|^3}
\]

Componentes:
\[
E_x=\frac{1}{4\pi\varepsilon_0}\sum_i q_i\frac{x-x_i}{[(x-x_i)^2+(y-y_i)^2]^{3/2}}
\]
\[
E_y=\frac{1}{4\pi\varepsilon_0}\sum_i q_i\frac{y-y_i}{[(x-x_i)^2+(y-y_i)^2]^{3/2}}
\]

---

## 🚀 **Ejercicio 4 — Movimiento de una partícula cargada en un campo eléctrico**

**Enunciado:**  
Una partícula de carga \( q \) y masa \( m \) se mueve bajo la acción de un campo eléctrico \( \mathbf{E}(\mathbf{r}) \).  
La posición y velocidad iniciales son \( \mathbf{r}(0)=\mathbf{r}_0 \) y \( \mathbf{v}(0)=\mathbf{v}_0 \).

**Pregunta:**  
Determinar las ecuaciones que describen su movimiento y los métodos de integración temporal.

**Fórmulas:**

Ecuaciones de movimiento:
\[
\mathbf{F} = q\,\mathbf{E}(\mathbf{r}), \qquad \mathbf{a} = \frac{\mathbf{F}}{m} = \frac{q}{m}\mathbf{E}(\mathbf{r})
\]

Método de **Euler explícito**:
\[
\mathbf{v}(t+\Delta t)=\mathbf{v}(t)+\mathbf{a}(t)\,\Delta t
\]
\[
\mathbf{r}(t+\Delta t)=\mathbf{r}(t)+\mathbf{v}(t)\,\Delta t
\]

Método **Velocity-Verlet**:
\[
\mathbf{r}(t+\Delta t)=\mathbf{r}(t)+\mathbf{v}(t)\Delta t+\tfrac{1}{2}\mathbf{a}(t)\Delta t^2
\]
\[
\mathbf{a}(t+\Delta t)=\frac{q}{m}\mathbf{E}(\mathbf{r}(t+\Delta t))
\]
\[
\mathbf{v}(t+\Delta t)=\mathbf{v}(t)+\tfrac{1}{2}[\mathbf{a}(t)+\mathbf{a}(t+\Delta t)]\Delta t
\]

---

## 🌍 **Ejercicio 5 — Esfera uniformemente cargada (Ley de Gauss)**

**Enunciado:**  
Una esfera sólida de radio \( R \) contiene carga total \( Q \) distribuida uniformemente.  
La densidad volumétrica de carga es  
\[
\rho = \frac{Q}{\tfrac{4}{3}\pi R^3}.
\]

**Pregunta:**  
Calcular el campo eléctrico \( E(r) \) en función de la distancia \( r \) al centro de la esfera.

**Fórmulas (resultado de la ley de Gauss):**
\[
E(r)=
\begin{cases}
\dfrac{1}{4\pi\varepsilon_0}\dfrac{Q\,r}{R^3}, & r < R \\[8pt]
\dfrac{1}{4\pi\varepsilon_0}\dfrac{Q}{r^2}, & r \ge R
\end{cases}
\]

---
