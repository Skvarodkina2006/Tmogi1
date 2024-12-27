# Задача 9
## В треугольнике  АВС  измерены три стороны a = 122.57 ± 0.06 м b = 161.85 ± 0.07 м и с = 106.28 ± 0.04.  Вычислить среднюю квадратическую погрешность угла  А и выразить её в секундах.

## Дано
$a = 122.57м$

$m_a = ± 0.06 м$

$b = 161.85м$

$m_b = ± 0.07 м$

$с = 106.28м$

$m_c = ± 0.04 м$

$Δ_2 = 3мм$

$Δ_3 = 2мм$

##   Найти
$m_A - ?$
### Решение

$$cos(A) = b^2 + c^2 - \frac{a^2}{2bc}$$

$$\frac{\partial A}{\partial a}=\frac{-a}{\sqrt{\left ( \left ( b^{2}+c^{2}-a^{2} \right )\cdot \left ( 2\cdot b\cdot c \right ) \right )}}$$

$$\frac{\partial A}{\partial b}=\frac{b\cdot \left ( b^{2}+c^{2}-a^{2} \right )}{   2\cdot b\cdot c \sqrt{ \left ( b^{2}+c^{2}-a^{2} \right )}}$$

$$\frac{\partial A}{\partial c}=\frac{c\cdot \left ( b^{2}+c^{2}-a^{2} \right )}{   2\cdot b\cdot c \sqrt{ \left ( b^{2}+c^{2}-a^{2} \right )}}$$ 

$$m_A=\sqrt{\left (  \frac{\partial A}{\partial a}\cdot m_a\right )^{2}+\left (  \frac{\partial A}{\partial b}\cdot m_b\right )^{2}+\left (  \frac{\partial A}{\partial c}\cdot m_c\right )^{2}}$$

## Ответ
$m_A=± 3.02079''$
