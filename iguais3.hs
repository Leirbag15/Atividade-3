iguais3 x y z = if ((x==y && x/=z) || (x==z && x/=y) || (y==z && z/=x) )then 2 else if (x==y && x==z) then 3 else 0
