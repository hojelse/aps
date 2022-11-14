# Math notes
## Sequences
### Arithmetic progression sum
Def. $a_n = a + (n–1)d$
$$ a + ... + z = \frac{n(a+z)}{2}$$
, where $a$: first number, $z$: last number, $n$: amount of numbers

### Geometric progression
$$\sum_{n=0}^{n-1}{ar^k} = ar^0 + ar^1 + ... + ar^{n-1} = a\left(\frac{1-r^n}{1-r}\right)$$
, for $r \neq 1$

### Triangular numbers
$$\sum_{x=1}^{n}{x} = 1 + 2 + 3 + ... + n = \frac{n(n+1)}{2} = \binom{n+1}{2}$$

### Square pyramidal numbers
$$\sum_{x=1}^{n}{x^2} = 1^2 + 2^2 + 3^2 + ... + n^2 = \frac{n(n+1)(2n+1)}{6}$$

### Harmonic numbers
$$\sum_{x=1}^{n}{\frac{1}{x}} = 1 + \frac{1}{2} + \frac{1}{3} + ... + \frac{1}{n} \leq \log_2(N) + 1$$

### Fibonacci closed-form
$$\text{fib}(n) = \frac{(1+\sqrt{5})^n - (1-\sqrt{5})^n}{2^n\sqrt{5}}$$

## Areas
Trapezoid area $A = \frac{h}{2} \cdot (a + b)$ where $a$ and $b$ are parallel

Sphere surface area $S = 4\pi \cdot r^2$

Sphere volume $V = \frac{4}{3} \cdot r^3$

Cone surface $S = \pi r(l+r)$

Cone volume $V = \frac{1}{3}\pi hr^2$

## Combinatorics
$P(n,r) = \frac{n!}{(n-r)!}$

$C(n,r) = \binom{n}{r} = \frac{n!}{r!(n-r)!}$

$C(n,r) = C(n, n-r)$

$P(X=r) = C(n,r) \cdot p^r \cdot (1-p)^{n-r}$

## Probability
Bayes' Theorem
$$P(B|A) = \frac{P(A|B) P(B)}{P(A)}$$
$$P(B|A) = \frac{P(A|B)P(B)}{P(A|B)P(B) + P(A|\bar{B})P(\bar{B})}$$
$$P(B_k|A) = \frac{P(A|B_k)P(B_k)}{P(A|B_1)P(B_1) \cdot ... \cdot P(A|B_n)P(B_n)}$$
