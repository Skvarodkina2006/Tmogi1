# Задача 7
## В треугольнике  АВС  измерены сторона b = 143.18 ± 0.06 м и  углы  А = 51° 52′ ± 30″ и  B = 65° 41′ ± 30″.  Найти относительную  погрешность вычисления стороны а, если стороны а, b, c лежат напротив углов А, B, C соответственно. В ответ записать знаменатель относительной погрешности.
## Дано

$b = 143.18 м$

$m_b = ± 0.06 м$

$А = 51^{\circ} 52' $

$m_А =  ± 30''$

$B = 65^{\circ} 41' $

$m_B =  ± 30''$


##   Найти
$m-?$
### Решение

$$C = 180^{\circ} - A - B$$

$$A = 51^{\circ} 52' = 51^{\circ} + \frac{52'}  {60} = 51.8667^{\circ}$$

$$B = 65^{\circ} 41' = 65^{\circ} + \frac{41'}  {60} = 65.6833^{\circ} $$


$$\frac{a}  {sin A} =\frac{ b}  {sin B}- Теорема \ синусов$$


$$a = b \cdot \frac{ sin A}  {sin B}$$

$$\frac{m_a}{a}=\sqrt{\left (  \frac{\partial a}{\partial b}\cdot \frac{m_b}{b}\right )^{2}+\left (  \frac{\partial a}{\partial A}\cdot m_A\right )^{2}+\left (  \frac{\partial a}{\partial B}\cdot m_B\right )^{2}}$$

$$\frac{\partial a}{\partial b}=\frac{sin A} {sin B}$$

$$\frac{\partial a}{\partial A}=\frac{cos A} {sin B}$$

## Ответ
$m=0.000439274$
