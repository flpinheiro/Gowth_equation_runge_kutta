set term jpeg
set output "out.jpeg"
set key at 30,0.3
set xl "t"
set yl "M(t)"
alpha = 3./4.
b = 1
delta = 1/(1-alpha)
tau = delta / b
epsilon = 0.6
x0 = 3.5
plot  [0:30] [0: 1.4] "out.txt" t "numerico", (1- exp(-(x + x0)/tau))**(delta), (1- (1-epsilon) * exp(-x /tau))**(delta)
