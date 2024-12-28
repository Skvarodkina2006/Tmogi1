# Задача 86
## Определить среднюю квадратическую погрешность в определении площади трапеции, где измерены основания а = 80.20 ± 0.15 м, b = 59.30 ± 0.14 м и высота  h = 61.40 ± 0.14 м.

## Дано

$а = 80.20м$

$m_а = ± 0.15 м$

$b = 59.30 м$

$m_b = ± 0.14 м$

$h = 61.40  м$

$m_h =± 0.14 м$


##   Найти
$m_S - ?$
### Решение

$$S = (a + b) \cdot  \frac{h} {2}$$

$$S = (80.20 + 59.30) \cdot  \frac{61.40} {2}$$

$$m_S=\sqrt{\left (  \frac{\partial S}{\partial a}\cdot m_a\right )^{2}+\left (  \frac{\partial S}{\partial b}\cdot m_b\right )^{2}+\left (  \frac{\partial S}{\partial h}\cdot m_h\right )^{2}}$$

$$\frac{\partial S}{\partial a} =\frac {h}{2}$$

$$\frac{\partial S}{\partial b} =\frac {h}{2}$$

$$\frac{\partial S}{\partial h} =\frac {a+b}{2}$$

$$m_S=\sqrt{4.605^{2}+4.298^{2}+9.765^{2}}$$

## Ответ
$m_S=16.1785 м²$
